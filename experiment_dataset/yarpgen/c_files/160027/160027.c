/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = ((-((0 ? 183 : var_6))));
        var_20 = arr_1 [i_0] [i_0];
        var_21 = (min(var_21, 2940023774));
        var_22 = min(2931675161877432476, ((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))));
    }
    #pragma endscop
}
