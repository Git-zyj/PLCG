/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((~var_11) ? (var_15 - 25842) : var_1));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (((min((arr_0 [12]), ((max(-32248, 1)))))) + -951361508447988830);
        arr_3 [i_0] [1] = ((((((!var_4) ? (!13822199386101855196) : (min(-1314432954, var_14))))) ? (((-((32253 ? 160791428 : 47237))))) : (((4061531444 & 4294967295) ? (((((arr_1 [i_0] [7]) > (arr_2 [i_0]))))) : 4006318584569385157))));
    }
    #pragma endscop
}
