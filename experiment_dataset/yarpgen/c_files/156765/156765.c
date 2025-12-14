/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((-1024 ? ((-1024 ? -2351 : -2599)) : 0));
                var_16 = (max(var_16, (((((((arr_4 [i_0] [i_0] [i_0]) ? var_1 : 255))) ? ((((((arr_2 [i_1]) ? var_0 : var_10))) ? (((arr_4 [i_0] [i_0] [i_0]) ? 29171 : 272)) : var_8)) : ((var_10 ? (arr_5 [i_0] [i_1] [i_0]) : (((arr_2 [i_0]) ? 12923 : var_4)))))))));
            }
        }
    }
    var_17 = ((var_6 ? ((var_15 ? ((var_0 ? var_10 : 18143)) : ((var_6 ? var_10 : var_7)))) : var_15));
    #pragma endscop
}
