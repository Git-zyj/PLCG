/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((4818335249546362021 ^ var_1) ^ (((36557 ? 185 : 85)))));
    var_21 = (min(var_21, (((((((13628408824163189625 && (!var_6))))) ^ 0)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (!var_7);
        var_22 ^= ((-var_11 ? var_10 : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_23 = (((-var_18 < var_16) ? -var_16 : ((var_13 ? 33 : (arr_4 [i_1] [i_1])))));
        var_24 &= ((+(((!var_2) ? var_11 : ((((arr_1 [i_1] [i_1]) < 5)))))));

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            var_25 = (min(var_15, (arr_0 [i_1] [i_2])));

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                arr_11 [i_1] [i_2] [i_1] = var_3;

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_26 = min(14664, (((((1 ? var_15 : var_17)) < (arr_14 [i_1] [i_2] [i_1])))));
                    var_27 = var_18;
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_28 *= ((var_7 && (((min(1, (arr_13 [i_1])))))));

                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_29 = ((((((!var_5) < -0))) < (((var_6 < (!14681))))));
                        var_30 ^= (((1 / -491006090) && 12));
                    }
                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        var_31 = (min(var_31, ((((!var_1) && (((arr_3 [6]) || (arr_16 [2] [i_2 + 1]))))))));
                        var_32 = var_12;
                    }
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        var_33 = (max(var_33, (((!((min(((var_6 ? var_12 : var_6)), ((((arr_12 [i_2 - 2] [i_3] [i_5] [1]) && var_2)))))))))));
                        arr_25 [i_1] [i_1] [i_1] [1] [i_5] [i_1] = 65535;
                        var_34 = (+(((var_10 ^ var_6) ? -var_9 : (~var_10))));
                    }
                    var_35 *= 55;
                }
                arr_26 [i_1] [i_1] = var_2;
            }
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                arr_30 [i_9] [i_1] [i_1] [i_1] = ((-(((((-1 ? (arr_23 [i_1] [i_1] [6] [i_2 - 2] [i_2] [i_9]) : 15))) ? var_15 : ((14664 ? var_7 : var_0))))));
                var_36 = (var_9 && -0);
            }
        }
    }
    #pragma endscop
}
