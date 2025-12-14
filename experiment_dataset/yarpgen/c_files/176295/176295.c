/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((288221580058689536 ? var_5 : (((31 ? (min(8588886016, var_6)) : (18158522493650862086 > var_5))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (((!4294967295) ? (min(var_3, (arr_1 [i_0]))) : 1324840848438803712));
        arr_2 [i_0] [16] &= ((9 ? ((((-127 - 1) / 8096))) : 288221580058689536));
        arr_3 [i_0] = (min((!-256), (~-31573)));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (!-1);
        var_14 = var_0;
    }
    #pragma endscop
}
