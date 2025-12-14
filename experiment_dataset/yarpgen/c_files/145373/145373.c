/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-8340298195821356405 ? 32086 : (1 > 42894)));
    var_12 = 33440;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 = (((~1233364062100128773) ? ((~(arr_0 [i_0]))) : var_0));
        var_14 = ((((min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 2])))) - (arr_0 [i_0 - 2])));
        arr_3 [i_0 - 1] [i_0] = (((arr_2 [i_0 - 2] [i_0 + 1]) > -5575622662084788970));
        arr_4 [i_0 - 2] = (arr_2 [i_0 - 1] [i_0 + 1]);
    }
    #pragma endscop
}
