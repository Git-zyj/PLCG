/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((!var_4) + 50736)))));
    var_16 = var_5;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(var_17, var_10));
        var_18 = 1865275141;
        arr_3 [i_0] = 536870911;
        arr_4 [9] [i_0] = 1;

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = -8620;
            var_19 *= (((min((arr_6 [i_1 - 1] [i_1 - 1]), var_4)) ? (((arr_6 [i_1 - 2] [i_1 + 1]) + (arr_6 [i_1 + 1] [i_1 - 1]))) : ((1 ? (arr_6 [i_1 + 1] [i_1 + 1]) : -8620))));
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_20 = (min(var_20, ((((-8628 + 9089132812825380888) + ((((arr_6 [i_2 - 2] [i_2]) + (arr_6 [i_2 + 1] [i_2 - 1])))))))));

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_20 [i_5] [i_4] [i_3] [10] [i_0] = (((arr_19 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_3 + 2]) + 6237353062845829638));
                        var_21 += ((arr_12 [i_2 + 1]) + (arr_5 [i_3 + 2] [i_2 - 1]));
                    }
                    var_22 = (((((arr_0 [0]) ? (arr_18 [i_0] [8] [i_3] [i_4]) : var_12))));

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_23 = ((!((((min((arr_12 [1]), var_4)) - 150)))));
                        var_24 = (min(var_24, 13));
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_25 += ((max(-97, ((var_13 ? (arr_19 [i_0] [i_0] [i_0] [i_7] [i_0]) : (arr_19 [i_0] [i_2] [i_2] [i_7] [i_3 + 2]))))));
                    var_26 = (min(var_26, ((~(arr_24 [i_0] [i_2 - 1] [i_3] [i_3] [i_7] [i_7])))));
                }
                var_27 -= ((~(((arr_11 [i_0] [i_2 - 1]) + (arr_11 [i_0] [i_2 - 2])))));
                var_28 = (((((((min(var_0, 0))) ? (max(524287, (arr_11 [i_2] [i_2]))) : (~1)))) + ((((~(arr_2 [i_0]))) + (arr_21 [i_0] [i_3 + 1] [5] [i_2 - 2] [i_2 - 1])))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
            {
                var_29 = (var_2 + 14802);
                var_30 = ((((((arr_18 [i_0] [i_0] [i_2] [1]) ? (arr_18 [i_0] [i_0] [i_2] [1]) : 1))) ? (~8620) : var_5));
                var_31 = (max(var_31, (((((arr_0 [i_0]) + 14811))))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                var_32 &= ((-17592186044415 ? ((-(arr_11 [i_0] [i_0]))) : (var_1 + 45)));
                arr_30 [i_0] = ((~((-(arr_29 [i_0])))));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
            {
                var_33 = (min(1, (227 + 127)));
                var_34 = (((((23605 - ((var_10 ? (arr_5 [i_0] [i_2]) : (arr_18 [5] [i_2 + 1] [i_2] [i_2])))))) ? ((((var_10 ? var_12 : (arr_28 [i_10] [i_2] [6] [6]))) + (min((arr_28 [12] [i_2] [i_10] [i_2]), -8620)))) : ((min((((arr_0 [i_0]) + var_5)), ((max((arr_16 [i_0] [i_0]), 22400))))))));
                arr_33 [i_0] [3] [i_10] = (((((~((max((arr_1 [i_10]), (arr_22 [i_0] [i_0] [i_0] [i_2] [i_10]))))))) ? (((((-(arr_23 [i_0] [1] [i_0] [i_0] [7] [i_0]))) + (arr_2 [10])))) : (((((-(arr_2 [i_0])))) + -8618))));
            }
        }
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            var_35 = ((~(max((arr_10 [i_11 - 1] [i_0]), (((var_2 ? var_1 : var_3)))))));
            var_36 *= (!27913);
            var_37 = (((((14803 + ((-(arr_2 [9])))))) + 15911908804502643729));
            arr_38 [i_11] = ((!(((max(27913, (arr_5 [i_11 + 2] [i_11])))))));
            var_38 = ((244 ? (((arr_9 [i_0] [i_0] [i_0]) ? ((var_6 ? var_12 : (arr_37 [5] [9]))) : ((min(140, 162))))) : ((-(122 + 27)))));
        }
    }
    var_39 = var_0;
    #pragma endscop
}
