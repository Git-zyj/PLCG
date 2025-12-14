/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 ? ((var_10 ? var_3 : (max(var_1, var_4)))) : var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (min(var_16, ((((arr_1 [i_0]) ? var_12 : (arr_1 [i_0]))))));
        var_17 = (min(var_17, ((((arr_1 [i_0]) != (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_18 += ((-(var_5 | var_14)));
        arr_6 [i_1] = var_4;
        var_19 = (min(var_19, (~-45)));
        arr_7 [i_1] = var_7;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_2] = (arr_1 [i_2 + 1]);
                    var_20 = (!var_8);
                }
            }
        }
        var_21 = ((-(arr_2 [i_2 - 1] [i_2])));
        arr_15 [i_2] = ((-1661523416 ? var_9 : -var_14));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_22 = ((1 ^ (2467166772 || 40785)));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_23 = (min(var_23, (((var_8 ? (arr_16 [i_5 + 1]) : (((!(arr_11 [i_2 - 1] [i_2] [i_2])))))))));
                            var_24 = (max(var_24, ((((arr_2 [i_2] [i_5 + 1]) >> (((((arr_9 [i_5]) ? 10365304224193367312 : (arr_16 [i_2]))) - 10365304224193367306)))))));
                        }
                        for (int i_9 = 3; i_9 < 13;i_9 += 1)
                        {
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] = ((var_8 ? -18 : 10));
                            arr_28 [i_2] [i_2] [i_6] [i_2] [i_9] [i_5] = 16983154561722893556;
                            var_25 = (max(var_25, (arr_18 [i_2] [i_2] [i_2 - 2] [i_7])));
                            var_26 = (((arr_20 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 3]) ? (((var_0 ? 237 : var_13))) : (arr_24 [i_9 - 3] [i_7] [i_2] [i_5] [i_2])));
                        }
                        arr_29 [i_5] [i_7] [i_6] [i_5] [i_5] [i_5] = var_6;
                    }
                }
            }
        }
        var_27 = ((1661523397 ? 97 : -57));
    }
    var_28 = ((((((var_13 ? var_10 : -1661523419)) ? (var_12 && 8081439849516184304) : (min(1463589511986658059, 7115293698754082656))))));
    #pragma endscop
}
