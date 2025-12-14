/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min((((arr_1 [i_0]) | var_6)), (max((arr_1 [i_0]), (arr_1 [i_0])))))) ? (((-(((arr_0 [i_0] [i_0]) ? 209 : var_6))))) : 17944029765304320));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = arr_4 [i_0] [i_0] [i_0];

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_13 += 9013;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_2] = (max((min((((arr_7 [i_0] [i_1] [i_2]) & -17944029765304312)), ((((arr_7 [i_0] [i_0] [i_0]) ? (arr_10 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0]) : (arr_0 [i_3] [i_1])))))), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])));
                            var_14 = (min((((var_10 && (9013 || 56522)))), (((((8131009044855428719 ? var_1 : 49002132))) ? (!var_11) : (max((arr_7 [i_4] [i_3] [i_0]), 9013))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_0] [i_1] [i_2]);
                            var_15 = (min(var_15, (((var_2 >= (1 && -24))))));
                        }
                    }
                }
                arr_15 [i_1] [i_0] [i_2] [i_0] = arr_6 [i_0] [i_1];
                arr_16 [i_0] [i_0] [i_2] = ((max((arr_0 [i_0] [i_0]), -8131009044855428720)));
                arr_17 [i_0] [i_0] |= (arr_0 [i_0] [i_2]);
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_16 |= (arr_0 [i_1] [i_1]);
                var_17 = (arr_19 [i_0] [i_1] [i_5]);
            }
            var_18 -= (min(9013, (((arr_6 [i_0] [i_1]) ? var_11 : (((!(arr_1 [i_1]))))))));

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_19 ^= ((((min(((2147483647 ? 9223372036854775802 : 8128)), ((max(var_11, var_3)))))) ? var_9 : (arr_3 [i_0] [i_1] [i_6])));

                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_26 [i_0] [i_7] = ((((max((max((arr_8 [i_7] [i_1] [i_1] [i_0]), var_6)), ((min(1173, (arr_6 [i_6] [i_0]))))))) || (((arr_0 [i_7 + 2] [i_7 + 1]) && ((min(-512, var_0)))))));
                    var_20 = (min(((((-1102235443 ? (arr_10 [i_7] [i_7] [i_6] [i_1] [i_0] [i_0]) : var_6)) * ((17944029765304323 ? var_2 : (arr_3 [i_0] [i_0] [i_6]))))), ((max((max(var_0, (arr_0 [i_7] [i_6]))), (73 && var_1))))));
                    arr_27 [i_7] = min(1905129462, 56539);
                    var_21 = (min(var_21, ((max((+-1), var_1)))));
                }
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    var_22 = (max(var_22, var_11));
                    arr_32 [i_0] [i_1] [i_6] [i_8] = var_4;
                    var_23 = (min((arr_25 [i_0] [i_0] [i_0] [i_1] [i_6] [i_8]), ((min((-15316 - 9013), ((min((arr_0 [i_0] [i_0]), (arr_18 [i_0] [i_6])))))))));
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                arr_36 [i_0] [i_1] [i_9] = ((~(arr_18 [i_1] [i_1])));
                arr_37 [i_1] [i_9] = 31847;
                arr_38 [i_0] [i_0] [i_9] = (arr_34 [i_0] [i_0] [i_1] [i_9]);
                var_24 *= (var_7 & 17944029765304335);
            }
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                var_25 = (((((var_12 ? var_0 : (arr_0 [i_10 - 1] [i_10 - 1])))) ? ((min((arr_0 [i_10 + 1] [i_10 - 1]), (arr_0 [i_10 - 1] [i_10 - 1])))) : (((!(arr_0 [i_10 + 1] [i_10 - 1]))))));
                arr_42 [i_10] = var_6;
                var_26 = (min(var_26, ((max((max(var_0, (arr_21 [i_10 + 1] [i_10 + 1] [i_10 + 1]))), (arr_21 [i_10 + 1] [i_10 + 1] [i_10 + 1]))))));
                var_27 |= (min((((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) + 2147483647)) >> ((min(65535, 1))))), ((((min(54660, (arr_1 [i_0])))) ? (arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] [i_10]) : var_4))));
                arr_43 [i_10] [i_0] [i_0] = ((((((((var_1 ? var_11 : -1261863318))) ? ((min(0, 63122))) : ((((arr_10 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]) != (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_10] [i_1]))))))) <= (arr_30 [i_0] [i_0] [i_0])));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_28 = (((arr_9 [i_0] [i_1] [i_11]) ? var_3 : (arr_20 [i_0] [i_0] [i_11])));
                arr_46 [i_0] [i_0] [i_0] [i_0] = arr_41 [i_0] [i_1] [i_11] [i_1];
            }
        }
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        arr_49 [i_12] [i_12] = (-8128 + 4294967295);
        arr_50 [i_12] [i_12] = min((arr_29 [i_12] [i_12] [i_12]), var_9);
    }
    var_29 = min(var_9, var_6);
    var_30 = (min(var_30, var_11));
    #pragma endscop
}
