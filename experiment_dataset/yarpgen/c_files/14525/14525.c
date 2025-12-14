/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(((min(-20941, var_7))), ((var_17 ? 54 : var_5))))) ? (max(var_18, var_18)) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = 9223372036854775807;
                var_21 = ((24 ? (var_15 * var_14) : var_8));
                var_22 += 3;
                arr_5 [i_1] [i_1] [i_0] = (max((arr_0 [i_0] [i_0]), var_10));
                var_23 = (min(var_23, ((((max(var_15, ((((arr_4 [6]) - var_6))))) - (((54 ? ((127 ? var_18 : 9223372036854775807)) : 0))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 = (((((arr_7 [i_2] [i_2]) < var_5))));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_25 = (min(var_25, (arr_7 [i_2] [i_2])));
            arr_10 [i_2] [i_3] = (max(15, ((12575 ? ((5 ? 17426012036880863139 : 1)) : ((max((-9223372036854775807 - 1), 58720256)))))));

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_26 -= ((-(arr_13 [i_2] [i_2] [i_2])));
                    var_27 &= var_1;
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    arr_19 [i_2] [5] [i_6] [i_6] = (((((var_18 ? 1 : 3))) ? (((!(arr_13 [i_6] [i_4] [i_3])))) : (((!(arr_11 [i_6]))))));
                    var_28 = (max(var_28, -0));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_29 ^= 1020732036828688476;
                    var_30 |= (((arr_0 [i_4] [i_4]) <= (((((var_9 ? 18446744073709551608 : 1020732036828688476))) ? -55 : ((min((arr_7 [i_2] [i_3]), (arr_8 [10] [i_4] [i_3]))))))));
                    arr_23 [i_2] [i_2] [i_4] [i_7] = (max((((1 ? -487158226 : 1))), -9183413193333346745));
                }
                arr_24 [i_2] = (max((arr_9 [i_4] [i_3]), 9223372036854775807));
            }
            arr_25 [i_2] [i_3] = (((((~(arr_9 [i_2] [i_3])))) ? (-var_15 / var_4) : ((max((arr_0 [i_2] [i_2]), (((arr_2 [2] [i_3]) ? var_9 : var_11)))))));
        }
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            arr_28 [i_2] = 1020732036828688489;
            var_31 = (min(var_31, -9223372036854775789));
            arr_29 [i_2] [i_2] [i_2] = ((((min(-38, var_10))) || ((((arr_6 [i_8 - 1]) - (arr_14 [i_8 + 1] [i_8 - 2] [i_2] [i_8 - 1]))))));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 9;i_10 += 1)
            {
                {
                    arr_37 [i_2] = (max((arr_17 [i_10 - 3] [i_10] [i_10 - 2] [i_9]), (min(17426012036880863144, -6945879176550046908))));
                    arr_38 [i_2] [i_2] [i_10] = (min(((((arr_22 [i_2] [i_9] [i_10 - 1] [i_10 - 1] [i_10 + 1]) ? (arr_36 [i_2] [i_9] [i_10 - 3] [i_10 - 3]) : (arr_22 [i_2] [i_9] [i_10 + 2] [4] [i_9])))), var_15));
                    var_32 = (max(var_32, var_16));
                    var_33 = (((max(((var_7 - (arr_6 [i_9]))), var_8))) ? var_12 : ((max(var_18, -var_3))));
                }
            }
        }
        arr_39 [i_2] = 0;
    }
    #pragma endscop
}
