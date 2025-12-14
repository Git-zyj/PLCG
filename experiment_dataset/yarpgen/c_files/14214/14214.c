/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(((-119 ? 150 : 2135012534)), (((-(arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((-(~var_11)));
        arr_4 [i_0] = ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : 18446744073709551615))) ? ((((max((arr_1 [i_0]), var_3))) << (((960 == (arr_2 [i_0] [i_0])))))) : ((((-18880 ? (arr_0 [i_0] [2]) : var_6)) | ((5 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))))));
    }
    var_15 = var_11;
    #pragma endscop
}
