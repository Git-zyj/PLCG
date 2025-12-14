/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 33554431;
        var_14 = 1;
        var_15 = 2163786916;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_16 = (arr_0 [i_1 + 4]);
            arr_7 [i_1] [2] [i_2] = -2668;
            arr_8 [1] [i_1] [i_2] = -976647950313752221;
        }
        arr_9 [i_1] = 4251488618;
        var_17 = ((123 ? (((18446744073709551608 ? (arr_3 [8]) : 4261412865))) : 6449860731058926815));
    }
    var_18 = ((((((var_8 ? 62938 : 2340305594)))) ? (~var_0) : (((((8309197627504030530 ? var_7 : -9223372036854775789))) ? (min(16080330907402585145, var_11)) : -var_6))));
    var_19 = 16080330907402585169;
    #pragma endscop
}
