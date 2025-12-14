/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((var_9 % var_8) || var_8));
                var_15 |= ((var_8 % var_12) % var_2);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (var_1 & var_10)));
                                var_17 = var_13;
                                arr_16 [i_0] [5] [i_1] [i_2] [i_3] [i_2] = (max(var_8, (((var_5 ? 9223372036854775807 : var_11)))));
                                var_18 = (min(var_18, ((((var_1 >= var_2) >= (var_2 & var_0))))));
                                var_19 = var_4;
                            }
                        }
                    }
                    var_20 ^= (max((var_13 | var_2), (var_9 & var_13)));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_21 = (max((min(var_1, var_6)), (var_1 || var_4)));
                                var_22 = (((((9198 ? 35910 : 9223372036854775807))) >= var_7));
                            }
                        }
                    }

                    for (int i_8 = 4; i_8 < 15;i_8 += 1)
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] [9] = -var_0;
                        var_23 = var_4;
                    }
                    arr_29 [i_5] [i_5] = ((-((((var_8 ? var_0 : var_13)) - ((var_1 ? var_10 : var_10))))));
                    var_24 = var_4;
                }
                var_25 = var_9;
            }
        }
    }
    var_26 = (-9223372036854775784 & 3088756017);
    var_27 = var_8;
    var_28 = (max(var_28, (((((min((var_12 || -9223372036854775807), (max((-9223372036854775807 - 1), 1380528984))))) ? (-9223372036854775807 - 1) : var_13)))));
    #pragma endscop
}
