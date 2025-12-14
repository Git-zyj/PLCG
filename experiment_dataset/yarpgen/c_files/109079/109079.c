/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((~var_12), 0))) ? (((~var_4) << (((~-3559050615166166576) - 3559050615166166575)))) : var_3));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (~448);
        arr_4 [i_0] = (((((var_13 + ((-32259 ? var_9 : 267386880))))) ? ((~(arr_2 [i_0] [i_0]))) : ((3049586474 | (~3049586450)))));
    }
    var_19 *= ((~(((~var_10) ^ (-2934413159383787298 & var_5)))));
    var_20 = var_9;
    var_21 = ((((~(var_0 & var_0))) | ((((~var_12) ? (85 > var_1) : (~-32253))))));
    #pragma endscop
}
