/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((((max((((arr_2 [i_0]) ? 7 : var_2)), ((((arr_0 [i_0]) < (arr_1 [i_0] [i_0]))))))) ? (((min(19583, (arr_0 [i_0]))))) : ((var_7 ? (arr_3 [i_0]) : var_11))));
        var_21 ^= (((var_2 - ((((arr_2 [i_0]) >= var_5))))));
        var_22 = ((((((var_5 ? (arr_3 [i_0]) : var_5))) <= ((60763 ? 15245979024060621844 : (arr_1 [i_0] [i_0]))))) ? ((((((((arr_1 [3] [i_0]) ? 1 : (arr_1 [i_0] [i_0])))) <= (65535 + 6))))) : (~var_8));
        arr_4 [i_0] = (!((((arr_3 [i_0]) ? -45 : (arr_3 [i_0])))));
        var_23 = var_19;
    }
    var_24 = (max(var_24, ((((!11) ? (((-1553226051 ? 62549 : ((max(1, var_16)))))) : 7870598581707777281)))));
    #pragma endscop
}
