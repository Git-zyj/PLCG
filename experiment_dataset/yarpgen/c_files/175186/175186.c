/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_15, ((((var_1 << (44768 - 44756))) ^ (~var_12)))));
    var_18 = ((var_2 ? ((((!(40358 + 59423))))) : var_0));
    var_19 -= (min(var_5, (~var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = (arr_3 [i_1]);
                var_21 = max((((arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 1]) ? (arr_2 [i_1 - 1] [i_1 + 2] [i_1 + 1]) : var_12)), var_9);
            }
        }
    }
    var_22 = (min(var_22, var_4));
    #pragma endscop
}
