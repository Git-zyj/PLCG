/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((min(var_5, var_0))) ? var_7 : (min(-769905794, var_10))))) ? (174 || 2499868223) : (min(((-5139727582464835422 ? 0 : 63591)), (!88)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~5139727582464835422);
        var_15 = (min((5 < 12281942091658787127), (min((arr_1 [i_0] [i_0]), (~-9149318847585911381)))));
    }
    var_16 = ((0 * ((((var_5 ? var_12 : var_12)) ^ (((var_9 ? var_1 : 3722695878)))))));
    var_17 = var_4;
    #pragma endscop
}
