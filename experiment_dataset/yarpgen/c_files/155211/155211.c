/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((!(((var_1 ? var_12 : var_17))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (arr_4 [i_0] [i_0]);
            var_20 = (max(var_20, ((min((min(89, 1901338875)), 1)))));
            var_21 = (min((min((arr_4 [i_0 - 1] [i_0]), (arr_4 [i_0 + 2] [i_0]))), (min((arr_4 [i_0 - 1] [i_0]), (arr_4 [i_0 + 1] [i_0])))));
            arr_5 [i_0] = (min((((arr_0 [i_0] [i_1]) ? (((max((arr_3 [i_0]), (arr_0 [i_0] [i_1]))))) : (min(var_10, (arr_1 [i_0] [i_0]))))), ((((var_5 + 2147483647) >> (1901338892 || 18758))))));
            var_22 = (((var_4 ? (arr_0 [i_0] [i_0 + 2]) : (arr_4 [i_0 - 1] [i_0]))) + (min((arr_0 [i_0] [i_0 + 1]), (arr_4 [i_0 - 1] [i_0]))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_23 = ((-(-1300030331 - -632173149)));
            var_24 += (((!var_0) ? (((((var_18 / var_9) > (arr_3 [i_2]))))) : (((((1901338875 ? 93 : 2978296245))) ? 1 : 1901338875))));
        }
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_14 [i_0] = (arr_4 [i_0 - 1] [i_0]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_25 += (((((arr_8 [i_0 + 1]) + 2147483647)) >> (((arr_0 [i_5] [i_5]) + 73))));
                            var_26 = (arr_9 [22] [i_0]);
                        }
                    }
                }
                var_27 = (min(var_27, ((((arr_1 [i_0 + 2] [22]) ? (((arr_18 [i_3]) / var_17)) : (var_6 == var_7))))));
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_28 = ((var_13 ? ((((!2978296245) <= ((max((arr_6 [i_0]), var_12)))))) : ((min((arr_3 [i_0]), var_2)))));
                var_29 = ((((arr_20 [i_3 - 2] [i_0] [i_0] [i_0 + 2]) ? (arr_20 [i_3 - 2] [i_0] [i_0] [i_0 + 2]) : var_2)));
                arr_24 [i_0] [i_0] [18] [i_0] = (((((((arr_21 [i_0 + 2] [8] [i_0] [i_0 - 1]) != var_0)))) - 1706792471027596158));
            }
            var_30 = (min(var_30, (((((((((var_9 ? 1 : 1))) ? (arr_16 [6] [i_0] [12] [i_0 - 1] [6]) : -147))) ? ((var_0 ? (arr_19 [i_0 + 1] [i_3 - 1]) : -var_4)) : (((~(arr_18 [i_0 - 1])))))))));
            var_31 = var_12;
        }
        var_32 += (max(var_1, (arr_11 [i_0] [i_0] [8] [i_0])));
    }
    var_33 = var_10;
    var_34 -= var_12;
    #pragma endscop
}
