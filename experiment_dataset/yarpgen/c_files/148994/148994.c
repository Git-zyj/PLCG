/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    var_18 = (min(var_18, (!5620403937760190738)));
    var_19 = ((((!-807) ? (!var_10) : ((min(1, 1))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((((arr_2 [i_0]) | (arr_1 [i_0]))), 65528));
        var_20 = (((((arr_2 [i_0]) / 255))) % ((var_16 - (arr_2 [i_0]))));
        var_21 = 1;
    }
    var_22 = (((((var_14 ? 2831624561 : 0)))) ? var_15 : (max(2831624552, (7838600201957559806 - 34))));
    #pragma endscop
}
