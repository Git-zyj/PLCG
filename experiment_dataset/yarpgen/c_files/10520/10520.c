/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-1, 15777));
    var_14 = (((((var_1 ? (max(var_4, -1560975296900829875)) : var_9))) || ((max(var_0, (min(var_2, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = -24032;
                var_16 *= 0;
                var_17 = (((arr_0 [i_1 - 2] [i_0]) ? ((-(((arr_4 [16] [i_0] [i_1]) ? (arr_5 [i_0]) : (arr_0 [i_0] [i_0]))))) : (min((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1])))));
                arr_6 [i_1] [i_0] [i_0] = (((((((min(var_9, var_6))) ? (max(1802808094, (arr_5 [i_0]))) : (((arr_4 [i_0] [i_1] [i_1 - 1]) ? 34837 : -83))))) ? (((arr_1 [i_0] [i_1 - 2]) ? var_9 : 1)) : (max((arr_2 [i_1 - 2] [i_1 - 1]), var_11))));
                var_18 &= (((~64181) || (~var_3)));
            }
        }
    }
    var_19 = (max((!3358954415), ((((!64194) ? var_5 : var_10)))));
    #pragma endscop
}
