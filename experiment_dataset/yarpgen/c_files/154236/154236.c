/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((-9223372036854775807 - 1) ? 670 : 670)))));
    var_20 = (max(var_20, (((-651 ? ((((-672 == 26631) ? var_8 : ((var_7 ? var_6 : var_5))))) : var_17)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [1] |= (max((((min(35888059530608640, -657)) >> (((~-654) - 597)))), 18446744073709551615));
        var_21 = (min(var_21, (((-(((arr_0 [i_0] [1]) ? (arr_0 [i_0] [16]) : (arr_0 [i_0] [0]))))))));
        var_22 = 26639;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((0 >> (((870600065752166600 | 670) + 1399393601))));
                        var_23 = (~8745040041087867100);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_24 -= (arr_2 [i_4]);
            var_25 = (arr_4 [i_0] [i_4] [i_4]);
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_16 [6] = 20833;
        var_26 = ((((min(var_2, var_9))) ? ((~((44703 ? 18410856014178942976 : (-9223372036854775807 - 1))))) : (arr_8 [i_5] [3])));
        arr_17 [17] = ((((1 ? 4294967295 : 3827455446142022387)) & (((min((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]), var_14))))));
        var_27 = -415133550928512092;
    }
    for (int i_6 = 3; i_6 < 17;i_6 += 1)
    {
        var_28 ^= (-9701704032621684515 <= 127);
        var_29 = -2147483644;
    }
    var_30 = var_9;
    var_31 = 661;
    #pragma endscop
}
