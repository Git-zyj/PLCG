/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (min((max(7738002065057695777, var_3)), (((min(-866028919, 2090386138))))));
        arr_3 [i_0] = (max((min(9408019820545551785, -20628)), var_8));
        var_11 = (((((~(arr_0 [i_0 + 2])))) ? (((arr_1 [i_0 + 1]) ? 3738469214 : var_0)) : ((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : 2147483647)))));
    }
    #pragma endscop
}
