/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((((9670364272090620305 ? 16283981172334206004 : 856326887524273263))) << ((((((var_0 << (var_14 - 12019445431920104433))) ^ var_10)) - 16848187269417448138)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 |= ((~var_11) ? ((var_11 ? 18446744073709551610 : (arr_1 [i_0 - 2] [i_0 - 2]))) : ((((419180997621451131 || (arr_0 [i_0 + 1] [14]))))));
        var_17 = min(var_10, (~18168714611586600870));
        var_18 = (min(var_18, (arr_0 [i_0 - 1] [16])));
    }
    #pragma endscop
}
