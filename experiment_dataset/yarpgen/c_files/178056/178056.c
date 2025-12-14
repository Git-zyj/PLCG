/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((1 ? var_1 : var_10))) ? (((var_0 ? 102 : var_7))) : ((266338304 ? (((min(var_6, var_8)))) : var_11))));
    var_13 = (!266338304);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_14 *= ((((((var_3 ? var_0 : 15872))) ? ((255 ? 2673803138 : 2147483648)) : 7)));
                arr_5 [14] [i_1] [14] = ((var_6 ? 2080374784 : -28596));
            }
        }
    }
    #pragma endscop
}
