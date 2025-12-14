/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 = var_10;
        arr_4 [i_0] [i_0] = (((1 + (arr_3 [i_0 + 2]))) - (min(1, 1529728638)));
        var_15 = (((max((arr_1 [i_0] [i_0 - 1]), var_13))) && ((1 < (arr_1 [i_0 + 1] [i_0 + 2]))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_16 ^= (arr_7 [i_3]);
                            arr_14 [i_1] [i_3] [i_3] [i_3] = ((-1357278021 ? ((max((arr_9 [i_4] [i_2 + 2] [i_3]), 240))) : (arr_9 [i_1] [i_2] [i_3])));
                            var_17 *= max(((((max((arr_8 [i_4] [i_1] [i_1]), -243330595))) ? (((arr_11 [i_3] [i_3]) ? 1 : 1)) : ((var_3 ? var_0 : (arr_9 [i_1] [i_2 - 1] [i_1]))))), (((1 >= var_6) >> ((((9223372036854775807 ? (arr_6 [i_1]) : (arr_9 [i_1] [18] [i_4]))) + 219277492)))));
                            var_18 *= var_7;
                            var_19 = -4537514039387244828;
                        }
                    }
                }
                var_20 = (max((arr_6 [i_1]), (min(9223372036854775807, (-2147483647 - 1)))));
            }
        }
    }
    var_21 = 1;
    #pragma endscop
}
