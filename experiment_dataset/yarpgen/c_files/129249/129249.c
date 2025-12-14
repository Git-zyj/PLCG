/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min((~36028792723996672), ((0 ? -32758 : 6432855727279608436))));
        var_19 -= 6406261161886677807;
        arr_2 [1] &= ((~(max(1199607458805092737, 6406261161886677807))));
        arr_3 [i_0] = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : 8188))) <= 6406261161886677799));
    }
    var_20 = ((+((((var_12 / 6406261161886677807) < (((max(1, -13567)))))))));
    #pragma endscop
}
