/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((-(arr_9 [i_4] [i_3] [i_2] [i_1])));
                                var_19 = ((((2147483647 | (arr_11 [i_0] [6] [0] [i_0] [i_0] [i_0] [i_0]))) > (min(var_1, (((arr_5 [i_1] [i_2] [i_1]) ? var_15 : var_14))))));
                            }
                        }
                    }
                    var_20 |= (arr_1 [i_0] [i_0]);
                    arr_13 [i_0] = (((((2147483647 ? 3461850143 : 2147483647))) ? ((6212780990024834189 ? (!12) : 2967)) : 3301701421748814931));
                    var_21 -= ((((14702312188465398451 << (2147483647 - 2147483612))) >> (6741 - 6715)));
                }
            }
        }
    }
    var_22 = (max((max((!9006924376834048), ((var_11 ? var_8 : 62)))), ((((!var_13) >> (var_14 - 14087))))));
    #pragma endscop
}
