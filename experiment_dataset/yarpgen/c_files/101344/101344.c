/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = (min((arr_4 [i_0 + 1]), ((31465 ? -var_9 : (arr_5 [i_0] [i_0])))));
                            var_14 = (min(var_14, (~var_1)));
                        }
                    }
                }
                arr_9 [i_0] [i_0] [i_0] = (-(((!(arr_7 [i_1] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])))));
                var_15 -= (max((((!31468) ? (max((arr_1 [i_0] [i_0]), 9297)) : ((max(var_5, -26))))), (min(((var_1 & (arr_2 [i_0 + 1]))), ((min(var_10, 34067)))))));
            }
        }
    }
    var_16 = var_11;
    var_17 = ((~((-32766 ? 9311 : 4110395441))));
    #pragma endscop
}
