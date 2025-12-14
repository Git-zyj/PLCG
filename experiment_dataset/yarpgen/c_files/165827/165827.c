/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 += ((var_7 ^ (arr_1 [i_0 - 1])));
        var_20 = (((!var_12) ? var_5 : (((arr_1 [i_0]) ? (arr_0 [i_0] [9]) : (arr_0 [i_0] [i_0 - 1])))));
        var_21 = (min(var_21, (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((arr_0 [i_0] [i_1]) ? ((((var_8 < (arr_1 [i_1]))))) : ((var_17 ? (arr_1 [i_1]) : var_14))));
            arr_7 [i_0] = (arr_1 [i_0 - 1]);
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                var_22 = ((((((arr_1 [i_0]) >> (((arr_10 [i_0]) - 7037483449607368812))))) ? (arr_1 [i_0 - 1]) : (arr_5 [i_3 + 1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_23 = (((((-(arr_12 [i_0])))) ? var_16 : -var_2));
                            arr_18 [i_0] [i_0] = (((((arr_15 [i_4] [i_4]) ? (arr_1 [i_2]) : (arr_5 [i_0]))) % var_11));
                            var_24 = (~var_4);
                        }
                    }
                }
            }
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                var_25 = ((-(((arr_16 [i_0] [1] [i_2] [i_0] [1] [i_2] [1]) ? var_18 : (arr_9 [i_0] [i_0])))));
                var_26 *= (~((~(arr_15 [9] [9]))));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_27 = ((!(arr_17 [i_0] [i_7] [i_0] [i_7])));
                var_28 = -var_1;
            }
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_29 = (max(var_29, var_17));
                arr_28 [i_0] [i_0] [6] [i_8] |= ((((-(arr_3 [i_0] [i_2] [i_0]))) <= ((((arr_5 [i_2]) != var_9)))));
                var_30 = (arr_12 [i_0]);
            }
            var_31 = ((arr_21 [i_0] [i_0 - 1]) && (arr_21 [i_0] [i_0 - 1]));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_32 += ((((((arr_29 [i_9]) & var_14))) && (~var_8)));
        var_33 = (((arr_30 [i_9]) ^ (arr_30 [i_9])));
        var_34 = ((-(arr_30 [i_9])));
        arr_31 [1] = ((((((arr_30 [i_9]) % var_1))) ? (((arr_30 [i_9]) ? (arr_30 [i_9]) : var_6)) : (arr_30 [i_9])));

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_35 = (max(var_35, (!var_4)));
            var_36 |= var_1;
            var_37 = var_13;
        }
    }
    var_38 = var_5;
    var_39 = var_3;
    var_40 = (((((min(var_14, var_10)))) ? (((var_17 + 2147483647) << ((((var_12 ? var_5 : var_18)) - 18446744071934339399)))) : (!var_18)));
    var_41 |= var_13;
    #pragma endscop
}
