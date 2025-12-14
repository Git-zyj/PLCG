/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 2459431559;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_20 &= (~991074597);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_21 = (arr_3 [i_1] [i_0]);
                        var_22 = ((!(8427419121014469561 & var_7)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_23 = (-14132 <= var_15);
                        var_24 = var_12;
                        var_25 = (max(((max((11286 <= var_8), (arr_1 [i_0] [i_1])))), var_5));
                    }
                }
            }
            var_26 ^= ((((arr_6 [i_0 + 2]) ? (arr_6 [i_0 + 1]) : var_12)) - ((((((max(-1776000747, 18446744073709551615))) && (arr_2 [0]))))));
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_27 = (((((((arr_1 [i_6] [i_6]) - var_7)) + 2147483647)) << (var_9 - 18895)));

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_28 = ((((var_2 ? (arr_17 [i_6]) : var_6)) - ((((arr_18 [i_6]) * 0)))));
                            var_29 = (((654169797 ? 1 : (arr_7 [i_6]))) != ((min((arr_8 [i_8] [i_8] [i_8] [i_8]), 11287))));
                        }
                    }
                }
            }
            var_30 = ((~(!3913385689814654231)));
        }
    }
    #pragma endscop
}
