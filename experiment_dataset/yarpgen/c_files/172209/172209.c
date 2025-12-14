/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, 123));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_16 = (arr_1 [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_17 ^= 29861;
                            var_18 = var_9;
                            var_19 = 2225;
                            var_20 *= (arr_13 [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_21 |= arr_0 [i_0] [i_0];
            var_22 = var_8;
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            arr_20 [i_6] = (var_7 ? (((arr_13 [i_0] [0] [i_0] [i_6]) ? 2232 : ((var_3 ? (arr_3 [14] [i_6]) : (arr_0 [i_0 - 2] [i_6]))))) : 2225);
            var_23 *= var_6;
        }
        var_24 = var_2;
        var_25 = (min(((~((35675 ? 8130 : var_1)))), var_11));
    }
    for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_26 *= (2225 > 8153);
        var_27 = (min(var_27, var_8));

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_28 = (arr_8 [i_7 - 2]);
            var_29 = ((var_12 ? (var_14 ^ var_6) : var_6));
        }
        var_30 = (arr_10 [23] [i_7 - 1] [i_7 - 2] [1] [i_7 - 2] [i_7 - 1]);
    }
    for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_31 = (max(var_31, ((((var_12 ? (arr_5 [i_9 + 1] [i_9 - 2] [i_9 - 1]) : (arr_6 [i_9 + 1] [5])))))));
            var_32 = (max(var_32, (arr_21 [i_9 + 1])));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_36 [i_11] [i_11] [i_11] = ((-(arr_18 [i_9] [13] [i_9])));
            arr_37 [i_11] [i_11] [i_9] = arr_25 [i_9 + 1] [i_11] [i_11];
        }
        var_33 = (min(var_33, ((((min((arr_6 [i_9 - 1] [1]), (arr_6 [i_9 - 2] [6]))) | var_6)))));
        var_34 -= ((((((((63311 ? 1407504274 : (arr_32 [12] [i_9])))) ? (arr_23 [i_9] [i_9] [i_9]) : (var_9 - var_5)))) ? (max((arr_6 [i_9] [i_9]), var_3)) : ((((((1065353216 ? -750976617 : 8153))) ? (arr_10 [10] [i_9] [1] [i_9] [1] [i_9]) : (arr_26 [23]))))));
        arr_38 [i_9] = 1787642716;
    }
    var_35 += ((min(-var_12, (((var_12 ? 1787642723 : var_7))))));
    #pragma endscop
}
