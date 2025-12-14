/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-var_3 / var_10) >> (var_5 - 35042)));
    var_13 = (~var_4);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_14 += ((((((201 && 7527309799472390053) ? ((((arr_2 [i_0]) ? var_7 : 15))) : (((arr_2 [0]) + 36580))))) ? ((((((arr_2 [i_0]) - 0))) ? (1 - 54631) : var_0)) : 0));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_15 = (max(var_15, (var_0 > var_4)));
            var_16 -= ((+(((arr_1 [i_1 + 2]) << (((arr_0 [i_0] [i_1 + 1]) - 11599))))));
        }
    }
    var_17 = (min(var_17, ((((~var_9) ? var_9 : ((((!(((var_4 ? var_4 : var_10))))))))))));
    #pragma endscop
}
