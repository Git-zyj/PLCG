/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_1;
    var_15 -= (((-((var_9 ? var_6 : 99)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = -19252;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = var_5;
                                var_18 = (max((max(3245062092, var_2)), (((((min((arr_8 [i_0] [i_1 - 2] [i_3] [i_3] [i_0] [i_3]), var_13))) ? (arr_5 [i_3] [i_4 - 2]) : var_13)))));
                            }
                        }
                    }
                    var_19 = ((((((((-40 ? var_4 : var_12))) ? 641808649 : (min(var_8, (arr_10 [i_2] [i_0] [i_0] [i_0 + 2])))))) ? (min((((arr_6 [i_0] [i_0]) ? var_3 : 1)), 192)) : (((-1183913905 ^ (arr_6 [i_0 + 2] [i_0]))))));
                }
            }
        }
    }
    var_20 = var_4;
    var_21 = ((var_9 - (((max(-7976, 1))))));
    #pragma endscop
}
