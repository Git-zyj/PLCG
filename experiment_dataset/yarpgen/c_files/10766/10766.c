/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = var_4;
        var_19 = (max(var_19, ((((~(~0)))))));
        arr_4 [i_0] = var_11;
        var_20 -= (arr_1 [2]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = ((((!(67 || var_13))) ? 4294967295 : (arr_2 [i_1])));
        var_21 = (min(var_21, (((4294967284 && ((max((~var_14), 1))))))));
    }
    var_22 |= ((~(~var_14)));
    #pragma endscop
}
