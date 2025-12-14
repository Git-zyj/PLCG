/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = ((-(((arr_0 [i_0]) ? (arr_3 [i_0] [2]) : (arr_0 [i_0])))));
            var_16 = (!85);
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_2] = (!(((((((arr_7 [i_0]) || (arr_0 [i_0]))))) < var_5)));
            arr_9 [i_0] [i_2] = (((arr_7 [i_0]) ? ((-1 ^ (!11104992288428225645))) : (((min(1, (arr_1 [i_0] [i_0])))))));
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_17 = 1702314894;
            var_18 += (((((((15652 ? 1 : (arr_0 [4])))) && (arr_7 [4]))) ? (arr_1 [6] [6]) : ((max(((var_0 && (arr_2 [10]))), ((!(arr_5 [i_3] [1] [i_0]))))))));
        }

        /* vectorizable */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            arr_15 [i_0] [i_4] &= (((~var_11) ? ((((arr_2 [i_4]) <= (arr_11 [i_0] [i_0])))) : 1));
            arr_16 [i_0] [i_0] = 0;
            arr_17 [i_0] [i_0] = ((1471669306 + (arr_5 [i_0] [i_0] [i_0 - 2])));
            var_19 = (((arr_2 [i_0]) + (arr_2 [i_0])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_22 [i_0] = ((!(((var_8 ? 14516 : 24283)))));

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_20 = ((((((arr_6 [i_0] [i_6]) ? -2147483642 : 2138527864))) ? (arr_24 [i_0 + 1]) : 141));
                var_21 = (~6);
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_22 = ((~((~(arr_13 [i_5] [i_5] [i_5])))));
                            arr_33 [i_0 + 2] [i_0 + 2] [3] [i_7] [i_7] [i_8] [i_0] = (((arr_23 [i_0 - 1] [11] [i_0 + 1] [i_0]) ? (~1) : (arr_6 [i_5] [i_7])));
                            var_23 = ((1 ? 24283 : 1069032326715788729));
                        }
                    }
                }
                var_24 = (((((-(arr_12 [i_0])))) ? (arr_12 [i_0]) : (arr_1 [i_0] [i_0])));
            }
            for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
            {
                arr_36 [i_0] [i_5] [i_5] = ((!(1 & -5430450603715529380)));
                var_25 = ((~(arr_20 [i_0 - 1] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            {

                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_26 = ((min((arr_40 [i_11]), ((14 ? 17780103725556812533 : (arr_44 [i_13] [i_11]))))));
                    arr_45 [i_11] [i_11] [16] [i_13] = ((((((1738090455 ? 29453 : (arr_37 [i_11]))) >= (~-18917))) ? (((var_11 != var_7) ? 1 : ((~(arr_39 [i_11] [i_13]))))) : 1));
                    var_27 = (((arr_40 [i_13]) == (max(((((arr_44 [i_11] [i_11]) + var_15))), (((arr_37 [i_11]) ? 41246 : 1069032326715788729))))));
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_28 = (max(var_28, ((((((~((min((arr_42 [i_14] [i_12]), 1)))))) ? (max(((103 ? 254 : (arr_47 [i_11] [i_12] [i_12]))), 3056036669)) : (1 & var_5))))));
                    var_29 = (((+((-18923 ? (arr_40 [i_11]) : var_15)))));
                    var_30 = ((-(((!(arr_38 [i_11] [i_12]))))));
                    var_31 ^= ((((1 <= (((arr_42 [3] [i_12]) ^ (arr_42 [i_12] [i_12]))))) ? (((var_0 ? var_10 : (arr_47 [i_11] [i_11] [i_11])))) : (arr_46 [1] [i_12] [i_14])));
                    var_32 = ((!((((arr_44 [i_11] [i_12]) * 153)))));
                }
                arr_48 [i_11] [15] [i_12] = (((24283 / 244) ? (6938644974237462591 < 32761) : (max(((var_2 ? (arr_38 [i_11] [i_11]) : var_6)), (((11 ? 251 : (arr_39 [i_11] [i_11]))))))));
                var_33 = (((((128 >> (83204234 - 83204226)))) && ((max(194, var_1)))));
            }
        }
    }
    #pragma endscop
}
