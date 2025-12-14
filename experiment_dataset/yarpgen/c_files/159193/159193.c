/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_13));
    var_15 += ((~(((((4503599627370495 ? var_9 : 4503599627370484)) == (var_1 != var_13))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((((!-334616855) ? (arr_0 [i_0] [i_0]) : (((min(65, 2)))))) == ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0)))));
        var_16 = var_9;
    }
    var_17 *= ((((((min(1, var_10)) ? 1 : var_10))) ? ((((!var_1) ? -7664393816667863022 : (!var_7)))) : var_13));
    #pragma endscop
}
