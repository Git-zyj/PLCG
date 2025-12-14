/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (!1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 8;i_4 += 1)
                            {
                                var_14 = (var_10 ^ var_5);
                                var_15 = (9223372036854775800 < 1023);
                                arr_15 [i_4] = var_9;
                                var_16 += ((((var_8 && var_12) ? var_5 : (var_3 & var_7))));
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_20 [i_0] [i_5] [i_0] [9] [i_0] = (var_10 % var_9);
                                arr_21 [i_0] [i_5] [i_0] [i_0] [i_0] = var_4;
                            }
                            for (int i_6 = 1; i_6 < 10;i_6 += 1)
                            {
                                arr_24 [i_0] [i_1 - 1] [i_1] [i_2] [i_3] [i_2] [i_1] |= (((!var_8) ^ var_6));
                                arr_25 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_6] = ((-((((var_10 > var_7) && var_10)))));
                                var_17 = (min(var_17, var_9));
                            }
                            arr_26 [i_0] [0] [i_0] = ((var_0 ? ((~((var_3 ? var_6 : var_0)))) : var_1));
                            var_18 = var_6;
                        }
                    }
                }
                arr_27 [i_0] [i_1] = var_4;
            }
        }
    }
    var_19 = (-1020 - var_3);
    var_20 &= ((-(((~var_10) ? var_5 : var_12))));
    #pragma endscop
}
