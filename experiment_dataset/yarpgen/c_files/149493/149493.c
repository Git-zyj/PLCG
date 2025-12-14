/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (0 & (~16776960));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = ((((arr_1 [i_0] [i_0]) << 1)));
        var_20 = (max((-32767 - 1), (((arr_1 [i_0] [i_0]) ? 9506 : (arr_0 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = (-621946447 || 274012190);

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_21 = 22;
                var_22 |= ((((var_4 ? 15109977443777802019 : 4294967281)) <= 19));
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_10 [i_0] [6] [3] = (((1 || var_13) | (arr_1 [i_0] [i_3])));
            arr_11 [i_0] = (((arr_3 [i_0]) <= 2147483647));
            var_23 |= ((-(arr_1 [6] [i_3])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                arr_18 [i_0] [4] = (((arr_7 [i_0] [i_5] [i_5]) ? (arr_7 [i_5] [i_4] [i_0]) : (arr_7 [i_5] [i_0] [i_0])));
                var_24 = ((~(arr_2 [i_0] [i_4])));
            }
            var_25 = (arr_2 [i_0] [i_0]);
            arr_19 [i_4] = ((!(((arr_6 [i_0] [i_0] [i_4] [i_0]) < var_5))));
        }
    }
    for (int i_6 = 3; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_27 [i_7] [i_7] [i_6] [i_7] = ((-(arr_22 [i_6] [i_6] [i_6])));
                    var_26 = (min(var_26, ((max((arr_24 [i_7] [i_7] [i_7]), 0)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                {
                    var_27 = ((((3 ? (arr_22 [i_6] [i_6 - 3] [i_6 - 3]) : (arr_32 [i_6] [i_6 - 3] [i_6 - 2] [i_6 - 1])))) || (~var_9));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_37 [i_12] [i_9] [i_10] [i_9] [i_12] [i_9] [i_11] |= ((75 ? ((((((arr_24 [0] [i_10] [2]) == (arr_31 [i_12] [i_12] [i_10] [i_10])))) | 32767)) : (!-18028)));
                                var_28 |= ((((((((arr_31 [i_9] [i_11] [i_10] [i_9]) ? 9223372036854775807 : 32752)) == (arr_30 [i_9] [i_10 + 4] [i_10])))) << (((((arr_22 [i_10 - 3] [i_9] [i_6 + 1]) ? (max((arr_33 [i_11] [i_11] [i_10] [1]), var_11)) : ((((arr_22 [19] [19] [i_12]) | (arr_21 [i_6])))))) - 1483474881))));
                            }
                        }
                    }
                }
            }
        }
        var_29 = 4108149587;
    }
    var_30 = ((((((((9223372036854775807 ? 0 : 1))) % var_13))) ? var_1 : var_16));
    #pragma endscop
}
