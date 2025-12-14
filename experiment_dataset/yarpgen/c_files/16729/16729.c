/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_15 = (max((arr_2 [0]), (arr_2 [i_0 + 1])));
        var_16 = ((((max((arr_0 [i_0 - 1] [i_0 + 2]), ((max((arr_2 [1]), 2048)))))) ? (!24029) : 0));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_17 = ((((((5303619039002674818 ? 5303619039002674818 : (arr_4 [i_1])))) ? (max(var_7, var_13)) : (((13143125034706876797 ? var_8 : var_3))))));
        var_18 ^= (arr_3 [i_1]);
    }
    var_19 = var_4;
    var_20 = (min((~var_3), (!1264693744)));
    var_21 = (!var_0);
    #pragma endscop
}
