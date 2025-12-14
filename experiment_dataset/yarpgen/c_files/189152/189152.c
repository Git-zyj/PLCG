/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 *= ((~(((arr_1 [i_0 - 1] [i_0]) ? var_5 : (arr_1 [i_0 + 1] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 2] = (((min((arr_0 [i_0 + 2] [i_1 + 1]), (arr_0 [i_0 + 1] [i_1 + 1])))) ? (((arr_2 [i_0 + 2] [i_0 + 1] [i_1 + 1]) ? (arr_5 [i_0]) : (((arr_1 [i_1] [i_1]) ? 28979 : (arr_0 [i_0] [i_1]))))) : (arr_2 [i_0 + 2] [i_1] [i_2]));
                    arr_9 [i_2] [4] [4] [4] = (arr_4 [i_0 - 1] [i_1 + 2] [i_1 + 2]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_16 = (min(58179, 65528));
        arr_12 [i_3] = var_9;
    }
    for (int i_4 = 4; i_4 < 22;i_4 += 1)
    {
        arr_15 [i_4] = var_7;
        var_17 = 49435;
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_30 [i_9] [i_6] = (min((arr_14 [i_9]), (arr_14 [i_9])));
                            arr_31 [i_9] [i_9] [i_6] [i_7] [i_8] [i_9] = max(21890, (arr_14 [i_9]));
                            var_18 = (((arr_2 [i_5] [i_6] [i_5]) ? ((var_4 ? (min(-3060300932742144673, 10317)) : (min((arr_28 [i_5] [i_6] [i_6] [4] [4] [i_5]), var_9)))) : (arr_4 [i_5] [i_9] [i_5])));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_19 = var_3;
                            var_20 = (max(var_20, ((((~(arr_25 [i_5] [i_6] [i_7] [i_8] [i_10])))))));
                            arr_36 [7] [7] = ((~((7 ? 0 : 28))));
                            var_21 = (min(var_21, 117));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            var_22 = -4765053972794390029;
                            arr_39 [i_5] [i_6] [i_6] [i_6] [i_8] [i_11] [i_11] = (arr_0 [i_5] [i_6]);
                            arr_40 [7] [i_5] [i_7] [i_6] [i_5] = (((arr_20 [i_5] [i_5]) ? (~var_13) : (((arr_13 [i_5]) ^ var_6))));
                            arr_41 [i_5] [5] [i_5] [i_5] [i_5] [i_5] = -var_1;
                            var_23 *= (arr_27 [i_7] [i_8] [i_7] [i_6]);
                        }
                        arr_42 [i_7] = (min((max((arr_23 [i_6] [i_5] [i_5] [i_8]), ((1566426415 ? 115 : (arr_17 [i_8]))))), ((((~(arr_32 [i_8] [i_8] [i_7] [i_5] [i_6] [i_5])))))));
                        var_24 = (max(var_24, (((((max((((arr_0 [i_6] [i_8]) ? (arr_7 [i_6] [i_7] [i_8]) : (arr_14 [i_5]))), ((-(arr_5 [i_5])))))) ? (((var_3 / (arr_1 [i_7] [i_8])))) : (arr_18 [i_8]))))));
                        var_25 = arr_26 [i_5] [i_5] [i_7];
                        var_26 = min((arr_2 [i_5] [i_6] [i_7]), (((var_2 > ((~(arr_34 [i_5] [i_5] [i_5])))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    {
                        arr_52 [4] [i_12] [i_13] [i_14] = ((!(((((!(arr_19 [i_5]))) ? (arr_25 [i_5] [i_12] [i_13] [i_5] [i_14]) : (((min(126, (arr_26 [i_5] [i_5] [i_5]))))))))));
                        arr_53 [i_5] [i_12] [i_13] [i_14] = ((+(max((arr_37 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (arr_37 [i_13] [i_12] [i_13] [i_14] [i_5] [i_14] [i_12])))));
                        var_27 = 4;
                    }
                }
            }
        }
        var_28 |= ((-((((min(var_4, -30))) ? ((min(-49, 29))) : (arr_46 [i_5] [i_5] [i_5])))));

        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            var_29 = (max(var_29, var_2));
            var_30 += ((!((((~64622) ? var_5 : (arr_18 [i_5]))))));
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 10;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            {
                var_31 = (max(var_31, var_9));
                arr_61 [i_16 - 2] [i_16] [i_17] = (min(25110, 13633));
                arr_62 [i_16 - 1] [i_17] [i_17] |= (min((arr_6 [i_16] [i_17]), (arr_6 [i_16 - 1] [i_16 - 1])));
                var_32 -= -49459;
            }
        }
    }
    #pragma endscop
}
