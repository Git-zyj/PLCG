/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 20342;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_13 = 40168;
                    arr_10 [i_0] [i_1] = var_3;
                    var_14 = (max(var_14, var_4));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_15 = ((-(((arr_6 [i_0]) ? (arr_6 [i_0]) : (arr_6 [i_0])))));
                        arr_13 [i_0] [19] [i_2] [i_0] = (((arr_8 [i_0] [i_1 + 1] [12]) ? (!var_3) : ((25368 ? (arr_8 [i_0] [i_1 - 2] [i_2]) : (arr_8 [i_0] [i_1 - 1] [1])))));
                    }
                    arr_14 [i_0] = (!56);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1 - 1] [i_4] [i_1 - 1] [i_1] [i_0] = (var_3 + var_5);
                        var_16 = var_10;
                    }

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_17 -= (((((!(arr_7 [i_1] [i_1])))) * var_0));
                            var_18 = (((arr_20 [i_0] [i_1] [i_4] [i_0] [i_0]) != -25364));
                            var_19 = (min(var_19, (arr_7 [i_6] [i_1])));
                        }

                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            var_20 = (arr_23 [i_0]);
                            arr_28 [7] [i_1] [i_1 - 2] [i_0] [i_1] [i_1] = (~240);
                            arr_29 [i_4] [6] [i_0] [i_4] [i_4] = (((arr_4 [i_0] [i_0]) ? var_7 : 11));
                            var_21 = (max(var_21, (((var_11 ? 159 : var_4)))));
                            var_22 = ((~(arr_6 [i_0])));
                        }

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_32 [i_0] = (((((var_6 ? (arr_18 [i_0] [12] [i_0] [i_0] [i_0] [8]) : 2877180961724522603))) ? (arr_9 [i_4] [i_0] [i_0] [i_6]) : ((255 ? var_5 : -2877180961724522609))));
                            var_23 = (((((2877180961724522603 ? (arr_0 [i_0]) : (arr_30 [i_0] [i_1])))) ? var_11 : var_8));
                            arr_33 [i_0] [i_0] [i_4] [i_0] [6] [8] [i_4] = (((arr_6 [i_0]) ? (arr_6 [i_0]) : (arr_6 [i_0])));
                        }
                        arr_34 [i_0] [i_0] = ((~(arr_25 [12] [i_1] [i_1 - 2] [i_1] [12])));
                    }

                    for (int i_10 = 3; i_10 < 18;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_24 = (arr_15 [i_0] [i_0] [i_0] [i_11]);
                            arr_41 [i_0] [i_1] [i_4] [i_0] = ((((arr_25 [17] [i_10 + 2] [i_4] [i_1 + 1] [i_0]) ? 2877180961724522603 : 28443)));
                        }

                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_25 -= ((var_0 ? 48908 : var_10));
                            var_26 = (arr_24 [i_0] [i_0] [i_10 + 1] [i_10] [i_12]);
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            arr_48 [i_0] [i_0] [i_4] [i_4] [i_0] [i_0] = var_10;
                            arr_49 [18] [i_0] [i_1] = var_0;
                            arr_50 [i_13] [i_0] [8] [8] [i_0] [i_0] = (arr_36 [i_0] [i_0] [i_10] [i_0] [i_1] [i_0]);
                            arr_51 [i_0] [i_10] [16] [11] [i_0] = (((!195) ? (arr_0 [i_0]) : -7));
                        }
                        var_27 = (((arr_1 [i_0]) ? (arr_37 [i_1] [i_1] [i_0] [i_0] [i_1] [i_1]) : (arr_24 [i_0] [5] [9] [i_1 - 2] [i_10 - 2])));
                    }

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_4] [i_0] [i_14] = ((((-(arr_45 [i_0] [i_0] [i_0] [i_0] [i_0]))) * (((arr_36 [i_0] [i_0] [i_0] [i_1 - 1] [15] [15]) ? -8307 : 1))));
                        var_28 = (min(var_28, (((+((var_9 ? (arr_16 [i_0] [i_0]) : 0)))))));
                    }
                }
                var_29 = (((((247 - ((var_10 ? 224 : (arr_23 [i_0])))))) ? ((min(var_5, var_2))) : (((var_2 - ((min(16340, (arr_45 [i_0] [i_1] [i_1] [i_0] [i_1 - 1])))))))));
                arr_55 [i_0] [i_1] [i_0] = (!var_7);
                var_30 = (arr_3 [i_0]);
            }
        }
    }
    var_31 = (((!var_3) || (var_1 || var_2)));
    var_32 = ((~((((min(249, var_5))) ? 61727 : ((-30809 ? var_1 : -6))))));
    #pragma endscop
}
