/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((((-2147483647 - 1) > 144))), var_13));
    var_19 *= -var_0;
    var_20 = ((((min(((var_14 ? var_6 : var_0)), var_3))) ? (((var_7 ? var_0 : var_6))) : ((min(((var_9 ? 281819806 : var_17)), 13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (max((1 > -1), ((~(max(-5825042017846612387, 30909))))));
                var_21 = (((((min(((-281819797 ? 39363 : -1)), ((min(-1, -13095))))) + 9223372036854775807)) << ((((((1094949786 ? -20088 : 1648938148)) + 20133)) - 45))));
                var_22 = (var_17 ? (arr_0 [i_0] [i_1]) : (var_7 / var_3));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_23 = (!var_13);

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            var_24 = (~var_12);
                            var_25 = (min(var_25, ((((arr_6 [i_0] [i_0] [i_0]) ? ((-(arr_14 [i_2] [i_3]))) : ((var_14 ? (arr_4 [i_0] [i_1]) : var_4)))))));
                        }
                        arr_16 [i_0] = var_2;
                    }
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        var_26 = var_16;
                        arr_19 [i_0] [i_5 - 1] |= (((!-116) ? ((var_1 ? (arr_6 [i_0] [i_2] [i_2]) : -5)) : (!var_4)));
                        var_27 = 7707308650277633609;
                        var_28 = -1;
                    }
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {

                        for (int i_7 = 4; i_7 < 11;i_7 += 1)
                        {
                            var_29 = (~0);
                            var_30 = (var_13 - 28603);
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6] = -14862;
                        arr_26 [i_0] [i_1] [i_1] [i_6] = ((var_1 ? -5 : (arr_8 [i_6 + 3] [i_6 + 3] [i_6 + 3])));
                    }
                }
                var_31 = (min(((~((max(var_15, var_17))))), ((min((!-8), 65535)))));
            }
        }
    }
    #pragma endscop
}
