/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((min(var_15, (max(-1400609110508194127, 16256)))), (min((min(var_7, var_14)), (~var_1))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = 1677103137;
                    var_19 = max(((var_0 | (arr_7 [i_0] [i_0] [i_0] [i_0 - 3]))), ((~(arr_7 [i_0] [i_0] [i_0] [i_0 - 2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (~1);
                                arr_15 [i_0] [i_0] [11] [i_3] = 2868481210;
                                var_21 = ((0 ? 0 : -14703));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
