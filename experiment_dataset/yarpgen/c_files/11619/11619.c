/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((arr_4 [i_3 - 1]) ? (arr_4 [i_3 - 3]) : var_2)))));
                        var_19 -= ((var_3 | (arr_8 [i_0] [i_1] [6] [3])));

                        for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_20 -= (((arr_5 [i_2] [i_1] [i_0]) ? (arr_10 [i_3] [i_3] [i_3 - 3] [i_3 - 2] [i_3] [i_3 - 3]) : ((((!(arr_2 [4])))))));
                            var_21 -= var_0;
                        }
                        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_5] [19] [i_0] [i_0] = (arr_4 [i_2]);
                            arr_18 [i_5] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_2])));
                            arr_19 [i_0] [i_1] [i_0] [i_5] [i_5] = 0;
                            var_22 = (max(var_22, ((((arr_16 [i_3] [i_3 + 2] [7] [17]) < (arr_16 [8] [i_3 - 3] [i_3] [i_3]))))));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_23 |= -97;
                            var_24 = (arr_6 [i_0]);
                            var_25 |= ((var_12 || (arr_15 [i_0] [i_1] [i_0] [i_0])));
                        }
                        var_26 |= (var_3 - 94);
                    }
                }
            }
            var_27 += (((arr_4 [i_0]) ? (~var_15) : (arr_3 [19])));
        }
        var_28 = (min(var_28, (((24 >> (var_4 - 15661316551374560046))))));

        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            var_29 = (((arr_15 [i_7] [17] [9] [i_7]) ? 2018559731 : (arr_23 [i_7])));
            var_30 = (arr_5 [i_7] [i_0] [i_0]);
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_31 = ((((var_13 - (arr_6 [i_8])))) ? ((122 - (arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) : (((var_15 ? (arr_0 [i_8]) : (arr_2 [i_8])))));
            var_32 *= ((-97 ? var_1 : ((-60 ? var_1 : (arr_2 [i_0])))));

            for (int i_9 = 3; i_9 < 19;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_33 = ((98 ? (arr_24 [13] [13] [i_9 - 1]) : (arr_8 [i_0] [i_0] [i_9 - 1] [i_10])));
                    var_34 = ((~(arr_15 [i_0] [i_8] [i_9] [i_9 - 2])));
                    var_35 = (min(var_35, (~4994002807983121669)));
                }
                var_36 = (max(var_36, (arr_21 [i_0] [i_9] [i_9 - 2] [i_8] [i_9] [i_9] [i_8])));
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                arr_35 [i_11] [i_8] = (((arr_5 [i_0] [3] [i_0]) | var_8));
                var_37 = ((-(arr_6 [i_0])));
                var_38 = (arr_9 [i_11] [i_8] [i_0]);
            }
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {

                for (int i_13 = 2; i_13 < 18;i_13 += 1)
                {
                    var_39 |= (~1596815449);

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_46 [i_14] [1] [i_0] [i_8] [i_8] [i_0] = (1162401695 && 1067092192);
                        var_40 = (max(var_40, (((4124150706731870056 ? 98 : 48)))));
                    }
                    for (int i_15 = 1; i_15 < 19;i_15 += 1)
                    {
                        arr_49 [i_0] [9] [i_8] [i_12] [i_0] [i_15] = (((arr_15 [i_15 - 1] [i_8] [i_13 - 2] [i_15]) ? (arr_15 [i_15 - 1] [i_8] [i_13 - 2] [i_13]) : 5901595344664156764));
                        var_41 = ((127 | ((var_7 & (arr_11 [i_0] [i_8] [i_12] [i_12] [i_13 - 2] [i_15 + 1])))));
                        arr_50 [i_15] = ((~((-(arr_16 [i_15] [i_8] [i_15] [i_13 + 1])))));
                    }
                    for (int i_16 = 2; i_16 < 16;i_16 += 1)
                    {
                        var_42 |= ((((arr_44 [i_0] [i_0] [i_12]) ? 140737488355327 : (arr_36 [i_0] [i_0] [i_0]))));
                        var_43 = ((((-(arr_15 [i_12] [i_12] [i_12] [i_12]))) | 3048615774));
                        arr_53 [10] [i_0] [i_12] = ((var_13 ? (arr_15 [i_0] [i_16 - 2] [i_12] [i_13 - 2]) : (arr_26 [i_0] [i_16 + 2] [i_12] [i_13 + 2])));
                    }
                }
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    var_44 = (min(var_44, 1));
                    arr_57 [i_0] [i_8] [i_12] [i_17] &= (((-140737488355328 + 9223372036854775807) >> (((-127 - 1) + 165))));
                }
                var_45 |= ((var_1 ? (arr_45 [i_0] [i_8]) : -6952877227824730267));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        {
                            var_46 = (min(var_46, var_2));
                            var_47 = (~-10);
                        }
                    }
                }
                var_48 = arr_48 [6] [i_8] [i_8] [i_8] [14];
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 18;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        {
                            var_49 += var_8;
                            var_50 = (((arr_32 [i_0] [i_8] [i_12]) ^ (arr_10 [i_20 + 1] [i_20] [i_20] [i_20 + 1] [i_20 + 2] [i_20 - 1])));
                            var_51 += (--242185864);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 3; i_23 < 17;i_23 += 1)
                {
                    for (int i_24 = 3; i_24 < 19;i_24 += 1)
                    {
                        {
                            var_52 -= -6349596614196963832;
                            var_53 = ((-(arr_29 [i_0] [i_8] [i_23 + 2] [0])));
                            var_54 = var_8;
                        }
                    }
                }
            }
            var_55 = (min(var_55, (-127 - 1)));
        }
    }
    for (int i_25 = 0; i_25 < 13;i_25 += 1)
    {
        var_56 += (arr_59 [i_25] [12] [i_25] [i_25]);
        var_57 = -3615087465642710617;
    }
    #pragma endscop
}
