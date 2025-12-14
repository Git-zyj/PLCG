/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = (max(var_12, (((!(arr_1 [i_0 + 1]))))));
        arr_2 [i_0] [i_0 + 1] = min((min(var_2, var_2)), var_1);
        var_13 = (min(var_13, var_4));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 += (((arr_4 [18]) ? ((max((arr_4 [2]), (arr_4 [6])))) : ((8959291445255496198 + (arr_4 [1])))));
        arr_5 [14] &= (((((~((var_8 >> (54 - 32)))))) ? (((arr_4 [16]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [18]))) : var_9));
        arr_6 [i_1] [i_1] = (((((~(arr_4 [i_1])))) ? 8064 : -124));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_1] = (arr_4 [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_15 = (((arr_14 [i_1] [i_1] [i_4] [i_5]) ? (arr_15 [i_3 + 1] [i_3 + 1] [14] [i_4] [i_3 + 1]) : (arr_17 [i_1])));
                            var_16 -= ((1 - (((var_6 >= (arr_16 [i_1] [i_1]))))));
                            var_17 = (min(var_17, var_5));
                            var_18 = (!(arr_7 [i_1] [1] [i_3 + 1]));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_19 = (min(var_19, ((((arr_14 [i_3 + 1] [i_2] [i_3 - 1] [i_3 + 1]) ? (arr_19 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 2]) : (~-30))))));
                            var_20 = (arr_13 [i_3 - 2] [6] [i_3 + 1] [3]);
                            var_21 = (((arr_13 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3]) ? (arr_13 [i_3 - 2] [i_3 - 1] [i_3] [i_3]) : (arr_15 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])));
                        }
                        var_22 |= var_1;
                        var_23 |= (arr_4 [i_4]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_24 = arr_17 [i_1];
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_12 [i_1] [i_7] [i_9]);
                        }
                        var_25 = (max(var_25, ((((arr_27 [i_8] [i_7 + 1] [i_7 + 3] [5] [i_7] [19] [i_7]) ? var_1 : (arr_27 [12] [i_7 + 1] [i_7] [5] [i_7] [i_7 - 1] [i_1]))))));
                    }
                }
            }

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                arr_33 [i_1] [i_2] [i_2] [i_1] = (arr_25 [i_10]);
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_26 = (min(var_26, (var_3 - var_0)));
                            var_27 -= (arr_24 [i_10] [16] [1]);
                        }
                    }
                }
                arr_40 [i_10] &= ((255 ? 124 : 4294967295));
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_28 = (arr_34 [i_13 - 2] [i_2] [i_10] [i_13 + 2] [15]);
                            var_29 = (((((arr_36 [i_13 - 2] [i_13 - 1] [i_13] [i_13] [i_13 - 1] [i_13] [i_10]) + 2147483647)) << (((((arr_36 [i_13 - 2] [i_13 - 3] [i_13 - 3] [i_13] [i_13 - 1] [i_13 + 1] [i_13]) + 1657792387)) - 21))));
                            arr_46 [i_10] [i_1] [i_14] [i_13] = ((!(arr_39 [i_10] [i_2])));
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_30 = (var_10 ? (arr_37 [i_1] [i_1] [13] [i_2] [4]) : (arr_37 [i_1] [i_2] [i_1] [i_15] [i_15]));
                var_31 = (arr_25 [i_1]);
                var_32 -= (arr_8 [i_1] [i_1] [i_1]);
                var_33 = (max(var_33, ((((arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? -1 : (arr_24 [i_2] [i_2] [i_15]))))));
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            var_34 = -1;
            var_35 = (((arr_15 [1] [i_16] [i_16] [i_16] [i_16]) <= (arr_15 [i_16] [i_1] [i_16] [i_1] [i_1])));
            arr_54 [16] [i_1] [14] &= (((arr_12 [i_1] [i_1] [i_16]) * 90));
            var_36 = ((var_10 ? (((arr_31 [i_1]) * 1)) : (((arr_14 [i_16] [i_1] [i_16] [i_16]) ? 0 : (arr_45 [i_1] [i_1] [i_16] [14] [i_16] [i_16] [i_16])))));
        }

        for (int i_17 = 2; i_17 < 19;i_17 += 1)
        {
            var_37 -= ((-((-(arr_27 [i_1] [i_1] [i_1] [i_17] [i_17 + 1] [i_17 - 2] [i_17])))));

            for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
            {
                arr_61 [i_18] [i_1] [i_1] [i_1] = arr_51 [i_1];
                var_38 = (arr_42 [i_1] [i_1] [i_1] [i_17 + 1] [i_17 - 1] [i_18]);
                var_39 = var_5;
                arr_62 [i_1] [i_1] [i_18] = (min((arr_34 [6] [i_18] [i_17] [i_17] [i_1]), (arr_25 [i_1])));
            }
            for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
            {
                arr_65 [i_17 - 2] [i_17] [i_1] [i_17] = arr_63 [i_1];
                arr_66 [14] [i_1] = (min((arr_13 [i_1] [i_17 - 1] [i_17] [i_19]), var_3));
            }
            for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
            {
                var_40 = var_2;
                arr_69 [i_20] [i_1] [3] = ((~(((-6210050967660072301 && -118) ? (arr_18 [0] [i_1] [i_17 - 2] [i_1] [i_1]) : var_0))));
                var_41 -= (arr_59 [i_20]);
                arr_70 [13] [i_1] [13] = (arr_28 [i_1] [i_17 + 1] [i_1]);
            }
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 17;i_22 += 1)
                {
                    {

                        for (int i_23 = 4; i_23 < 19;i_23 += 1) /* same iter space */
                        {
                            arr_78 [19] [i_17 + 1] [i_21] [i_22] [i_1] = (((!((((arr_36 [i_23 - 2] [i_22 + 2] [i_21] [15] [i_17 + 1] [i_1] [i_1]) ? (arr_32 [i_23] [i_1] [i_1]) : var_1))))));
                            var_42 += ((((arr_59 [i_23]) ? (arr_59 [i_23]) : (arr_76 [i_17 + 1] [i_22 - 1] [i_23] [i_23 - 3]))));
                        }
                        for (int i_24 = 4; i_24 < 19;i_24 += 1) /* same iter space */
                        {
                            var_43 -= ((43 % ((-(arr_16 [i_17] [16])))));
                            var_44 += (arr_59 [i_24]);
                            var_45 = max(((var_5 ? (arr_8 [i_17] [i_21] [1]) : (((var_8 ? 1 : var_10))))), var_1);
                        }
                        var_46 = (((((min((arr_68 [i_21] [15]), (arr_37 [i_1] [i_17] [i_17 + 1] [i_21] [13])))) ? (arr_77 [i_1] [8] [i_17 - 1] [i_17] [i_17] [5]) : ((((arr_22 [i_1] [i_17] [i_1]) == var_4))))) - ((var_10 ? 1 : ((min(-1, var_3))))));
                    }
                }
            }
            var_47 -= (min(2758341006443899733, 0));
        }
    }
    var_48 = var_2;
    #pragma endscop
}
