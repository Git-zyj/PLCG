/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 ^= (((((((((arr_1 [i_0 - 1] [i_0]) ? var_5 : 103))) ? (arr_2 [i_0] [5]) : ((18446744073709551615 ? (arr_0 [2]) : 16483701921050434726))))) || var_7));
        var_18 = (((((216 ? (((var_10 ? var_13 : var_4))) : (-9223372036854775807 - 1)))) ? (max(((var_10 ? 223 : var_14)), 1)) : (((var_1 && ((((arr_2 [i_0 + 2] [2]) ? 4449346363384059622 : 576460752299229184))))))));
        arr_3 [i_0 + 1] [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0 - 1] [i_0] = var_2;
        var_19 = (((((var_15 ? (140 & 85) : var_6))) || 10038678486431937449));
    }
    var_20 = ((var_1 ? var_0 : 18446744073709551613));
    var_21 += (max(var_14, var_0));
    #pragma endscop
}
