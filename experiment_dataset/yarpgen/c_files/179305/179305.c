/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = var_8;
                        var_20 = (var_4 >= var_11);
                        arr_11 [i_2] [1] &= -var_5;
                        var_21 -= (((var_6 % var_15) > var_3));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = (min(var_22, var_3));
                        arr_15 [i_4] [12] [i_0] &= (var_10 / var_4);
                    }
                    var_23 = (max(var_23, (((((min((max(var_2, var_4)), (var_6 >= var_5)))) > (((var_12 + 2147483647) >> (var_2 - 198))))))));
                    var_24 ^= var_5;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_0 + 1] [i_2] [i_0 + 1] [i_0] = ((((var_18 << (var_8 - 227))) | ((((var_16 ^ var_3) || (var_15 || var_15))))));
                                arr_22 [i_0 - 1] [i_6] [i_6] [i_5] [6] |= (((!var_8) < (var_2 - var_3)));
                                var_25 ^= ((var_0 + (max(((var_17 ? var_16 : var_2)), (var_6 > var_4)))));
                            }
                        }
                    }
                    var_26 = var_8;
                }
            }
        }
        arr_23 [2] &= (((((!var_11) < (var_7 % var_4))) ? (((((min(var_4, var_2))) > -var_10))) : var_7));
    }
    var_27 = var_0;
    #pragma endscop
}
