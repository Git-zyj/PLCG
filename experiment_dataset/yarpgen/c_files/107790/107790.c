/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 |= var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] = 65519;
                                arr_14 [i_1] &= ((1 ? 128 : 3386));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_5] [i_5 - 1] [i_5] = ((246 ? 858 : 1));
                        var_15 -= (((((1057650219 ? 0 : 9223372036854775798))) ? 5585545380290273517 : ((46 ? (-9223372036854775807 - 1) : (((var_0 ? 1 : 0)))))));
                        arr_19 [19] [i_0] [i_1] [i_2] [i_2] [1] = var_12;

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_16 = 17;
                            var_17 ^= var_7;
                            arr_22 [i_0] = 156;
                        }
                        var_18 ^= 2211401586922651970;
                    }
                }
            }
        }
    }
    var_19 = ((var_3 ? ((var_2 ? var_2 : ((-1666609583 ? -4220077319055543495 : var_1)))) : ((((((var_11 ? var_9 : 9223372036854775807))) ? ((1 ? -3387 : 96)) : 21059)))));
    #pragma endscop
}
