/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((~var_0), var_17);
    var_19 = -var_3;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, var_15));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_21 = (((194 / (arr_5 [5] [15] [1]))) % (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2]));
                var_22 = (((-(arr_3 [i_0]))));
            }
            var_23 = arr_4 [i_0] [i_0];
            var_24 ^= ((23 ? 26 : 57));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                var_25 = (var_16 / -42);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_26 = (--47);
                            var_27 = (~((var_1 ? var_17 : (arr_3 [i_5]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_28 |= (((var_3 >= var_1) ? ((((arr_22 [i_3] [i_7] [i_8 - 1]) == 152))) : (arr_17 [i_0 + 2] [i_0 + 2] [i_4 + 2])));
                            var_29 |= ((26 ? 183 : 1774758794));
                            var_30 += ((var_8 || (var_11 & var_14)));
                        }
                    }
                }
                var_31 = ((-(arr_23 [i_4 + 3])));
            }
            for (int i_9 = 4; i_9 < 20;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_32 = ((42 ? 194 : 219));
                            var_33 = 230;
                        }
                    }
                }
                var_34 = (((((arr_21 [i_0 - 2] [0] [4]) + 2147483647)) << (((((arr_13 [18] [8]) ? (arr_7 [i_0] [i_3] [i_3] [19]) : -1774758795)) - 169))));
            }
            var_35 = ((((-(arr_24 [i_0 - 1] [i_0 - 1] [i_3] [i_3]))) ^ (((arr_0 [i_0] [i_3]) ? var_3 : var_1))));
            var_36 = ((-(((arr_23 [i_0]) ? (arr_11 [11] [i_3]) : var_10))));
        }
    }
    for (int i_12 = 2; i_12 < 8;i_12 += 1)
    {
        var_37 = ((+((var_11 ? (arr_20 [i_12 - 2] [i_12 - 1] [i_12] [i_12 + 4] [i_12 + 4] [i_12 + 1]) : (arr_20 [i_12 + 4] [i_12 + 4] [i_12 + 4] [0] [i_12] [i_12 + 1])))));
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    {
                        var_38 = 104;
                        var_39 = -868045165;
                        var_40 = ((-(+-40)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 4; i_17 < 9;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    {
                        var_41 = ((!((min((((var_14 != (arr_38 [i_12] [i_16] [i_16] [i_17] [i_17 + 3] [i_18])))), ((var_7 ? -1774758798 : (arr_3 [i_12 + 4]))))))));
                        var_42 = ((+((((arr_18 [i_12] [9] [6] [i_18]) <= (arr_18 [i_12] [i_12] [i_12 + 2] [i_12]))))));
                        var_43 = ((!(!57)));
                        var_44 = (arr_17 [i_16] [2] [i_17 - 1]);
                    }
                }
            }
        }
        var_45 &= (min(((63 ? (arr_10 [i_12] [4] [16]) : ((min(183, 60))))), (max((((arr_7 [9] [9] [i_12 + 4] [i_12]) ? var_13 : var_11)), ((246 >> (((arr_4 [i_12] [i_12]) - 33))))))));
    }
    /* vectorizable */
    for (int i_19 = 2; i_19 < 19;i_19 += 1)
    {
        var_46 = -var_0;
        var_47 = (!38);
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 20;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 20;i_23 += 1)
                        {
                            {
                                var_48 &= var_12;
                                var_49 = ((~(arr_50 [i_19])));
                                var_50 = (arr_8 [i_21] [i_20] [i_19]);
                            }
                        }
                    }
                    var_51 = ((-18 ? -1783401163 : (57 / 6)));
                    var_52 = (((arr_56 [i_21] [i_20] [i_19 - 2]) >> (((arr_17 [i_19] [i_20] [18]) + 1984749955))));
                    var_53 = (((arr_19 [i_19] [i_20] [i_20] [i_21]) || (arr_52 [i_19 - 1] [6])));
                }
            }
        }
    }
    #pragma endscop
}
