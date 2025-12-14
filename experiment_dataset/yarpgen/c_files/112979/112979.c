/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        arr_3 [12] = (((((2620705324 == (~55414)))) != ((((((2012653840 ? var_13 : 2730918251))) && -2620705324)))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_20 = var_7;
            arr_7 [i_1] [1] [1] = (~(max(3162157598, var_1)));
            var_21 = (((((~((var_2 ? var_19 : var_4))))) ? ((-var_18 ? (max(var_5, var_9)) : (1 >> var_8))) : ((((min((arr_1 [i_0]), 255)))))));
            arr_8 [i_0] = ((((!(215 / 2730918251))) || var_4));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_22 = (~var_13);
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_16 [i_2] [i_1] [i_2] [i_2] [i_2] [i_3] [i_4] = -2012653840;
                            var_23 = (((arr_10 [i_2] [i_4 + 1] [i_2]) | 5897429801414155425));
                            var_24 = ((!(var_7 & var_18)));
                        }
                    }
                }
                var_25 = (var_0 >= var_10);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_26 = ((-(var_14 || var_1)));
                            var_27 = (~var_17);
                            var_28 = (arr_4 [i_1]);
                            var_29 = ((+(((arr_14 [10] [i_1] [16] [13] [i_6]) ? 4294967295 : 3775302148))));
                            var_30 = ((~((1674261971 ? -50 : var_13))));
                        }
                    }
                }
                var_31 = 2392309979;
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_30 [i_0] [i_1] [i_0] [i_8] [15] [i_8] = -2620705324;
                            var_32 = var_3;
                            var_33 = 67;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_34 = -446687968;
                            arr_35 [i_0] [i_0] [i_0] [0] [i_0] [i_0] = ((((var_14 << (((arr_26 [i_11 + 1] [18] [9] [9] [i_11 - 3] [i_11 + 1]) - 1655263730)))) > var_0));
                            arr_36 [i_0] [i_1] [i_7] [i_11 + 2] = ((-((1 ? 65 : (73 && 1902657317)))));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
            {
                var_35 = -var_0;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_45 [i_0] [i_0] [i_0] [i_0] [i_13] = ((-(((var_14 > (var_18 | 112))))));
                            var_36 = (((((var_6 ? var_15 : (!var_2)))) >= (89 | var_9)));
                            var_37 = var_4;
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
        {
            var_38 = ((-116 ? ((2012653840 ? 159 : 146)) : ((var_5 ? 65 : 446687967))));
            arr_49 [i_0] [i_0] [i_0] = -115;

            for (int i_16 = 0; i_16 < 19;i_16 += 1)
            {
                var_39 = ((max(((var_0 ? 2240121636 : (arr_43 [i_0]))), (max(-9069893055454511425, var_12)))));
                var_40 = ((((((((159 ? 27035 : -31280))) ? -7971 : (max((arr_6 [8] [3]), 0))))) ? (((var_15 != 96) + 503435387)) : (var_2 < 1674261971)));
                var_41 = var_15;
            }
        }
        for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    {
                        var_42 = ((61495 != ((((min(-75, 1))) ? (!2620705325) : 8891001592156378631))));
                        var_43 = ((!(((0 | (arr_48 [1] [i_17] [i_0]))))));
                    }
                }
            }
            var_44 = ((var_1 ^ (!204746645)));
        }
    }
    var_45 = (((!var_18) != var_13));
    var_46 = (((min(var_3, (min(var_6, var_2)))) | var_3));
    var_47 = (((((-(max(var_6, -744115648145964799))))) ? ((-(1 | var_16))) : ((0 << (var_14 - 17617593429937080832)))));
    #pragma endscop
}
