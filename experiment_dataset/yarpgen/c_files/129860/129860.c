/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min(108, ((var_5 << (54386 - 54386)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1] [i_0] = ((!(!-5244)));
                            var_14 = ((-((25071299 ? 17437778381370679998 : 3))));
                        }
                    }
                }
                var_15 = (min(var_15, (max((((((arr_10 [i_1 + 2] [i_1]) + 2147483647)) << (((arr_12 [i_0] [i_0]) ? (arr_9 [2] [i_0] [i_1 + 2] [i_1]) : 20)))), 1))));
            }
        }
    }
    var_16 = (max((((-125 < (var_12 | -124)))), var_10));
    var_17 = (~var_2);
    var_18 = (max((!var_12), ((var_11 ^ (-633782420 & 9223372036854775807)))));
    #pragma endscop
}
