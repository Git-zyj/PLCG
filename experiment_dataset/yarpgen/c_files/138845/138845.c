/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((min(var_6, -1674)))) ? var_5 : var_7));
    var_20 = (min(var_20, (((((45219 ? 20314 : 13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = -24699;
                var_22 = (arr_3 [i_1]);
                var_23 = (max(var_23, -20312));
                arr_4 [i_0] [5] = ((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
            }
        }
    }
    var_24 &= 9;
    var_25 = var_9;
    #pragma endscop
}
