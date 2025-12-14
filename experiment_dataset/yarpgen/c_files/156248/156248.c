/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((min((min(var_5, var_1)), 7464872034643354368)) << (((var_1 || ((max(var_4, 10981872039066197255))))))));
    var_12 = (var_7 + var_4);
    var_13 ^= var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_1] [1] [i_1] |= ((((max(-1668518231, (arr_1 [i_0 - 2] [i_0 - 1])))) ? (arr_6 [i_0] [9]) : (max(((((arr_8 [i_2] [i_2] [i_1] [i_0]) / (arr_7 [i_0] [i_0] [i_2])))), (((arr_2 [i_0 - 3]) + var_1))))));
                    var_14 = var_3;

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_15 = (arr_13 [i_0] [i_3]);
                        var_16 = (max(((((max((arr_1 [i_2] [18]), 4007345851887950370))) ? (min(var_5, var_7)) : -305095176)), var_9));
                    }

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_17 -= ((arr_7 [i_2] [i_1] [i_0]) ? (arr_0 [i_1]) : (max((((305095176 ? var_9 : var_5))), (arr_5 [i_0 - 1]))));
                        var_18 = (((((arr_10 [i_0] [i_0]) && (arr_10 [i_0] [i_0]))) ? (((!(arr_10 [i_0] [i_0])))) : var_10));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] = ((var_5 >= (arr_8 [i_0 - 2] [i_1] [i_2] [i_5])));
                            var_19 += ((~(arr_17 [4] [i_6] [i_1] [i_0 + 1] [i_6] [i_0 - 2])));
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            arr_26 [i_0] [i_7] [i_2] [i_7] |= (arr_12 [i_0 + 1] [i_1] [i_7 + 1] [i_5]);
                            var_20 = (max(var_20, ((((arr_17 [i_7] [0] [i_7] [i_7 + 1] [i_7] [i_7]) == (arr_17 [i_7] [i_7 + 1] [i_7 + 3] [6] [i_1] [i_7]))))));
                            var_21 = -8893170202810179612;
                            var_22 = (max(var_22, (arr_5 [i_0])));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_1] = ((var_6 ? (arr_11 [i_0] [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 - 2]) : (arr_11 [i_0] [16] [i_0 - 2] [i_0 - 3] [i_0 - 3])));
                            var_23 = (min(var_23, (var_9 == -7661596821845721410)));
                        }
                        var_24 = (arr_14 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
                        arr_32 [i_0] = -1566028337244429156;
                        var_25 = (min(var_25, ((((9898758821489443243 + 2756481774) ? ((((arr_28 [i_0 - 2] [i_1] [i_5] [i_5] [i_0] [3]) ? var_2 : (arr_8 [i_0] [i_2] [i_2] [18])))) : -7661596821845721398)))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_26 *= 3147191001;
                        var_27 ^= (((arr_25 [i_0 - 2] [i_9]) ? (((arr_30 [i_9] [i_2] [i_1] [16] [i_0] [i_0] [i_9]) ? 0 : (arr_15 [i_0] [i_1] [8] [i_9] [i_1]))) : var_8));
                    }
                    var_28 -= -5145330861866430289;
                }
            }
        }
    }
    var_29 = (~var_4);
    #pragma endscop
}
