/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [4] [0] [i_0] = ((~(var_14 + var_10)));
                var_18 = (min(var_18, -3247208511793816109));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 1] [i_0] [10] [1] = ((-((((((var_4 >> (var_7 - 80)))) && var_16)))));
                                var_19 ^= (((((((var_4 ? var_3 : 252)) >> (-580097632 + 580097634)))) ? var_13 : ((min(var_17, ((1 ? -1 : -848622509)))))));
                                var_20 = (((((var_10 ^ var_8) ? 848622504 : var_7)) & (max(((var_13 ? var_11 : var_12)), 1))));
                            }
                        }
                    }
                }
                var_21 = (~var_14);
            }
        }
    }
    var_22 = 89;
    #pragma endscop
}
