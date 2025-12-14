/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = 75;
                var_15 = (min(((((((arr_2 [9] [i_1 - 1] [i_1]) ? 1 : var_3))) ? var_1 : -1466918742495227200)), ((((arr_3 [i_0] [i_1 + 1] [i_1]) || (arr_1 [i_0] [i_1 + 1]))))));
            }
        }
    }
    var_16 = max((((var_0 ? var_10 : 60))), var_9);
    var_17 = ((((((((1981453782 ? var_2 : var_2))) ? (max(23, 1371095825)) : var_2))) ? var_7 : (!var_14)));
    #pragma endscop
}
