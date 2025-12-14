/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1 + 2] = (arr_0 [i_1]);
                var_10 += ((((min((arr_5 [1]), (arr_5 [1])))) ? ((((-2147483647 - 1) ? -117 : var_3))) : ((min((arr_6 [i_1] [i_1 - 1] [i_0]), 28324)))));
                var_11 = ((!((((arr_4 [i_0] [i_1 + 1]) ? 2147483647 : (arr_4 [i_0] [i_1 + 2]))))));
            }
        }
    }
    var_12 = (((((((max(-121, 11704208147672434007))) ? 2147483630 : var_0))) ? var_7 : ((var_4 ^ (~var_9)))));
    #pragma endscop
}
