/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((16376 ? (arr_4 [i_0 + 1] [i_1 - 1] [18]) : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))) ? (((((4236008893 ? (arr_0 [i_0]) : (arr_2 [i_0 - 1] [i_1] [i_0 - 1])))) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (((arr_4 [i_0] [i_0] [8]) ? var_13 : (arr_5 [i_0] [i_0] [i_0] [i_0]))))) : (((~(arr_1 [i_0] [i_0]))))))));
                    var_15 = (min(49159, 177));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_16 ^= ((~(arr_4 [i_0] [i_0 - 1] [4])));
                        var_17 |= (arr_1 [i_0] [i_0]);
                        var_18 = (max(var_12, 32766));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_19 = (arr_0 [i_0]);
                        var_20 = ((18446744073709551592 ? (arr_3 [i_1]) : 68));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_21 ^= ((49159 <= 6) ? 88 : ((1 ? 18446744073709551615 : -4853367165931180236)));
                            var_22 = (arr_1 [i_0] [i_0]);
                        }

                        for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_23 = (~1843227308);
                            var_24 = ((~(((((arr_4 [i_0] [i_0] [i_1]) ? -3684 : var_13)) - (arr_20 [i_1] [i_1] [i_2])))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, (arr_8 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])));
                            var_26 &= 49183;
                            var_27 = ((arr_22 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_1 + 2] [i_1] [i_0 + 1]) ? (arr_22 [i_0] [i_0 + 1] [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_1] [i_8 + 1]) : 245);
                        }
                        var_28 &= (arr_10 [i_5] [i_5] [i_5] [i_5] [i_0] [i_5]);
                    }
                    var_29 = (((((((1 ? (arr_2 [i_0] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0] [i_0] [i_1] [i_0] [i_0 + 1])))) ? ((((arr_0 [i_0]) ? (arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : -1))) : var_5)) / ((max(var_13, ((var_8 ? (arr_7 [i_0] [i_0] [i_2] [i_1]) : var_7)))))));
                    var_30 = ((var_3 ? (max(-11245, 9223372036854775807)) : (((-(arr_0 [i_0 - 1]))))));
                }
            }
        }
    }
    var_31 = (((((243 ? 0 : 102)))) ? 796389626 : (!-27446));
    var_32 *= ((((((var_12 ? 251 : var_5)) ? ((0 >> (var_5 - 1471446615))) : ((41 ? -1 : var_4))))));
    #pragma endscop
}
