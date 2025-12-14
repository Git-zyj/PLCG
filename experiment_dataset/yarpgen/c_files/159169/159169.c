/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 &= (max((arr_1 [i_1 - 1] [i_1 - 1]), (max((arr_1 [i_0] [i_1]), (((arr_4 [i_1]) ? (arr_3 [16]) : 17))))));
                var_18 = arr_1 [i_1 - 1] [i_1 - 1];
            }
        }
    }
    var_19 = (((((-((min(var_15, var_12)))))) ? var_13 : var_12));
    var_20 = var_13;
    var_21 = (!var_7);
    #pragma endscop
}
