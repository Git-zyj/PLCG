/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_3;
    var_16 = (min(var_16, var_3));
    var_17 = ((((min(-831512217333469653, var_13))) ? var_11 : ((((var_6 ? var_2 : -8416))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (max(((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2])))), (arr_0 [i_0 - 3])));
                var_19 -= arr_3 [i_1];

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_9 [i_0] = (arr_5 [i_0] [i_0]);
                    var_20 = ((((arr_2 [i_0 + 3]) > 18446744073709551615)));
                    var_21 = (min(1, (((arr_7 [i_0 + 3] [i_0 + 3]) ? 4168316792 : 637305944))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    var_22 -= ((-831512217333469667 / (arr_5 [i_3] [i_1])));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_23 = ((((0 ? 96 : (arr_2 [i_1]))) + (((2 ? -8047 : 18800)))));
                        var_24 = (min(var_24, (arr_4 [i_0] [i_1] [i_0])));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_25 = ((var_6 + 9223372036854775807) << (((var_7 + 25597) - 47)));
                            arr_19 [i_5] [i_0] [i_4] [i_3] [i_1] [i_0] [i_0] = (4168316792 + 4294967295);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_26 += (((arr_15 [i_0 + 2] [i_0 + 3]) ? 136 : (arr_20 [i_0 - 3])));
                            arr_23 [i_0 - 2] [i_1] [i_0 - 2] [i_0] [i_6] = var_11;
                            var_27 = (min(var_27, var_11));
                            var_28 = (max(var_28, (arr_2 [i_0 + 1])));
                            arr_24 [i_0] [i_1] = (arr_21 [i_0] [i_1] [17] [i_0] [i_6] [i_1] [i_0 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_29 = ((arr_21 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]) || (((40642 ? 18446744073709551615 : 15))));
                            var_30 = (!var_3);
                            var_31 ^= 0;
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_32 = (var_2 != 7);
                            arr_30 [i_0] [i_3] [i_4] [i_0] = 10978396447440311140;
                            arr_31 [i_0] [i_0] [1] [i_3] [i_0] [i_0] = var_5;
                        }
                        var_33 = (max(var_33, 11));
                    }
                    var_34 = (min(var_34, (arr_6 [i_1] [i_1])));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    arr_35 [i_0] [i_0] = ((((((max(6495841413022589538, 94)) << ((((max(65503, 14539))) - 65503))))) ? (max((min(-2829243010425741127, (arr_22 [i_0 + 3] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 2]))), ((min(136, -10))))) : ((max(-1, (3 + 13059))))));
                    arr_36 [i_0] [19] [i_1] [i_9] = (min(((((arr_17 [i_0 - 2]) ^ (arr_17 [i_0 + 1])))), ((min(8859300420082121878, 31884)))));
                }
                arr_37 [i_0] [i_0] [i_1] = (-((((max(var_7, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))) ? (min(-1864193771859445647, var_4)) : var_14)));
            }
        }
    }
    #pragma endscop
}
