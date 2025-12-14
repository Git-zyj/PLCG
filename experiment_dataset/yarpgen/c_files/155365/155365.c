/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((~((max((var_0 >= var_6), (var_6 > 58618))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 ^= (~51447);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (arr_0 [i_0 + 1]);
            var_13 -= (arr_6 [4]);
        }
        var_14 = var_5;
        var_15 = (max(var_15, (arr_2 [8])));
    }
    var_16 = (min(var_16, var_5));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_17 = (max(var_10, ((((arr_10 [i_2] [i_2]) && var_4)))));
                var_18 = ((((((arr_8 [i_3]) / (var_10 / 6)))) ? (((((arr_13 [i_2] [i_3] [i_3]) * var_3)) / var_0)) : -1));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_19 -= ((43253 ? var_7 : ((max(var_3, (arr_14 [i_5 - 3] [i_5] [i_5 - 3] [i_5]))))));
                            var_20 -= (arr_12 [17]);
                            var_21 ^= (max(17178002970971799278, 0));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_8 | (31931 + 51447)));
    #pragma endscop
}
