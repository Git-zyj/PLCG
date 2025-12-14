/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((((((max((arr_2 [i_1 - 3]), (arr_0 [i_1 + 1])))) + 2147483647)) << (((((arr_1 [i_1 - 3]) + 46)) - 4))));
                var_11 -= ((+(((arr_2 [i_1 - 2]) ? (arr_1 [i_0]) : (!var_6)))));
                var_12 = ((~(((arr_2 [i_1 + 1]) / (arr_3 [i_1 - 3] [i_1])))));
            }
        }
    }
    var_13 = (max(var_13, var_9));
    var_14 = var_8;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_15 *= var_4;
                    var_16 ^= (((((arr_14 [i_2] [i_3] [18]) ? ((min((arr_8 [i_2] [i_4]), 105))) : (arr_11 [i_3 - 1] [i_3 + 4]))) / var_5));
                }
            }
        }
    }
    #pragma endscop
}
