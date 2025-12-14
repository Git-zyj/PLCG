/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (128 != -3089);
    var_18 = 50;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = (-(arr_1 [i_0]));
        var_20 = (min(var_6, var_8));
        var_21 = (!(-1621083543073596378 <= 180));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 += ((!(((-1867738630 ? var_3 : (arr_1 [i_1]))))));
        var_23 = (max(17046, 115));
        var_24 = -2147483646;
        arr_6 [i_1] [20] = (((-124 & -1527706614) ? (((var_1 ? -1 : var_12))) : -var_1));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_25 = (max(var_25, (118 || 858689583)));
        var_26 = (max(var_26, (((((arr_9 [i_2]) % (arr_9 [i_2])))))));
        var_27 *= (min((((1 ? -100 : 17046))), 83));
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (((min((arr_1 [i_3]), (arr_0 [i_3]))) * (arr_1 [i_3])));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_28 = var_6;
                arr_20 [i_3] = ((1 ? 115 : 7));
            }
            arr_21 [i_3] = var_14;
            var_29 = (min(var_29, (~-1527706621)));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_24 [i_3] [i_3] [i_3] = (1527706622 * 0);
            arr_25 [i_3] = (((max((max(17040, var_11)), var_8))) || ((((arr_15 [9]) ? var_6 : var_9))));
            var_30 = var_8;
        }

        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            var_31 = (max((108 & var_2), ((((arr_16 [20] [20] [20] [i_7 - 1]) || (arr_16 [i_7] [i_7] [i_7] [i_7 + 1]))))));
            arr_28 [i_3] = var_4;
            var_32 = (arr_3 [0]);
            var_33 *= var_7;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_34 = (min(var_34, ((15 ? 255 : 127))));

            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                arr_35 [15] [i_3] [i_9] = -1;
                var_35 &= (min(-97, (((var_15 & 0) ? (arr_33 [i_3] [i_3] [i_3]) : var_1))));
            }
            arr_36 [i_3] [i_3] [i_3] = ((!(((~((0 ? 62887 : 48)))))));
        }
        for (int i_10 = 2; i_10 < 20;i_10 += 1)
        {
            var_36 += 7;
            var_37 ^= ((-16428 ? 48 : 27));
        }
        var_38 = (max((arr_16 [i_3] [i_3] [7] [i_3]), -127));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    arr_48 [i_13] [0] [i_13] = (min((min(-102, -1990537271)), (((((1952 ? 1867738629 : -1))) ? -112 : ((132 ? 20799 : 1))))));
                    var_39 = ((!(!62887)));
                    var_40 = (((((((var_11 ? 1 : var_6)) | (2652 + 1)))) ? (min((((-127 - 1) ? 27 : 109)), 127)) : ((((var_11 ? 20787 : (arr_40 [23])))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_41 |= ((((((((1990537271 ? 237 : var_11))) ? var_4 : ((9020134510155577589 ? -124 : 32767))))) ? 1 : var_10));
                                var_42 ^= (((arr_50 [i_12] [i_13] [i_14] [i_14]) ? -6 : (!-4723900592776168744)));
                            }
                        }
                    }
                    arr_55 [i_13] [i_12] [i_13] = var_14;
                }
            }
        }
        arr_56 [20] [20] = (((7431882903022994222 ? 1 : 1)));
        var_43 = var_6;
        var_44 = (min((((2647 ? -2163663027890497701 : (arr_39 [i_11])))), (966724786981465373 | 1)));
    }
    #pragma endscop
}
