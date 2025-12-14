/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((7 ? var_1 : ((((min(-2828885927757300086, var_15))) ? var_15 : var_5))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = arr_1 [i_0];

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] = (((((((arr_2 [0] [i_1] [6]) ? var_10 : (arr_3 [10]))) - 10974533513903800452)) | (((max((arr_1 [i_0]), var_7))))));
            var_22 = (min(var_22, ((max((!1), (!var_8))))));
            var_23 = (max(var_23, (((((max((!2629852733), ((var_11 ? (arr_1 [i_0]) : 32768))))) ? (var_3 | var_1) : (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
            var_24 = (min(((min((arr_0 [5] [5]), ((((arr_3 [4]) && var_13)))))), (2828885927757300085 ^ 32766)));
            var_25 -= (!9223372036854775807);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_26 = (min(var_26, (((((~(min((arr_4 [i_0]), var_6))))) ? (max((arr_2 [i_0] [i_2] [i_2]), var_18)) : var_1))));
            var_27 = var_14;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            var_28 = var_12;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_29 = ((1 ? (((arr_9 [i_0]) ? (arr_9 [i_5]) : (arr_9 [i_0]))) : (arr_14 [i_4] [i_3] [17] [i_3] [17] [i_4])));
                        arr_16 [i_4] [i_3] [7] [i_4 + 1] [i_5] = max(((var_6 ^ (arr_13 [i_4 + 1] [i_0]))), ((~(arr_13 [i_0] [i_5]))));
                    }
                }
            }
            arr_17 [i_0] [8] [i_3] = (13695049812153453276 && 3914167370903626652);

            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_30 = (((min((7472210559805751181 || -9223372036854775802), (!603755582))) ? (arr_21 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2]) : ((((!(arr_21 [i_6 + 1] [i_6] [i_6 - 1] [i_6])))))));
                            var_31 = (-((10086212678293479084 ? 3426524402 : 1671235051)));
                            var_32 = (max(((67 ? (arr_10 [14] [i_6 + 1] [i_7]) : -1)), (arr_10 [10] [i_6 + 1] [i_7])));
                        }
                    }
                }
                var_33 ^= var_6;
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                arr_29 [i_9] [i_3] [23] [i_3] = -2757078418959185465;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_34 = (4294967295 * -var_6);
                            var_35 = (min(var_35, (arr_11 [i_0] [i_3] [11])));
                            arr_35 [i_9] [i_9] [i_9] [13] = (min(((-(arr_4 [i_9]))), (arr_4 [i_9])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_36 = (min(2828885927757300085, 4294967279));
                            var_37 = (((arr_40 [i_0] [i_12] [i_9] [24] [i_0]) ? -var_11 : var_18));
                            var_38 &= -9223372036854775805;
                        }
                    }
                }
            }
        }
    }
    var_39 = ((-1 | (min(6292403874211615221, 14532576702805924967))));
    #pragma endscop
}
