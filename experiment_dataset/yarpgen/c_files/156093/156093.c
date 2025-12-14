/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 -= ((((arr_1 [i_1 + 2]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1]))));
                var_21 -= (min((arr_0 [i_0]), ((((((var_2 ? 255 : 262))) ? 1 : 4294967295)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_22 *= (((((1 ? var_4 : (arr_0 [i_2])) + var_9))));
        var_23 = var_16;
        var_24 = ((-(max((arr_5 [i_2 - 1]), (arr_3 [i_2 + 1] [i_2] [i_2 - 1])))));
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_9 [i_3] = ((var_13 && (((var_3 ? (arr_8 [i_3 + 2]) : (arr_8 [i_3 - 1]))))));
        var_25 = (arr_1 [i_3]);

        /* vectorizable */
        for (int i_4 = 4; i_4 < 20;i_4 += 1)
        {
            var_26 = (max(var_26, var_15));
            var_27 = ((var_7 ^ (arr_0 [4])));
            var_28 = ((1 >> (((-127 - 1) + 135))));
        }
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_29 = (max(var_29, (((((((arr_14 [i_5] [16]) ? (~127) : (var_2 ^ var_15)))) ^ (min(9223372036854775807, (arr_2 [i_5 + 1] [i_5]))))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_30 = var_12;
                    arr_22 [i_6] [i_5 - 1] [i_6] = ((var_15 ? (((var_15 ? ((var_0 ? 128 : -107)) : (((arr_15 [i_7] [i_6 + 1] [i_5]) ? var_15 : var_7))))) : (((((arr_0 [i_5]) ? var_2 : (arr_3 [i_5] [i_6] [i_7]))) + var_0))));
                }
            }
        }
        var_31 = var_11;
    }
    #pragma endscop
}
