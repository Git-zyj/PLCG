/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (min(var_8, ((var_13 / ((var_2 ? var_5 : var_0))))));
    var_16 = ((((((~(var_14 <= var_12))) + 2147483647)) << ((((((max(var_4, var_13))) ? ((153 ? 41666 : 0)) : var_9)) - 41666))));
    var_17 += (!(((var_3 | (~4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 ^= (arr_0 [i_2] [i_1 + 2]);
                    var_19 = (var_5 < -var_2);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = (max(var_20, 0));
                        var_21 = ((5417 ? (arr_3 [i_2 + 1] [i_2 - 1]) : var_10));
                        var_22 = ((arr_5 [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1]) ? (arr_7 [i_0]) : (((arr_3 [0] [i_1 + 2]) | 13)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_23 = (var_2 / var_11);
                        var_24 = (max(var_24, var_9));
                    }
                    var_25 = (((((!(arr_5 [i_0] [i_1 + 1] [i_2 - 2] [i_2 + 2])))) | (~var_11)));
                }
            }
        }
    }
    #pragma endscop
}
