/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = ((+((((var_6 ? (arr_0 [i_0]) : var_1)) * 1))));
        var_11 = (arr_0 [i_0]);
        var_12 = 3478366983;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_13 = ((((((-(arr_3 [i_1]))))) ? (arr_16 [i_1] [i_2] [i_3] [i_3] [i_1] [i_5]) : (((max(var_5, var_5))))));
                            var_14 = (arr_16 [i_1] [i_2] [i_3] [i_4] [i_1] [i_5]);
                        }
                    }
                }
            }
            var_15 = ((((3478366983 != (arr_11 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2]))) ? var_3 : (!64)));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_16 = ((max((((!(arr_9 [i_1] [i_1] [i_1])))), ((var_0 ? 253 : (arr_17 [i_1] [i_1] [i_1]))))) % ((-((-(arr_13 [i_1] [i_1]))))));
            var_17 = (min(var_17, ((((((((max(-2147483637, var_5))) ? ((max(var_5, 44))) : (arr_7 [i_1])))) && (var_6 ^ var_4))))));
            var_18 = (((arr_0 [i_1]) ? 4294967295 : -55));

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_19 = ((((max((arr_10 [i_1] [i_1] [i_6] [i_6]), 11144))) && var_9));
                var_20 ^= (arr_7 [i_6]);

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_21 = var_1;
                    var_22 = ((!((((arr_17 [i_1] [i_6] [i_1]) ? 524287 : (arr_17 [i_1] [i_6] [i_1]))))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_23 = (arr_12 [i_1] [i_6] [i_6] [i_1] [i_7] [i_7]);
                    var_24 = (arr_18 [i_1] [i_1] [i_1]);
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    var_25 &= arr_29 [i_1] [i_6] [i_6] [i_10];

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_26 = (((var_8 + 816600329) + var_0));
                        var_27 = (max(var_27, ((((var_3 / 1) ? (!var_9) : 136105386)))));
                        var_28 = (arr_25 [4] [i_6] [4] [3] [i_11]);
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_29 *= (arr_11 [i_10] [i_6] [i_6] [i_7] [i_10] [i_12]);
                        var_30 ^= (+(((arr_21 [i_6] [i_10] [i_10]) - (arr_21 [i_1] [i_1] [i_10]))));
                    }
                    var_31 = (min(var_31, (((!(!860440522))))));
                    var_32 = (1116892707587883008 - 3562101226628278284);
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_33 = (~0);
                            var_34 = ((((-(arr_33 [i_1] [i_6]))) / var_5));
                            var_35 = 1633477155;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    {

                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            var_36 = (var_2 & 5873575091599336554);
                            var_37 -= (max((((32767 <= ((~(arr_22 [i_17] [i_18])))))), (arr_13 [i_15] [2])));
                            var_38 = 1;
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            var_39 = (!-10);
                            var_40 = (((arr_55 [i_1] [i_17] [i_1] [i_17] [i_19]) ^ (arr_55 [i_1] [i_15] [i_1] [i_17] [i_19])));
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            var_41 = (arr_53 [i_1]);
                            var_42 = var_6;
                            var_43 = ((2791 ? (arr_7 [i_17]) : 64424509440));
                        }
                        var_44 = (-32767 - 1);
                        var_45 ^= ((+(max((arr_42 [i_1] [i_17]), (((arr_25 [i_1] [1] [i_1] [5] [i_1]) / 524287))))));
                    }
                }
            }
        }
        var_46 = 45;
        var_47 = 1;
    }

    for (int i_21 = 0; i_21 < 10;i_21 += 1)
    {

        /* vectorizable */
        for (int i_22 = 0; i_22 < 10;i_22 += 1)
        {
            var_48 = ((~((11144 ? var_7 : var_2))));
            var_49 = var_0;
            var_50 = (arr_33 [i_21] [i_22]);
        }
        var_51 = (((((3702625490 ? (arr_51 [i_21] [i_21] [i_21] [12] [12] [i_21]) : (arr_30 [i_21] [i_21] [i_21])))) ? 22 : (((!(16 + 34))))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 14;i_23 += 1)
    {
        var_52 = (arr_68 [i_23]);
        var_53 &= var_3;
    }
    #pragma endscop
}
