/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (~-var_6);
        var_12 = 30519;
        var_13 ^= (max((min(((min(var_5, (arr_1 [i_0] [i_0])))), (min(var_6, (arr_1 [i_0] [i_0]))))), var_1));
        var_14 ^= (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = (min(5426422176621642986, var_10));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_1 - 2] [i_2] [i_2] = (((arr_9 [i_1 - 4] [i_1 + 1]) ? (arr_5 [i_1 - 4]) : (arr_1 [i_1 - 4] [i_1 + 1])));
            arr_11 [i_1] [i_1] |= (arr_8 [i_1] [i_1 - 4]);
            var_15 ^= ((var_10 ? var_4 : 16));
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_16 *= (min((((arr_0 [i_1] [i_3 + 2]) * (arr_7 [i_1 - 3] [i_1 - 2]))), ((max((arr_14 [i_1 - 1]), (arr_7 [i_3] [i_1 + 1]))))));
            var_17 = (min((max((max(var_0, var_7)), (var_11 != -8155653317236625263))), (((-(arr_6 [i_1 - 3]))))));
            var_18 = (max(var_18, ((min(var_1, 34391)))));
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                var_19 *= (arr_15 [i_4]);
                var_20 = var_0;
                var_21 = (!var_7);
            }

            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                arr_24 [i_1] [i_4] [i_4] [i_4] = var_11;
                var_22 = (min(var_7, ((max((arr_13 [i_1]), (arr_19 [i_4]))))));

                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    var_23 = (min(var_23, ((min((arr_9 [i_1] [i_4]), (+-89))))));
                    var_24 = (min((((!((max(var_2, 239)))))), (arr_23 [i_1 + 1] [i_4] [i_6] [i_4])));
                    var_25 = (i_4 % 2 == zero) ? ((((max((min((arr_26 [i_1] [i_1] [i_6 + 1] [i_7]), var_6)), (((var_5 != (arr_20 [i_1 - 2])))))) >> (((min((arr_25 [i_1 - 1] [i_6 + 2] [i_6 + 3] [i_7 - 1] [i_4]), (arr_23 [i_1 - 3] [i_6 + 1] [i_6 + 1] [i_4]))) + 6054977878873753794))))) : ((((max((min((arr_26 [i_1] [i_1] [i_6 + 1] [i_7]), var_6)), (((var_5 != (arr_20 [i_1 - 2])))))) >> (((((min((arr_25 [i_1 - 1] [i_6 + 2] [i_6 + 3] [i_7 - 1] [i_4]), (arr_23 [i_1 - 3] [i_6 + 1] [i_6 + 1] [i_4]))) + 6054977878873753794)) + 2156599432653150450)))));
                }
            }
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                var_26 = (min(var_26, ((((arr_28 [i_1] [i_1]) && ((max((arr_28 [i_8] [i_4]), (arr_16 [18])))))))));
                var_27 = ((-((min((arr_6 [i_4 - 3]), var_9)))));
                var_28 ^= ((-(arr_19 [18])));
                var_29 = (arr_16 [i_4]);
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_30 = (((((~(arr_19 [i_4])))) ? var_5 : (((var_1 ? var_2 : (arr_1 [i_1] [i_4 + 2]))))));
                arr_32 [i_1] [i_1] [4] [i_9] |= (max((max((arr_26 [i_1 + 1] [i_1] [i_4] [i_9]), (arr_18 [i_4 - 2] [i_1 - 4] [i_4]))), ((min((arr_22 [8] [i_1 - 1] [i_1 - 2]), (arr_22 [16] [i_1 + 1] [i_1 - 4]))))));
                arr_33 [i_1] [i_4] [i_9] = arr_31 [i_9] [i_9] [i_9] [i_1];
                var_31 = (arr_29 [i_1 + 1] [i_1] [i_1 + 1] [i_4]);
            }
            arr_34 [i_4] [i_4] = var_5;
        }
        arr_35 [i_1] = var_8;
    }
    var_32 = -var_10;

    /* vectorizable */
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        var_33 = (arr_14 [i_10]);
        arr_38 [i_10] [i_10] = var_9;
    }
    #pragma endscop
}
