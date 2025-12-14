/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max(((min((0 != 16308), 59978))), (max(1, 30))));
    var_17 = (((var_9 && var_13) ? -168015470 : (((((~var_3) + 2147483647)) >> (((49236 - var_3) - 20647))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 = (min(var_18, (~var_7)));
        arr_2 [i_0 - 1] = (arr_0 [i_0 - 1] [i_0 - 1]);
        var_19 = (((arr_1 [i_0 + 3]) ? (64194 + 27522051821216361) : ((var_8 ? 27522051821216361 : var_1))));
    }
    var_20 = (min(var_20, (((10 ? (min(27522051821216364, var_1)) : (~var_3))))));
    var_21 = (min(var_21, ((((4294967295 + 16299) >> (!var_14))))));
    #pragma endscop
}
