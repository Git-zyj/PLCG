/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 &= ((+(((arr_3 [i_0]) ? 63 : -1))));
                var_22 = (arr_1 [i_0] [i_1]);
                var_23 = (((arr_0 [i_0] [i_1]) >= ((((arr_0 [i_0] [i_1]) ? (!var_18) : ((136 ? var_19 : 2)))))));
            }
        }
    }
    var_24 = 1;
    var_25 += min(var_5, (max(((var_6 ? var_5 : var_1)), ((var_2 ? var_4 : -2)))));
    #pragma endscop
}
