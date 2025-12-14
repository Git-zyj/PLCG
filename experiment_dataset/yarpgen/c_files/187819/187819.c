/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 -= (1670010887 + 1792166299);
                var_13 = (min(var_0, 1322391737));
                var_14 = (((-(max((arr_1 [i_1]), 1)))));
            }
        }
    }
    var_15 = 4294967277;
    var_16 = ((((((9059 ? var_0 : var_6)) <= (!var_7))) ? var_11 : ((var_7 ? var_3 : 0))));
    #pragma endscop
}
