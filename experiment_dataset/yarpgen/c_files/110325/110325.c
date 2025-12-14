/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [6] = (((((-(arr_0 [i_0] [10]))) == ((-1322119157 ? (arr_1 [i_0]) : 91)))));
        arr_3 [i_0] = var_0;
        var_13 = (max(var_13, (((((-1322119161 ? var_11 : var_12)))))));
        arr_4 [i_0] = (min((arr_1 [6]), 21079));

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_14 *= ((!(((114 | (max((arr_12 [i_0] [5] [i_2] [i_3]), -31162)))))));
                            var_15 += ((~(min(var_12, (((arr_0 [i_1] [i_1]) ? (arr_16 [i_4] [i_4] [i_2] [i_2] [i_4]) : var_10))))));
                            var_16 = (min(((max(103, 114))), (min(-92, -1322119176))));
                        }
                    }
                }
            }
            var_17 = (min((arr_10 [i_0] [i_0] [i_0] [i_0]), var_4));
            arr_17 [i_1] [i_1] = (((-127 - 1) | 97));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_18 += ((((min(-1322119186, 125))) ? var_12 : (var_4 - -7001494218377393007)));
                            arr_25 [3] [3] [5] [i_1] [i_7] = (arr_23 [i_0] [i_1] [i_5] [i_6] [i_7]);
                            var_19 *= min(var_11, ((((min(-1296961030, 1))) ? var_8 : (arr_15 [i_6 - 1] [i_6] [i_5] [10]))));
                        }
                    }
                }
            }
            arr_26 [i_1] = ((~((125 ? 126 : 1296961029))));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
            {
                var_20 = -114;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_36 [i_0] [17] [17] [i_10] [i_9] = (arr_9 [i_0] [i_0] [i_9] [i_0]);
                            var_21 = (!((!(max(0, (arr_24 [1] [1] [1] [13] [i_11]))))));
                            arr_37 [i_8] [i_8] [i_9] [i_10] [i_11] [i_9] [i_9] = ((~((~((var_12 ? 1322119176 : (arr_12 [i_0] [i_8] [1] [i_10])))))));
                            var_22 += -3472463450;
                            var_23 = (((max(var_4, -var_9)) <= (~var_6)));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
            {
                var_24 = (((~var_7) ^ (~var_11)));
                var_25 = (~154500812);
                arr_40 [i_12] [10] [i_0] [i_0] = ((((((max(128, 127))) ^ (max((arr_15 [i_8] [i_8] [i_0] [4]), var_5))))));
            }
            var_26 = (min((max((min((arr_10 [i_0] [i_0] [i_8] [i_0]), (arr_6 [i_0]))), 88)), ((min((25159 - var_7), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            {
                var_27 = (min(var_27, (arr_1 [i_13])));
                var_28 += ((var_8 ? (((max(var_4, (arr_29 [i_14] [18] [i_13] [i_13]))) + var_6)) : ((((arr_5 [14] [i_13] [1]) ? (arr_13 [0] [2] [i_14]) : ((~(arr_43 [i_13] [i_13] [i_13]))))))));
                arr_45 [i_14] = -var_3;
                var_29 = (max(var_29, (((+(((arr_14 [i_13] [i_14] [i_14] [i_14] [i_14] [i_14]) ? var_12 : (arr_14 [i_13] [i_13] [i_14] [i_14] [21] [i_13]))))))));
            }
        }
    }
    #pragma endscop
}
