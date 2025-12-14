/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = var_7;
    var_20 += (((1 ? (var_7 != 4499201580859392) : (var_10 == var_8))) >= 1);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = ((((!(arr_2 [i_0] [i_0])))));
        arr_3 [i_0] = (min(((-(arr_2 [1] [i_0]))), (arr_2 [i_0] [i_0])));
        var_22 = ((-(min((((var_2 ? 1 : var_16))), (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_23 *= 0;
        var_24 = ((1 << (((arr_4 [i_1]) - 195))));
        var_25 = ((-(arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_26 = ((((min(((~(arr_6 [1] [i_2]))), ((30 ? (arr_7 [i_2]) : 11))))) || ((((arr_5 [i_2]) / (arr_7 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_4] [13] [i_4] = var_11;
                    var_27 = var_13;
                    arr_15 [i_2] = min((min(((14958 ? (arr_4 [i_4]) : 1)), (arr_11 [i_3]))), (((arr_9 [i_2]) * ((max(var_2, 5548))))));
                }
            }
        }
        arr_16 [6] = -var_15;

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_28 = (((((((arr_17 [i_5 + 1]) ? (arr_12 [i_5 - 1] [i_5 + 1] [i_5 + 2]) : (arr_12 [i_5 - 1] [i_5 + 2] [i_5 - 1]))) + 9223372036854775807)) << (((((min((arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 1]), (arr_17 [i_5 + 1]))) + 4406468254849004341)) - 39))));
            var_29 = 9139920661732112245;
            var_30 = (((-14956 != (arr_12 [i_5] [i_2] [i_2]))) && 12786936667166241778);
            arr_19 [i_5] = var_1;
        }

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_31 = (max(var_31, var_7));
            var_32 = (min(var_32, ((((arr_21 [20] [i_6]) % (((((var_13 <= (arr_7 [i_2])))) + 0)))))));
        }
    }
    #pragma endscop
}
