/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -30;

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_15 = (max(var_15, (((!((min(-57, (arr_0 [i_1 - 1] [i_1 - 1])))))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = (((arr_6 [i_1 + 1] [i_1 - 1] [14] [i_2]) ? var_5 : (((((arr_6 [i_1 - 1] [i_1 - 2] [i_1] [i_2]) > (arr_8 [i_1 - 2] [i_2] [i_1] [17])))))));
                        var_17 -= (((((127 ? 288225978105200640 : -8214))) ? ((((((max(var_1, var_7))) && (!var_3))))) : (max(var_10, -1419129541))));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_17 [i_0] [i_4 + 2] [i_6] [i_6] [i_6] [i_6] = var_0;
                    arr_18 [i_0 + 1] [i_4] [i_5] [i_6] = var_9;
                }
                var_18 ^= (max(14135093908578799928, 18));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_21 [i_4] [i_5] = (arr_12 [i_0 + 2]);
                    var_19 = (min(var_19, ((max((min((arr_6 [14] [i_4 + 2] [i_4] [i_7]), var_12)), (((((min((arr_5 [13] [i_4]), var_10))) ? ((var_11 ? var_8 : var_6)) : (arr_14 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4])))))))));
                    var_20 = var_13;
                }
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
            {
                arr_24 [i_8] [i_0] [i_8] [i_4] = (~14);
                var_21 ^= var_0;

                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    var_22 = (max(var_22, (arr_20 [i_0] [i_4 + 2] [i_8] [i_8])));
                    var_23 = (((arr_4 [i_0 - 1] [i_8]) ? (arr_4 [i_4 - 1] [i_9 + 1]) : (arr_4 [i_0 + 2] [i_9 - 1])));
                }
                for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    var_24 = -49;
                    arr_33 [0] [i_4] [i_8] [0] = var_13;
                    arr_34 [i_0] [i_4] [i_4] [i_10] = var_0;
                }
                for (int i_11 = 3; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_11] = 238;
                    var_25 = (((arr_9 [i_11 - 1] [i_11 - 1] [i_11]) ? var_9 : (arr_13 [i_8])));
                    arr_39 [i_11] = (((arr_15 [i_11 - 2] [i_4 + 2] [i_0 + 1] [i_0]) >> (arr_1 [i_0])));
                    var_26 |= (((arr_20 [i_0] [i_4] [i_8] [18]) ? (arr_9 [i_0 - 1] [i_8] [8]) : var_12));
                }
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {

                /* vectorizable */
                for (int i_13 = 2; i_13 < 18;i_13 += 1)
                {
                    var_27 ^= (arr_2 [i_0 + 3]);

                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        arr_46 [i_13] [13] [i_4] [i_4] [i_13] [14] = 4606;
                        var_28 = ((((var_10 || (arr_27 [20] [i_13] [i_12] [i_0]))) ? var_4 : var_7));
                    }
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        arr_50 [10] [i_4] [i_4] [i_13] [i_15] = (((arr_49 [i_0] [i_4 + 2] [i_4 + 2] [i_12] [i_13] [i_15]) ? (((((arr_29 [i_15] [i_13 - 2] [i_12]) < 3091607942532545942)))) : var_4));
                        arr_51 [i_13] [i_12] [i_13] [i_13] = (arr_13 [i_0 + 3]);
                    }

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_29 = (min(var_29, (((~(arr_25 [i_0 - 1] [i_13 + 1] [i_4 - 1] [i_0 - 1] [i_0] [i_0]))))));
                        var_30 = ((!(arr_4 [i_0] [i_4])));
                        var_31 -= (((arr_22 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2]) >> (((arr_0 [i_0] [0]) - 53599))));
                    }

                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        arr_56 [i_13] [2] [i_12] [i_4] [1] [i_13] = (((((82 * (arr_14 [i_0] [i_0] [i_0] [19])))) ? var_7 : (((((arr_37 [10] [i_4] [i_4] [i_4] [i_4]) > 60937))))));
                        arr_57 [i_0 + 1] [i_13] [i_0] [15] [i_12] [4] [i_17] = ((var_8 ? var_10 : (arr_23 [i_0] [i_13 - 1] [i_12] [i_13 - 1])));
                        arr_58 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [19] [i_13] = (((arr_29 [i_0] [i_0 + 1] [i_0 + 1]) % (((var_3 ? var_3 : (arr_55 [i_0 + 3] [i_4] [i_4] [i_13] [i_17] [i_13]))))));
                    }
                    arr_59 [i_13] [i_13 + 3] [i_13] [3] = (arr_44 [i_0] [i_0] [14] [i_0 - 1] [i_0 + 3] [i_13 - 2]);
                }
                arr_60 [i_0] [i_4] [i_12] = ((var_4 > ((((var_10 ? 114 : var_6))))));
            }
            var_32 += var_9;
        }
        arr_61 [i_0 + 2] = ((((var_12 ? (arr_1 [i_0]) : ((var_0 ? 1 : var_4))))) ? (((((var_8 - (arr_40 [i_0] [i_0] [i_0] [i_0])))) ? (arr_35 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 1]) : 6073097919221866810)) : (arr_29 [i_0 + 3] [i_0 + 2] [i_0 + 3]));
    }
    for (int i_18 = 1; i_18 < 18;i_18 += 1) /* same iter space */
    {
        arr_66 [i_18] = (~18014398508433408);
        var_33 = (min(var_33, (((((((var_4 ? var_6 : var_3))) ? var_3 : 8050762574315851907))))));
    }
    for (int i_19 = 1; i_19 < 18;i_19 += 1) /* same iter space */
    {

        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            arr_73 [i_20] = (((~var_9) && var_4));
            arr_74 [i_19] [i_20] [i_20] = (((((-(var_0 != var_6)))) ? var_0 : (max((var_12 | var_3), var_8))));
            arr_75 [i_20] = (min(((996535741759375754 ? 1 : (arr_2 [i_19]))), (arr_52 [i_19] [i_19 + 2] [i_20] [i_20])));
        }
        var_34 = 4488155146431396090;
        arr_76 [i_19] = ((((((arr_53 [6] [i_19] [i_19] [15] [i_19 - 1] [i_19] [i_19 + 1]) ? var_11 : (arr_0 [i_19 + 1] [i_19])))) || var_1));
    }
    var_35 = -7434670583416568514;
    #pragma endscop
}
