/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (((4 - 6) & (((((max(var_10, var_10))) || 249)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_8 [i_0] [i_0] = (arr_6 [i_2] [i_1] [17]);

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_12 = (min(var_12, ((((((arr_4 [i_0] [i_0] [i_0]) && (arr_9 [i_0] [i_0] [i_1] [i_3] [i_0] [i_3]))) && var_3)))));
                    arr_12 [i_0] [i_0] [i_0] [i_3] = min(((((arr_0 [i_0]) <= (arr_2 [i_1] [i_1])))), (min((((var_1 + (arr_7 [i_0])))), ((var_2 ? var_8 : 242)))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_13 = (max(var_13, var_3));
                    var_14 = arr_11 [i_0] [i_0] [i_2] [0] [3];
                    arr_15 [4] [i_1] [i_4] [i_2] [1] = (arr_5 [i_4 + 3] [i_4 + 1] [i_4 + 3]);
                }
                arr_16 [i_0] [10] [10] [i_2] = (max((min((arr_11 [10] [17] [18] [i_1] [i_1]), (arr_9 [2] [6] [i_2] [i_2] [i_1] [i_0]))), var_6));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_15 = ((((((min(-51, -1727521722))) / var_8))) ? var_6 : 21);
                arr_21 [i_0] [i_5] = (((max(var_5, 4242737882))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_16 = (max(var_16, ((((min(var_2, (arr_3 [i_0]))) < (arr_3 [i_1]))))));
                arr_24 [i_0] [i_1] [i_0] [i_1] = var_10;
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_17 *= (((((~1) + 2147483647)) >> ((((~((var_7 >> (var_5 + 33))))) + 13))));
                        var_18 = (max(var_18, ((min((arr_29 [i_0] [i_1] [i_7] [i_8]), 883916893)))));
                    }
                }
            }
        }
        var_19 = (min(var_19, ((-(((arr_27 [i_0] [i_0] [i_0]) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : var_2))))));
        arr_30 [i_0] [i_0] = (((~4242737876) & (((((((arr_11 [i_0] [i_0] [i_0] [2] [i_0]) & 883916898)) <= (arr_18 [i_0] [1] [i_0] [1])))))));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {

            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                arr_39 [i_11] = min((((arr_20 [i_11] [i_11 + 2] [i_11 - 1] [18]) - (((arr_38 [i_9] [9] [i_11]) ? 3411050402 : (arr_22 [i_9] [i_10]))))), (((arr_17 [i_11] [i_11] [8]) ? (arr_31 [11] [i_10]) : ((~(arr_10 [7] [i_9] [7] [7] [7]))))));
                arr_40 [i_9] [i_10] [i_11] = -var_6;

                for (int i_12 = 4; i_12 < 19;i_12 += 1)
                {
                    arr_45 [i_10] [i_10] [10] [i_10] [i_11] [i_10] |= ((((((~(arr_36 [i_9] [i_11 + 1]))) + 2147483647)) << ((((((arr_36 [i_9] [i_11 - 1]) <= (arr_36 [9] [4])))) - 1))));
                    var_20 = (max(var_20, (arr_7 [i_10])));
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        var_21 = (((min((!-2091759413783144103), -30379))) | 9611);
                        var_22 = (max(var_22, var_8));
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, ((max(12, (((var_5 * var_10) ? (((var_5 && (arr_19 [i_9])))) : var_4)))))));
                        var_24 = (max((((arr_6 [i_11] [i_11 + 2] [i_11 + 2]) ? (arr_51 [i_9] [i_11] [i_11 + 1] [i_11] [i_11 + 2]) : (arr_6 [i_10] [i_10] [i_11 - 1]))), (arr_6 [5] [5] [i_11 + 2])));
                        arr_54 [i_9] [i_10] [i_11] [i_9] = (((var_10 ? (((3411050403 ? var_1 : 25239))) : 6851833554537774299)));
                    }
                    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
                    {
                        var_25 = ((180246698 >> (1209802277 - 1209802266)));
                        var_26 = (min(var_26, ((((((~(arr_14 [i_11] [i_11] [i_11] [i_11 + 2])))) & ((((var_2 ? -6851833554537774299 : (arr_22 [i_10] [i_10]))) / -4242737882)))))));
                    }
                    for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
                    {
                        var_27 |= ((((~(min(var_10, var_8)))) >> (((((((var_0 ? var_0 : -13))) ? 962 : var_8)) - 914))));
                        var_28 -= var_9;
                    }
                    arr_59 [i_11] = ((((var_4 - (arr_5 [i_11] [i_10] [i_11]))) - ((min(var_5, (arr_5 [i_9] [i_9] [i_11 - 1]))))));
                }
                for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
                {
                    var_29 = (arr_5 [i_11] [i_11] [i_11 + 2]);
                    var_30 = (min(var_30, (((-((-(((arr_55 [0] [16] [i_10] [i_11 + 2] [i_11 + 2] [i_11] [i_10]) ? var_6 : var_9)))))))));

                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        var_31 -= (!52229395);
                        arr_66 [18] [18] [i_11] [i_19] = (((max((var_10 ^ 52229395), (var_4 * var_9))) > ((((!(~-9)))))));
                        arr_67 [i_9] [i_10] [i_11 - 1] [i_10] [i_11] [i_19] = ((arr_26 [i_11 + 1]) ? (max(var_4, 180246703)) : ((min((arr_36 [i_9] [i_11 + 2]), (arr_7 [i_11 - 1])))));
                    }
                }
                for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
                {
                    arr_70 [i_9] [i_11] [i_11] = ((-(arr_46 [i_9] [i_20] [i_11 + 2] [i_20] [i_20] [i_11])));
                    var_32 = ((((((min(var_8, (arr_28 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) && var_10)))));
                    var_33 -= max(56, -6851833554537774299);
                }
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 16;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 19;i_22 += 1)
                    {
                        {
                            var_34 |= ((-1 ? (((((arr_33 [i_9]) ? var_8 : 866761488)))) : (((var_0 - 883916872) ? -1 : (arr_53 [i_21 - 1] [i_22] [i_22] [i_22 - 3] [i_22])))));
                            var_35 = (min(var_35, -var_1));
                        }
                    }
                }
            }
            arr_75 [5] [5] [i_9] = (min(((929325283 ? var_0 : -130864139)), var_9));
            arr_76 [i_9] [i_10] = (((((var_0 >> (((arr_55 [i_9] [i_9] [14] [i_9] [i_9] [i_9] [i_9]) - 1901079255)))) & ((55938 ? var_5 : var_2)))));
            var_36 = ((var_5 & (arr_43 [i_10] [i_9] [14] [i_10] [i_10])));
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 20;i_23 += 1) /* same iter space */
        {
            arr_80 [i_23] = (arr_77 [i_23]);
            arr_81 [19] [19] = (arr_57 [i_9] [i_9] [i_9] [i_23] [8]);
        }
        arr_82 [i_9] [i_9] = max(var_2, var_5);
    }
    for (int i_24 = 0; i_24 < 20;i_24 += 1) /* same iter space */
    {
        arr_85 [i_24] = ((1770558064 && (((-(arr_64 [i_24] [i_24] [10] [i_24] [i_24]))))));
        arr_86 [1] = ((max((arr_53 [i_24] [12] [i_24] [i_24] [i_24]), var_7)));
    }
    #pragma endscop
}
