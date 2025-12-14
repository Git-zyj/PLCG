/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = ((((((!var_14) ? (~var_7) : (((arr_2 [i_0]) - var_17))))) ? ((((arr_1 [i_0 + 1]) != var_14))) : ((max(var_6, var_11)))));
        arr_3 [i_0 - 1] = (max(1, 533775788));
        var_19 = -14400705874753564670;
        arr_4 [8] [8] = (((var_11 ? var_2 : -533775790)));
    }
    var_20 = (max(var_20, 1));
    #pragma endscop
}
