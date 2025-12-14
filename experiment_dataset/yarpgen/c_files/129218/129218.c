/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_16 = ((~(arr_3 [i_1 - 1])));
            var_17 = 882308425;
        }

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_2] [0] = ((!((((1732260604 ? 228 : 523412155))))));
            arr_11 [i_0] [i_2] = (((arr_2 [1]) / (arr_6 [i_2])));
            var_18 = (max((((!((min(var_6, (arr_1 [i_0] [15]))))))), (arr_0 [21])));

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                arr_16 [i_0] [i_0] [i_2] = arr_5 [i_0] [i_0] [i_0];
                var_19 = ((((((arr_3 [i_2]) ? (arr_3 [i_2]) : (arr_3 [i_3 + 1])))) ? (((arr_3 [i_2]) ? 882308425 : (arr_3 [i_2]))) : (arr_3 [i_3 + 3])));

                /* vectorizable */
                for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    arr_20 [i_2] = (arr_17 [i_3 - 1] [i_2] [i_3 + 1] [i_3 + 3]);
                    arr_21 [i_4] [i_3] [i_2] [i_2] [16] [5] = -23434;
                    arr_22 [i_0] [i_3] [i_2] = ((+((var_2 ? (arr_19 [i_2]) : 14924211570265769573))));
                }
                for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_25 [i_2] [i_2] = (arr_19 [i_2]);
                    var_20 = (min((((arr_23 [i_5 - 3] [i_5 + 1] [i_5 - 1] [i_5 + 1]) ? (arr_23 [i_5 - 2] [i_5 - 3] [i_5 + 1] [i_5 - 3]) : (arr_23 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 2]))), (((!(arr_23 [i_5 - 1] [i_5 - 3] [i_5 + 1] [i_5 - 2]))))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_29 [i_0] [i_2] [i_3] [i_2] = ((-(arr_7 [i_2])));
                    var_21 = 11783091098839872159;
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_32 [i_0] [i_0] [i_0] [i_2] = (+(((arr_12 [i_2]) ? ((var_13 ? (arr_8 [i_7] [i_7] [i_2]) : (arr_31 [i_0] [i_2] [2] [i_2] [i_0]))) : (((((arr_14 [i_2] [i_3] [i_7]) < -37)))))));
                    arr_33 [i_0] [i_2] [i_0] [i_2] [i_7] [i_0] = 1732260617;
                    var_22 = var_12;
                }
            }
        }
        var_23 = ((min(var_5, (max(523412136, var_12)))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        arr_38 [i_8] = (arr_26 [12] [i_8] [i_8 + 2]);
        arr_39 [i_8] = ((218 ? var_14 : (arr_31 [i_8] [i_8 + 4] [i_8] [10] [i_8 - 1])));
    }
    var_24 = var_7;
    #pragma endscop
}
