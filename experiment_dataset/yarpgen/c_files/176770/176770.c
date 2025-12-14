/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = ((((63 ? -69 : 14608877497963216616))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = 69;
            var_19 = var_9;
        }

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_20 = (((var_9 - 63) - (((((arr_6 [i_0]) ? 432345564227567616 : (arr_3 [1]))) + ((-63 ? 88 : 3837866575746334991))))));
            arr_8 [i_0] [i_0] [i_2] = ((((3837866575746334989 ? var_15 : (arr_6 [i_2])))));
            var_21 *= ((((arr_6 [i_2]) >= (arr_6 [i_0]))));
            var_22 = ((max(1191840698, -75)));
            arr_9 [i_0] [i_0] [i_2] = (((((~(arr_0 [i_2])))) ? ((~(arr_7 [i_0] [i_2]))) : (arr_4 [i_0])));
        }
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            var_23 += (max((((((52 | (arr_11 [i_3])))) ? ((3103126598 ? (arr_7 [1] [10]) : 9223372036854775807)) : (arr_0 [i_0]))), (~278941948)));
            arr_12 [i_3] [i_3] [i_3] = (((((-5189159170541698418 ? 199 : -89))) ? (((max(14608877497963216616, (arr_11 [i_0]))))) : 69));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_24 = ((((3837866575746335025 ? var_8 : var_0))));
            var_25 ^= (((((0 ? var_4 : 14608877497963216619))) ? (max(-var_13, ((max(var_4, var_10))))) : (arr_5 [i_0])));
            var_26 -= ((max(44724, -505184073)));
            var_27 = (((((max((arr_10 [i_0]), 20812)) / (arr_2 [i_4]))) >= ((((arr_2 [i_0]) / -32765)))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_28 &= -66;
            var_29 = var_1;
            arr_18 [1] = -75;
        }
        var_30 = ((~(((((arr_4 [i_0]) ? (arr_16 [i_0]) : var_4))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                var_31 -= var_6;
                arr_23 [i_6] = max(((((max(3103126598, -75)) / (((4203434722 ? -56 : var_15)))))), ((3837866575746335006 / ((1 ? 18446744073709551615 : 20812)))));
            }
        }
    }
    var_32 = ((((max((((85 ? var_12 : var_12))), ((var_13 ? var_16 : var_2))))) ? (~var_2) : ((var_11 ? -var_11 : var_14))));
    var_33 *= (max((1 || 32756), 74));
    #pragma endscop
}
