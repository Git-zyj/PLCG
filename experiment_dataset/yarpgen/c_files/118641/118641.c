/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, -var_8));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_17 = ((var_7 ? (arr_2 [i_0 + 2] [i_0 + 4]) : var_1));
        var_18 = (arr_1 [i_0] [i_0 + 3]);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_19 = (((((var_3 ? (~1) : ((1080215188 ? 15688926505601155177 : 793547573))))) ? ((var_7 ^ (arr_1 [i_1 + 1] [i_1 + 1]))) : (((max((arr_4 [i_1] [i_1 + 1]), var_11)) / (((var_8 % (arr_1 [i_1] [i_1]))))))));
        arr_5 [i_1] = ((((min((min((arr_0 [i_1]), var_4)), ((var_11 << (var_7 - 102884550285154948)))))) ? 1 : (min((arr_1 [i_1 - 1] [i_1 + 2]), 7582))));
        var_20 -= var_14;
    }
    var_21 = (min((7583 > 2757817568108396439), (min((7582 && var_2), -7583))));
    #pragma endscop
}
