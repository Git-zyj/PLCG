/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((-(-46 <= 65535)))), ((-(min(-58, -9223372036854775805))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((-(min((-250547157 <= 16383), (max(9223372036854775804, 250547149))))));
        var_11 -= (min(((96 ? -14583 : 9223372036854775807)), (((14582 ? 1221208970 : -58)))));
        var_12 += -14564;
    }
    var_13 = (max(var_13, ((min((((!(!1)))), (min(((14563 ? -14578 : 3)), (!-14583))))))));
    #pragma endscop
}
