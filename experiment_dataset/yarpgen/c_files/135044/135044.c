/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 16975040351311115768;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_17 -= (((!-var_1) ? ((-var_14 ? (!var_3) : (max((arr_1 [2]), var_10)))) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
            var_18 = (max(var_18, ((min(((((((16975040351311115780 ? 1471703722398435816 : 1471703722398435835))) ? (((arr_1 [i_0]) ? (arr_0 [i_1]) : (arr_4 [i_0] [i_1]))) : ((((!(arr_4 [i_0] [i_1])))))))), (arr_1 [i_1]))))));
            var_19 = (((((~(min(1471703722398435864, (arr_1 [1])))))) && ((((-(arr_3 [i_0] [i_0])))))));
            var_20 = ((((arr_3 [i_0] [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_0]))));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_7 [4] [i_0] = ((((min(((min(var_7, var_10))), (arr_4 [i_0] [i_2])))) ? (min((arr_0 [i_2]), 27526)) : ((((max(1471703722398435816, (arr_3 [i_0] [i_0]))))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_21 &= ((((arr_11 [i_0] [i_2] [i_3]) && var_0)));
                var_22 += (arr_6 [i_2]);
                var_23 = (((-31023 ? 40 : -42)));
            }
        }
        var_24 = (arr_11 [i_0] [16] [16]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_4] [i_6] [i_4] [i_4] = ((~((((max(-660857841, (arr_0 [i_0])))) ? (((arr_8 [i_6] [i_5] [i_4]) ? (arr_10 [13] [i_5] [i_0]) : var_5)) : (((4109994064 != (arr_5 [i_4]))))))));

                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            var_25 = (((arr_4 [i_0] [i_5]) ? (arr_21 [i_6] [i_4] [i_6] [i_6] [i_7 - 1] [i_6] [i_7 + 3]) : ((((arr_20 [i_0] [i_4] [i_5] [i_4] [i_5]) > (arr_5 [i_6]))))));
                            var_26 = (max(var_26, ((((arr_14 [i_6] [i_7]) ? (arr_14 [i_0] [i_7]) : (arr_14 [i_0] [i_5]))))));
                            arr_23 [i_4] = ((arr_12 [i_4]) ? (!var_13) : (arr_14 [i_0] [i_4]));
                        }
                        var_27 = (max(var_27, (arr_15 [i_0] [i_4] [i_4] [i_4])));
                        var_28 = ((-(((arr_5 [i_0]) ? (arr_17 [i_6] [i_4] [i_0] [i_4] [i_4] [i_0]) : (arr_8 [i_6] [2] [i_0])))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = (((((!4294967295) > -1061144978518745570)) ? (max((arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (((arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_1 [1]) : (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))) : ((((!(arr_5 [i_8])))))));
        var_29 -= (((((((15 ? (arr_25 [i_8]) : (arr_6 [i_8]))) << (((arr_3 [i_8] [i_8]) - 782097699325387110))))) ? (((((arr_5 [i_8]) && ((((arr_3 [i_8] [i_8]) ? (arr_21 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_16 [4] [4] [i_8] [4] [i_8] [i_8])))))))) : (max(11111612489437953844, -999365213))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
        {
            var_30 ^= var_6;
            var_31 = (((arr_30 [i_10] [i_10 + 1] [i_10 + 1]) == (arr_30 [i_9] [i_10 - 1] [i_10])));
            arr_31 [i_9] = (arr_30 [i_10 + 1] [i_10 + 1] [i_9]);
        }
        for (int i_11 = 1; i_11 < 19;i_11 += 1) /* same iter space */
        {
            var_32 = (arr_28 [i_11 - 1]);
            arr_36 [i_11] [i_11 + 1] = ((-((~(arr_33 [i_9] [i_9] [i_9])))));
        }
        var_33 = (min(var_33, ((((arr_32 [i_9] [i_9]) < (arr_33 [i_9] [i_9] [i_9]))))));
        var_34 = ((((((arr_34 [i_9] [13] [i_9]) ? var_2 : (arr_32 [i_9] [i_9])))) ? (arr_33 [i_9] [i_9] [i_9]) : (((arr_33 [i_9] [7] [i_9]) ? (arr_27 [i_9]) : (arr_30 [3] [18] [i_9])))));
    }
    var_35 = var_2;
    #pragma endscop
}
