/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((0 ? 46493 : 0));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [8] = (max(((~(arr_1 [i_0])), (arr_1 [i_0]))));
        arr_3 [i_0 - 1] [2] = (max((arr_1 [i_0]), ((((arr_1 [i_0 + 2]) ? (~65535) : ((min((arr_0 [i_0]), var_4))))))));
        arr_4 [i_0] = ((((min(1375631396, (arr_0 [i_0])))) ? (((!(arr_1 [i_0 - 1])))) : (arr_0 [i_0 + 1])));
        var_16 = ((255 ? (~1962225543) : 56056));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_15 [i_1] = (arr_13 [i_1 - 1] [14] [i_1] [i_1] [i_1 - 1]);
                        arr_16 [i_1] [i_1] [i_2] [6] = ((((max((((arr_7 [i_1]) / (arr_6 [i_1]))), ((((arr_10 [i_0] [i_1] [i_1]) | 56056)))))) ? (65519 <= 4845) : (arr_1 [i_3])));
                        arr_17 [i_1] [i_1] [i_2 + 2] [i_3] [i_3] = -126;
                        arr_18 [i_1] = ((((((max((arr_5 [3]), var_0))))) <= (arr_6 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_2] [i_1] = (arr_1 [i_1]);
                        var_17 = var_7;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_18 = ((-65519 <= (min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2])))));
                        arr_24 [i_1] [i_1] [i_1] [1] = (((((arr_23 [i_0] [i_1] [i_0] [10]) | var_11)) | (arr_5 [7])));
                        var_19 = ((1 ? 2332741752 : 25));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_27 [i_1] [i_1] [i_2 - 1] [i_1] = (((arr_22 [i_0] [i_0] [i_1] [i_0] [i_0 + 1]) <= 0));

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_20 = var_4;
                            var_21 = 127;
                        }
                    }
                    arr_31 [i_1] [i_1] [i_1] [i_1] = ((((((arr_13 [i_0] [i_0 + 2] [i_1 - 1] [i_2] [i_2 + 2]) | ((28895 ? 9472 : (arr_25 [i_0 + 1] [i_1] [i_2] [i_1 + 1] [i_0])))))) ? (arr_8 [6] [6] [i_1 + 1]) : ((((max(var_12, (arr_22 [8] [3] [i_1] [i_1] [6]))))))));
                    var_22 = ((+((0 ? (-2147483647 - 1) : 126))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_38 [i_1] [i_8] [i_2 + 1] [i_9] [i_9] = 21065;
                                var_23 = 109;
                                arr_39 [i_0] [i_0] [i_0] [i_0 - 1] [4] [i_0] |= (min((((min(56054, 695)))), (arr_25 [i_0 + 1] [i_1 - 1] [i_2] [i_8] [i_9])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
    {
        var_24 += var_3;

        for (int i_11 = 1; i_11 < 13;i_11 += 1)
        {
            arr_47 [i_10 + 1] [i_11] [i_11 - 1] = (((((1050780343 ? (!24937) : (arr_14 [i_10 + 1] [6] [2] [i_10] [i_11 - 1])))) ? ((min(var_14, 56059))) : (arr_29 [i_10 + 2] [i_11] [5])));
            var_25 = (((arr_34 [i_10 + 1]) | (((((~(arr_42 [i_10 - 1] [i_11])))) ? 0 : (((arr_11 [i_10] [12] [i_11 - 1]) | (arr_9 [i_10] [10])))))));
            var_26 = (max(var_26, (~3113793927)));
        }
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            arr_50 [i_10] [i_10] [i_12] = (arr_49 [i_10]);
            var_27 = var_1;
        }
        var_28 = (max(var_28, ((max((arr_1 [i_10 + 1]), (min((arr_1 [i_10 + 1]), var_5)))))));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        arr_55 [8] = 9084877591927653998;
        arr_56 [i_13] |= (arr_52 [i_13]);
        arr_57 [i_13] = (arr_53 [16]);
        var_29 ^= ((max((arr_52 [i_13]), (arr_52 [i_13]))));
        var_30 = ((7744898434727781254 ? 56065 : 2247326367));
    }
    #pragma endscop
}
