/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 246));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 |= ((((min((arr_1 [i_0]), 2489265532))) + (min(-3235201665057804669, (arr_1 [i_0])))));
        var_18 |= (((((~(~16550528105511777223)))) ? -var_0 : ((-1805701771 ^ (arr_0 [i_0])))));
        arr_4 [0] |= (((((-29572 ^ 3235201665057804690) ? var_3 : (arr_2 [i_0]))) + 232));
        arr_5 [i_0] [i_0] = ((((((1805701784 ? 5874906261329658544 : 18446744073709551615)) / (192 != -29572))) * ((((arr_2 [i_0]) << (((arr_2 [i_0]) - 3998174889211498331)))))));
        var_19 = arr_3 [3] [4];
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (min(var_20, (((min(2489265523, -3235201665057804678))))));
        var_21 *= (4294967288 * 1907344872);
        var_22 = -126;
        arr_8 [i_1] = (32767 - 163);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_11 [10] [3] |= ((7 * ((((6178563154476418972 > (arr_6 [i_2] [i_2])))))));
        var_23 = (min(var_23, 5));
        arr_12 [i_2] [i_2] = (!6178563154476418979);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_18 [i_2] [4] [0] |= (arr_17 [1] [i_3] [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_25 [i_2] [i_2] [i_3] [0] [0] [i_5] [i_6] |= ((var_14 ? -0 : (arr_1 [i_4])));
                                var_24 = 11764271;
                                var_25 = (((arr_16 [9] [i_3] [i_4] [10]) > (!var_7)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
