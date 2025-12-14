/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((((var_0 ? 18124916682346611999 : -19694)) ^ var_9)) + var_0)))));
    var_12 = var_9;
    var_13 = (((min(-911448779, (max((-9223372036854775807 - 1), -19694)))) / var_2));
    var_14 = (max(var_14, var_4));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
        {
            var_15 = (((max(var_10, 19690)) != (((var_9 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
            var_16 -= -2147483647;
            arr_7 [i_0] = ((((arr_1 [i_1 - 1] [i_0]) ? -19702 : (arr_1 [i_1 + 1] [i_0]))) < (((((((-(arr_6 [i_0] [i_1])))) < (((arr_6 [i_1 + 1] [i_0]) ? -1606786927 : var_10)))))));
            arr_8 [i_0] [i_1 - 1] [i_1] = 19694;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] = ((((19712 != (arr_9 [i_0] [3] [i_0])))));
            arr_12 [i_0] [i_0] [i_2] = var_3;
            var_17 |= var_9;
            var_18 = (((((var_6 < (arr_9 [i_0] [i_2 - 1] [i_2])))) > var_2));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_19 = (19690 < 19681);
            var_20 = ((~(arr_15 [i_3 - 1] [i_3])));
            var_21 ^= 19705;
        }

        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            var_22 = (min(var_22, (((-(((((arr_0 [4]) ? (arr_2 [0]) : (arr_4 [i_0] [0] [0]))) * ((min((arr_18 [0]), -10189))))))))));
            var_23 |= -19688;
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            var_24 += (((((-19726 ? 19682 : var_9))) ? (arr_23 [1] [i_6 - 1] [i_6]) : 144904019));
            var_25 = (var_0 > var_2);
            var_26 = var_9;

            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                arr_26 [i_5 - 1] [i_6] = ((-((var_5 ? var_1 : var_6))));
                var_27 = (arr_25 [i_7 + 1] [i_7 + 1] [i_5 - 1] [i_5 - 1]);
                arr_27 [i_5] [i_7 + 1] = 240;
                arr_28 [i_7 + 2] [i_6 + 2] [0] = 1;
            }
        }
        var_28 ^= (var_0 < var_8);
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            arr_34 [i_9] [i_8] [i_8] = ((var_4 ? 241 : ((~(var_6 ^ 19673)))));
            arr_35 [i_8] = var_1;
        }
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            var_29 = ((-(min(19725, ((var_2 + (arr_37 [i_8] [i_8] [i_10])))))));
            var_30 ^= ((!(((arr_31 [10]) && 35))));

            for (int i_11 = 3; i_11 < 18;i_11 += 1)
            {
                var_31 = 19702;

                for (int i_12 = 3; i_12 < 19;i_12 += 1)
                {
                    var_32 = (arr_37 [i_8] [i_10] [i_8]);
                    var_33 = 401374442;
                }
                for (int i_13 = 3; i_13 < 19;i_13 += 1)
                {
                    var_34 = (+((min((arr_37 [i_8] [i_10 - 2] [17]), (arr_37 [i_8] [i_10 - 1] [i_10 - 1])))));
                    var_35 = (min(var_35, (((((((arr_30 [1]) % ((((arr_38 [i_10]) >= (arr_46 [9] [i_10] [i_11] [i_10] [i_8] [i_11 + 1]))))))) & var_10)))));
                    arr_47 [i_8] [i_11 + 1] [i_10 + 1] [11] [i_8 + 1] [i_8] = (((var_2 - -5334) + (~-19694)));
                }
                var_36 = (var_4 || -var_8);
            }
            var_37 = 28;
        }
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 18;i_15 += 1)
            {
                {

                    for (int i_16 = 3; i_16 < 19;i_16 += 1)
                    {
                        var_38 = (((((min((-19694 > var_2), (arr_36 [i_8]))))) * (min(var_6, var_9))));
                        var_39 |= (min(var_6, -19702));

                        for (int i_17 = 1; i_17 < 19;i_17 += 1)
                        {
                            var_40 = var_8;
                            var_41 = (((arr_51 [i_8] [i_16] [i_16] [i_16 - 2]) && ((min(19694, 19687)))));
                            var_42 |= ((!(!var_7)));
                        }
                        for (int i_18 = 2; i_18 < 16;i_18 += 1)
                        {
                            var_43 = (min(var_43, var_0));
                            var_44 = 3893592853;
                            var_45 = (max(var_45, ((((arr_50 [i_8 + 1] [i_15] [i_18]) && var_2)))));
                        }
                        for (int i_19 = 1; i_19 < 18;i_19 += 1)
                        {
                            var_46 = ((-(var_5 * 15130292843006451343)));
                            var_47 ^= (max(((~(min(var_10, (arr_38 [i_14 + 1]))))), (((~(max(var_8, var_3)))))));
                            arr_63 [i_14] [i_8] [i_16 - 3] [4] = -19694;
                        }
                    }

                    for (int i_20 = 1; i_20 < 19;i_20 += 1)
                    {

                        for (int i_21 = 1; i_21 < 18;i_21 += 1)
                        {
                            var_48 ^= (max((((arr_62 [i_8 + 1] [i_14 + 1] [i_14 + 1] [10] [i_14] [i_15 + 1] [i_21 + 2]) ? (arr_50 [i_20 + 1] [i_20 + 1] [10]) : var_4)), var_8));
                            arr_68 [i_8] = max((((~var_0) | (arr_37 [i_8] [i_21] [i_15 + 2]))), (arr_46 [i_8] [i_14 + 1] [i_15] [i_20] [i_14 + 1] [i_21]));
                            arr_69 [i_21 + 1] [i_8] [i_15] [i_8] [i_8 + 1] = (min(19696, (((arr_61 [i_8] [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_21]) ? 7629414940931379841 : var_0))));
                        }
                        for (int i_22 = 4; i_22 < 18;i_22 += 1)
                        {
                            var_49 = (min(((((arr_45 [i_8] [i_8] [i_22 + 2] [i_22 - 2]) < -1024275698692421183))), (max((arr_45 [i_8 + 1] [i_8] [i_22 - 4] [i_22]), -4621000533986051770))));
                            var_50 = (((arr_36 [i_14]) ? var_7 : (((33609 + var_4) ? ((var_0 ? var_7 : -81)) : (arr_60 [i_8] [i_14 - 1] [i_8] [i_20] [i_22 - 1] [i_22 - 3])))));
                        }
                        /* vectorizable */
                        for (int i_23 = 1; i_23 < 17;i_23 += 1)
                        {
                            var_51 += 140;
                            var_52 = 19705;
                        }
                        for (int i_24 = 2; i_24 < 18;i_24 += 1)
                        {
                            var_53 = var_4;
                            arr_81 [i_8] [i_14] [i_15] [i_20] [i_24 - 1] [i_8] [i_24 + 1] = var_6;
                            var_54 = (min(var_54, (((((min(((min(var_5, var_6))), ((var_5 ? (arr_44 [i_8] [i_24] [i_20] [i_24 + 1]) : var_2))))) || (((arr_78 [i_24] [i_20] [i_24 - 1]) >= var_6)))))));
                            var_55 = (min((arr_71 [i_8 + 1] [i_24 + 1] [4] [i_20 + 1] [i_8]), (((var_3 && var_7) | (arr_55 [i_8] [i_8])))));
                        }

                        for (int i_25 = 3; i_25 < 19;i_25 += 1)
                        {
                            arr_86 [i_8] [i_14 - 1] [3] [i_8] [3] [i_25 - 2] [i_25 + 1] = (max(((((var_7 > 30) | (arr_51 [i_14 - 1] [i_15 - 1] [i_8 + 1] [i_20 - 1])))), (16256 - 0)));
                            var_56 = (((arr_64 [i_25 - 1] [i_15 - 1]) != var_0));
                        }
                        arr_87 [i_8] [i_15] [i_14 - 1] [i_8] = (arr_33 [i_8]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
