/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = ((((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? (arr_0 [i_0 + 1]) : ((22308 + (arr_0 [i_0 - 1])))));
        var_13 = (~var_0);
        arr_2 [i_0] = (min((((-930093329 ? (arr_1 [i_0 - 1]) : var_7))), 540827370089011502));
        var_14 = ((((min((arr_0 [i_0 + 1]), var_4))) ? (arr_0 [i_0 + 1]) : (min(((-(arr_1 [i_0]))), var_2))));
        arr_3 [0] = ((!(((11010027439338694743 >> (11893789425602087240 - 11893789425602087187))))));
    }
    var_15 = (min(var_15, ((min(17702483035863381466, var_1)))));
    #pragma endscop
}
