/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] [3] = (!-4096);
                    arr_11 [i_0] = 2147483647;
                    arr_12 [i_0] [i_1] [4] = (-4096 ^ -4108);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_17 [i_1] [i_3] [i_1] = (((-441974316 / var_9) && (!130944)));
                    var_17 = (min(var_17, ((~(arr_5 [i_0 - 1] [i_0 - 1])))));
                    var_18 = ((arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0]) / (arr_9 [i_0] [i_1] [i_3] [i_1]));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_19 = -1386982314;
                    var_20 = (min(var_20, ((((~((~(arr_18 [i_0 + 2] [i_0 + 2]))))) ^ (max((arr_20 [9] [i_1] [i_4]), ((~(arr_14 [i_0] [i_0] [i_1] [i_0])))))))));
                }
                arr_21 [i_1] [i_0] [i_0] = ((((((arr_0 [i_0 + 2] [i_1]) < (arr_5 [i_0 + 1] [i_0 + 2])))) < (arr_5 [i_0 + 2] [i_0 - 1])));
            }
        }
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_21 = max((min(((-(arr_23 [i_5]))), (var_15 ^ -1726464958))), (arr_22 [i_5]));
        arr_24 [i_5] [i_5] = (~(min((arr_23 [i_5]), (arr_23 [i_5]))));
        var_22 = (!441974316);

        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            var_23 ^= (~1726464971);
            var_24 = max(134217216, (!774785158));
            var_25 ^= (~(((arr_23 [i_6 + 1]) ^ -4107)));
            var_26 = ((!((min((arr_22 [i_6 + 2]), (arr_23 [i_6 - 3]))))));

            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_27 = ((arr_33 [i_5] [i_6 - 3] [i_7] [i_8 + 3] [i_9]) << (((((-4108 && (((-241860689 ? -8 : -4108)))))) - 1)));
                            var_28 = (~(!var_4));
                        }
                    }
                }
                arr_34 [i_7] [20] [i_7 + 2] = ((-193915260 / -4099) ? (((!(arr_28 [i_5] [i_7] [i_7])))) : ((~(-2147483647 - 1))));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    arr_38 [i_7] = (((arr_37 [i_7 + 4] [i_6 + 1]) < ((-774785155 ? -391115226 : (-2147483647 - 1)))));
                    arr_39 [i_7] [i_6 + 3] [i_7 - 2] [i_7 - 2] = ((arr_31 [i_6] [i_7]) / (arr_33 [i_6] [i_6] [i_6 + 2] [i_6 + 2] [i_7 + 4]));
                }
                var_29 = (((((arr_33 [i_6 - 2] [i_6 - 2] [i_7 + 1] [i_7] [i_7 + 1]) % (arr_33 [i_6 - 1] [i_6] [i_7] [0] [i_7 - 1])))) ? (arr_33 [i_6 - 2] [10] [i_7 + 2] [i_6 - 3] [i_7 + 4]) : (arr_33 [i_6 + 3] [i_6 + 3] [i_7] [i_7 + 1] [i_7 - 1]));

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    arr_42 [i_6] [i_7] [i_6] = arr_26 [i_5];
                    var_30 -= (+((((((arr_28 [i_7] [12] [8]) && 266338304))) << (((((arr_33 [i_7] [7] [i_7] [i_11] [i_11]) ? (arr_41 [i_5] [i_5] [i_5] [22] [13] [i_5]) : (arr_22 [i_5]))) + 663202517)))));
                }
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                var_31 = (-266338304 / 1388303506);
                arr_45 [i_5] [i_5] [13] |= (~(arr_30 [20] [i_6 + 3] [i_12] [i_6] [i_12]));
                var_32 = (min(var_32, (~-1725624060)));
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                arr_48 [i_5] [i_6] [i_13] = (~-1843563235);
                arr_49 [i_5] [i_13] [2] = arr_32 [i_5] [i_5] [i_6] [i_5] [i_13] [i_13] [i_13];
                var_33 = ((!(!2147483647)));
            }
        }
        var_34 = -1726464958;
    }
    #pragma endscop
}
