/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_16 = (min(1141970324, ((-822343919 ? 6 : 1122064139))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_4 - 1] = (var_2 ? (arr_5 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1]) : (arr_5 [i_4] [i_4 + 1] [i_4] [i_4 + 1]));
                            arr_12 [i_1] [i_3] [i_2] [i_2] [i_1] [12] = (((((-(arr_9 [i_0 - 4] [i_1] [i_2] [i_3] [16])))) ? (arr_6 [i_4 + 1] [i_3] [i_1]) : (935608787 / 25312554)));
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_17 *= (~(((((~(arr_1 [i_0])))) ? (min((arr_10 [i_0] [1] [i_2] [i_2] [i_3] [i_5 + 1]), var_2)) : ((max(-1704297514, 582220635))))));
                            arr_17 [i_5] [i_1] [i_2] [i_5] = ((~(arr_0 [i_0] [i_3])));
                        }
                    }
                    var_18 -= var_13;
                    arr_18 [i_0] [i_0] [i_2] = var_15;
                }
            }
        }
        var_19 = (min((((((-(arr_16 [18])))) ? (arr_9 [10] [i_0] [i_0 - 4] [i_0 - 2] [i_0]) : var_0)), (((!(((arr_13 [i_0 - 4] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]) >= 1000098143)))))));
        arr_19 [i_0] [i_0] = (var_11 & ((var_3 ? (arr_13 [i_0 - 4] [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 1]) : 2887)));
        var_20 -= ((((((434645712 ? -693120893 : 1545029055)) + 2147483647)) << ((((var_15 ? (arr_14 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0]) : var_4)) - 28143))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_21 = (max(var_21, var_3));
                    var_22 = var_4;
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8 - 2] = (((var_7 ? var_14 : var_13)));
        arr_29 [i_8 - 3] = (min(var_9, var_10));
    }
    var_23 = (min(var_5, var_7));
    #pragma endscop
}
