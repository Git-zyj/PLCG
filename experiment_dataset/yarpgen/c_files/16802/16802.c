/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_7;
    var_19 *= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (min(((min((arr_4 [13]), 128))), (max((arr_6 [3] [i_2 - 4]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_2 + 1])))));
                    var_20 -= max((arr_6 [i_1 - 2] [i_2 - 2]), (arr_6 [i_1 - 4] [i_2 - 3]));
                    arr_8 [i_0] [i_0] [8] = ((1 * (max((var_12 ^ var_6), (((~(arr_6 [i_0] [i_1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
