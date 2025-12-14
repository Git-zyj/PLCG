/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(min(-var_1, (var_2 ^ var_3)))));
    var_17 = (max(var_17, ((min((max((18193750582065485058 || var_12), (min(6759210886471466584, var_1)))), (~var_5))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = var_7;
        var_19 = (((min((((arr_0 [i_0]) ^ 18193750582065485058)), (((-94829675 ? 115 : -1676570020)))))) ? (max((arr_1 [i_0]), ((~(arr_0 [17]))))) : (arr_1 [i_0]));
        var_20 = ((arr_0 [i_0]) ? (max(((min((arr_1 [14]), var_7))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_12)))) : (~90));
    }
    #pragma endscop
}
