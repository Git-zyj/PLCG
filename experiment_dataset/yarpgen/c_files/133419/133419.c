/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((max((4294967295 % -1462710922), (var_0 > var_4))))));
    var_19 -= 92;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((-(min((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]), 2079638133))));
                    arr_7 [i_0] [i_0] = (((arr_4 [i_2] [i_2 - 1] [i_2 - 1]) ? (((min((arr_5 [13] [i_2 - 1] [i_2 - 1]), (arr_5 [i_2] [i_2 - 1] [i_2 - 1]))))) : ((var_11 + (arr_5 [i_2] [i_2 - 1] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
