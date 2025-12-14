/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 &= 5619455910192410030;
        arr_2 [i_0] = (min((arr_1 [i_0] [i_0]), var_3));
        arr_3 [i_0] = (!-1);
        arr_4 [i_0] [i_0] |= (((max((max(var_0, (arr_1 [i_0] [i_0]))), (arr_0 [i_0])))) & ((min(var_4, (max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 ^= ((9 > (3995239489 >= 1884610387)));
        var_17 = ((3307037829588102683 % (arr_7 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = (max((max(var_1, (arr_10 [i_4 + 1]))), (arr_1 [i_4 + 2] [i_6 - 3])));
                                var_19 = var_11;
                                var_20 -= 2004433304;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_2] [i_2] [i_2] [i_2] = ((~(((((-(arr_10 [i_2])))) ? ((max((arr_26 [i_8]), (arr_12 [i_8 - 2] [i_3] [i_8 - 2])))) : (arr_18 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8 + 2])))));
                                var_21 = (min(var_21, (((5767065432059556231 % (((6421 ? 65535 : 65530))))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 -= (max(-10302, -59));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_23 = arr_29 [i_9];
        var_24 -= ((-(((arr_30 [i_9]) ? -18274 : (arr_30 [i_9])))));
        var_25 *= (((((((-18012 ? (arr_30 [i_9]) : 58))) ? 59137 : ((172 ? 1 : 63)))) / (arr_30 [i_9])));
        var_26 = ((((-(arr_29 [i_9]))) * ((min(var_12, ((max(var_0, -58))))))));
        arr_31 [i_9] &= ((!(-60 / var_10)));
    }
    #pragma endscop
}
