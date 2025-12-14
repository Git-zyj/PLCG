/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((min(((27055 ? 27055 : 8191)), (38481 - 38481))) - var_4)))));
    var_13 = ((((((min(var_11, var_11))) != ((min(21551, var_4))))) ? (((var_6 || (221 * var_4)))) : ((1626883578 ? ((min(var_2, 16368))) : var_5))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(var_14, ((!((1 != (var_8 - var_10)))))));
        var_15 *= (((((27054 ? 12789896881309093690 : 127))) ? 7 : 0));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (max(var_16, (((((arr_1 [i_1] [i_1]) ? var_6 : var_5))))));
        var_17 *= ((min((arr_2 [i_1]), (arr_4 [i_1]))));
    }
    var_18 = (min(var_18, var_4));
    #pragma endscop
}
