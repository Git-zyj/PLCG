/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (min((((((~(arr_1 [i_0])))) ? (arr_1 [i_0]) : var_13)), (min((~1088825881), (~-472888884)))));
        var_15 = (!var_0);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] = var_5;

            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                var_16 -= (var_12 ^ (arr_3 [i_1]));
                var_17 = (min(var_17, ((~((-(min((arr_9 [i_3] [i_2] [i_2] [1]), var_9))))))));
                var_18 = arr_4 [11];
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_19 |= ((-(((!(arr_12 [i_4] [2] [16]))))));
                var_20 = ((-1 ? 89276686 : var_11));
            }
            for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
            {
                var_21 += -7;
                var_22 = ((((min((((arr_2 [i_1]) ? 472888888 : var_8)), (arr_8 [i_1] [7] [i_2])))) ? ((((3676891556 == (var_9 != 30528))))) : (((((1036076737 ? 2369893966 : var_0))) ? ((472888887 ? 2147483638 : (arr_5 [10] [15] [1]))) : ((max((arr_14 [i_2]), var_3)))))));
                arr_16 [i_1] [i_2] [8] [i_5] = ((2147483638 && (((arr_5 [i_1] [i_1 + 2] [i_5]) && (arr_5 [9] [i_1 - 1] [10])))));
            }
        }
        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
        {
            arr_19 [5] = (arr_13 [12]);

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_22 [i_7] [i_6] [2] = arr_14 [i_7];
                var_23 = arr_5 [5] [10] [i_7];
            }
        }
        var_24 -= var_10;
        var_25 = min((arr_10 [i_1]), var_9);
        var_26 = (arr_6 [16]);
    }
    var_27 = ((((-(min(-472888889, 324740260)))) | var_12));
    #pragma endscop
}
