/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((80 ? 106 : 108)))));
                arr_6 [i_0] = (((((var_3 ? (arr_5 [i_0]) : (arr_4 [i_1 + 1])))) ? ((18446744073709551600 ? -64 : 13590125853877293484)) : (((-103 ? var_17 : (arr_4 [i_1 + 2]))))));
            }
        }
    }
    var_19 *= var_4;
    var_20 *= ((((((((4856618219832258120 ? var_9 : var_7))) ? ((var_17 ? var_8 : var_0)) : var_12))) ? var_7 : (((var_17 ? var_8 : var_4)))));
    var_21 = (min(var_21, var_8));
    #pragma endscop
}
