/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 *= min(((max(1, 55))), 51456);
                    var_15 = ((51456 == (min((var_11 < 1), ((var_3 ? var_1 : 51456))))));
                    var_16 = (max((max(var_13, 484959992)), ((((max(var_2, 3109575553))) ? ((14080 ? 14063 : var_12)) : var_8))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = ((!(((38 * (max(var_13, -6164)))))));
                                var_18 += (min(((min((arr_1 [i_0 - 2]), -1))), ((-37 ? 0 : (arr_1 [i_0 - 2])))));
                                var_19 = (max(var_10, (arr_5 [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_13;
    #pragma endscop
}
