/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [1] [i_4] = (((((65535 ? 65535 : 5693862945414943779))) ? (((var_4 ? 0 : var_7))) : (min(30, -1485663377626559328))));
                                arr_15 [17] [i_1] [i_2] [i_0] [i_4] = ((4503599493152768 / ((max(var_3, var_9)))));
                            }
                        }
                    }
                    var_20 = (min(63, (max((max(var_16, var_3)), (!var_10)))));
                    var_21 = ((~(max(100, ((7694716503134503516 ? 13826 : -7694716503134503519))))));
                    var_22 = (min(var_22, ((min((((var_9 ? (var_1 || 24) : var_10))), ((68 ? var_5 : var_3)))))));
                    var_23 = (max(((max(var_8, var_2))), ((((min(-1, -4133674847933800139))) ? 8498552228401356385 : -1149314817))));
                }
            }
        }
    }
    var_24 = (max(0, 18446744073709551615));
    #pragma endscop
}
