/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((58399 | (min((-7804574958364394745 % -7804574958364394745), (!7136))))))));
    var_13 = (min((((!((min(132, 20)))))), 58400));
    var_14 = ((((-14 + (0 && 3795365756430870574))) > ((0 + (-7358608034087008571 == 8226)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(var_15, (!25438)));
        var_16 = (((~7136) ^ 65527));
        arr_2 [13] [i_0] = (15 - 118336326);
    }
    #pragma endscop
}
