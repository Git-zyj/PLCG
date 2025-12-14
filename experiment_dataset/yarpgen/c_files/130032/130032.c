/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_7;
    var_12 = ((~(!var_0)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_13 = ((((((arr_2 [i_0]) ? (!50209) : (((arr_1 [i_0] [i_0 - 2]) ? (arr_2 [i_0]) : (arr_2 [i_0])))))) ? 2393944487 : 1558859261));
        var_14 = (arr_0 [i_0]);
    }
    #pragma endscop
}
