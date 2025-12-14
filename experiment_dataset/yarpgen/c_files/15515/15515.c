/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_9;
    var_13 = ((18446744073709535232 ? ((((~var_11) >> ((((548855055 ? 123 : 9223372036854775808)) - 93))))) : (min(var_10, (min(2135814373, 9223372036854775808))))));
    var_14 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((((18488 ? 422212465065984 : var_7))) ? var_2 : ((min(2963, var_10)))));

                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 ^= 48;
                                var_17 = 1105626272;
                                var_18 = ((((var_11 ? 11 : var_1))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] = (((-(max(341653171, 255)))));
                    var_19 = (arr_14 [i_0] [i_1] [i_1] [i_1] [3] [i_2 - 2] [i_2]);
                    var_20 = (min((((arr_8 [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_2]) * var_8)), (arr_8 [i_1 - 2] [i_2 - 4] [i_1] [5])));
                }
            }
        }
    }
    #pragma endscop
}
