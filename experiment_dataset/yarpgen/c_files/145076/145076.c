/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_3;
    var_21 = var_5;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_22 = (max(var_22, ((((arr_2 [i_0 - 1] [i_0]) ? (((arr_2 [i_0] [i_0 - 1]) * (arr_0 [7]))) : (arr_0 [7]))))));
        arr_3 [i_0] = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_7 [14] |= -241428140;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_18 [2] [10] [i_2] [8] [i_2] &= ((+((((arr_4 [i_1]) == (max((arr_6 [2] [i_2]), 0)))))));
                        var_23 += ((-((-(arr_1 [i_2])))));
                    }
                }
            }

            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                var_24 = 2776153695143071812;
                arr_21 [i_1] [i_1] [i_1] [i_5] = (max((((((2776153695143071795 ? 1 : -2776153695143071800))) ? -2776153695143071812 : (arr_14 [i_2]))), (((~(arr_14 [19]))))));
                arr_22 [i_1] [i_5] = ((10958 >> (2776153695143071812 - 2776153695143071803)));
            }
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_26 [i_1] [i_1] [i_6] = (arr_24 [i_6]);
            var_25 = (min(var_25, (arr_14 [i_1 + 3])));
            var_26 = ((-(arr_14 [i_1])));
            arr_27 [i_1] = ((-2478688767 / (min((arr_1 [i_1]), (arr_15 [i_1 + 2] [i_1 + 1] [i_1 + 1])))));
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            var_27 = (arr_5 [i_7]);
            var_28 = (min(((+(((arr_5 [i_1]) / 31174)))), (arr_30 [8] [i_1] [i_1])));
            var_29 += -2776153695143071812;
        }
        var_30 = (min(((~(arr_6 [i_1 + 3] [i_1]))), 2478688767));
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_31 = 1816278543;
                var_32 = 2229;
            }
            var_33 = arr_23 [14] [i_9];
            var_34 = ((!(arr_29 [i_9] [i_9 + 3] [i_8 + 1])));
        }
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            arr_43 [i_11] [i_11] = (114 == 1);
            var_35 = (min(var_35, (((((((arr_31 [i_8] [i_8]) * (0 * 399432947326288211)))) ? (arr_29 [20] [1] [i_11 + 1]) : ((~(arr_28 [6] [i_8] [6]))))))));
            var_36 |= (arr_16 [i_8] [21] [i_8] [i_8] [i_8 + 2] [i_11 + 1]);
            arr_44 [i_8] [i_11] [i_11] = (arr_6 [i_11] [i_11]);
        }
        var_37 = ((((-(arr_32 [19] [i_8])))) ? ((~(arr_9 [i_8] [i_8]))) : (arr_30 [22] [i_8] [20]));
        arr_45 [7] = (min(-2776153695143071809, ((((arr_19 [14] [i_8]) ? (arr_19 [2] [i_8]) : (arr_19 [20] [0]))))));
    }
    #pragma endscop
}
