/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-13195 ? 10748586405406711741 : -127))) ? var_1 : -var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] [i_1] = (arr_2 [i_0]);
                var_11 = var_9;
                var_12 = (((arr_2 [i_0]) ? ((~(arr_0 [i_1] [i_0]))) : (!122)));
            }
        }
    }
    var_13 = (4294967284 || 47086);
    var_14 = (max(((min(47086, -123))), (((max(var_3, var_0)) + 47086))));
    var_15 = (((((var_8 <= (((281474976710656 ? -2074743947 : 2074743952)))))) - (!var_2)));
    #pragma endscop
}
