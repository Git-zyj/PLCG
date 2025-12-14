/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-802590851 ? 11100 : ((9223372036854775806 ? ((1730136282 ? 829 : var_3)) : var_11))));
    var_16 = (((((var_12 || 7420748018747219219) ? (64706 * var_13) : (~var_13)))) ? (~829) : ((((((850 ? 833 : 64696))) && 64696))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((64705 ? (64696 - var_5) : 21054))) ? -43038 : ((-(arr_0 [i_0] [i_0]))));
        var_18 = (~64712);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 = (((min(var_0, (arr_2 [i_1]))) != ((((arr_2 [i_1]) & (arr_2 [i_1]))))));
        var_20 = (max(var_20, var_7));
    }
    var_21 = (((((~var_6) <= (((806 ? var_11 : 830))))) ? var_9 : ((((64705 ? var_1 : var_13)) >> ((((65535 ? -2613315784927320253 : 64712)) + 2613315784927320259))))));
    #pragma endscop
}
