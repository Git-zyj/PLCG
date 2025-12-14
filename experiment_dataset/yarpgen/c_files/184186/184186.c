/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (max((((var_1 || (756 || var_2)))), (max(-192886899, (max(1532385077, var_12))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0]))));
        var_16 = (min(var_16, ((~(max(192886876, (arr_1 [i_0])))))));
        var_17 = ((((+(min((arr_2 [i_0] [i_0]), var_0)))) / (arr_1 [i_0])));
        var_18 = ((!((max(133979324, (~1407))))));
    }
    var_19 = (!46712);
    #pragma endscop
}
