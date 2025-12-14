/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((var_17 & var_7) ? var_11 : 78))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((((var_0 ? (-127 - 1) : 250)) & ((var_1 ? 0 : var_14))));
                var_21 = (min(var_21, (-422714308787814834 && var_15)));
            }
        }
    }
    var_22 = (max(var_22, var_12));
    var_23 = (((((1803305573 & (!-947901739)))) ? (((((max(var_13, var_17))) & var_1))) : (max((-422714308787814818 & 0), ((3084435434 ? 2455452798 : 3255865715909094370))))));
    #pragma endscop
}
