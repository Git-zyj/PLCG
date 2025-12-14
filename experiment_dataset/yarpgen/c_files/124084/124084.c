/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((57342 || (((var_17 ? var_3 : var_7)))))), 27036));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~41052);
        arr_3 [i_0] = arr_0 [7];
        arr_4 [7] = ((((((arr_0 [i_0]) << (var_2 + 37)))) ? -2465064472725530140 : (~206)));
        arr_5 [i_0] [i_0] = ((!((((((-874156181 ? 16 : var_6))) ? (var_0 + var_3) : (arr_1 [10]))))));
    }
    var_19 = (min(var_19, 51693));
    #pragma endscop
}
