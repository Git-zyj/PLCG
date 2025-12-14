/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= -3075583534342843165;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (min(-3075583534342843165, 1));
        var_21 *= var_2;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_22 = (((((var_10 ? (arr_10 [i_1]) : 56))) || ((((arr_10 [i_2]) ? (arr_10 [i_1]) : (arr_10 [i_1]))))));
                arr_12 [i_1] [i_2] [i_2] [13] = ((-((min(0, 1)))));
                var_23 = ((((min((arr_6 [i_1]), (1 < var_18)))) + (!1)));
                var_24 = (min(1, (((arr_11 [i_1] [i_2]) - (arr_8 [i_1] [i_1])))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_25 &= (var_2 == (((-(arr_14 [20] [i_2] [i_3] [i_4])))));
                    arr_16 [i_1] [i_1] = (arr_15 [i_1] [i_2] [i_2] [i_1] [i_4]);
                }
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_26 *= (min((((min(var_9, 0)))), ((((min((arr_6 [i_2]), -3075583534342843171))) * 10972765409030672499))));
                arr_19 [i_1] [i_1] [2] = (~1);
            }
            var_27 = (((((((var_10 ? var_17 : -632999844))) / (arr_5 [i_1] [i_1]))) ^ ((min(3211641959, 1)))));
        }
        var_28 = -1;
        var_29 = (arr_18 [i_1] [i_1]);
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_30 = (((((21 >> (3944 - 3919)))) ? (~10682) : 32764));
        var_31 = -8;
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            {

                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    var_32 = 1;

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_33 [i_9] [i_9] = -8510396881195366279;
                        arr_34 [i_7] [i_8] [i_9] [i_10] = var_10;
                        arr_35 [i_9] [i_8] = (min(((((arr_24 [i_7 - 1]) != (!31)))), (min(1, ((~(arr_20 [i_9])))))));
                        arr_36 [i_7] [i_8 - 2] [i_9] [i_9] = (-(-23203 && 1152921229728940032));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_33 = 114;
                        var_34 *= (min(1, ((min(65529, (arr_15 [4] [i_8] [2] [i_11] [i_7]))))));
                        var_35 = ((((~(var_13 < 1))) < var_1));
                        arr_40 [10] [i_8] [i_9] [i_11] = ((~(min((~1), (arr_13 [i_7] [i_7 + 1] [i_7] [i_7] [6] [i_7 - 2])))));
                        var_36 *= (arr_32 [i_7] [i_8] [i_8] [i_8]);
                    }
                    arr_41 [i_7] [i_9] [6] = (min((min(((min(1, (arr_31 [i_7] [i_8] [i_9 + 1] [i_9])))), (var_13 * 0))), (arr_14 [i_9] [i_8] [i_9] [i_9])));
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_48 [i_7 + 1] [i_7] [i_8 - 2] [i_12] [i_13] = var_12;
                        var_37 = (arr_5 [i_12] [i_12]);
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        arr_53 [i_7] [i_8] [i_12] [i_14] [i_12] = (7093134376948108340 + 1);
                        var_38 &= -var_2;
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            {
                                var_39 *= ((var_13 ? 1 : (min((min(var_9, 4882489390537255224)), ((((arr_24 [i_16]) << (((arr_32 [i_15] [4] [i_12] [i_7]) + 694979514)))))))));
                                var_40 = ((((arr_42 [i_15 - 1] [i_8] [7] [i_15]) > -111)) ? -1048575 : (min(var_9, (arr_42 [i_15 + 1] [i_8] [i_12] [i_15]))));
                                var_41 &= ((-var_10 / (((-((var_5 ? var_5 : 2030394583)))))));
                                var_42 = (max(var_42, (!15)));
                            }
                        }
                    }
                    var_43 *= ((+((min((arr_51 [i_12] [i_8 + 2]), var_9)))));
                }
                var_44 &= var_6;
            }
        }
    }
    #pragma endscop
}
