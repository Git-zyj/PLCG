/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 ? (((var_0 % 72057593501057024) ^ (!-10338))) : var_12));
    var_17 = var_13;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_18 = (((7525 ? 4294967295 : (arr_1 [i_0 + 2]))));
        var_19 = (max(((((~(arr_1 [i_0]))))), ((~((-10329 ? 10162902355438139656 : 10370))))));
        var_20 = ((446259994 ? (((~(arr_1 [i_0 + 1])))) : (arr_0 [i_0 + 3])));
        var_21 = (((((8283841718271411967 == (arr_0 [i_0 + 1])))) << ((((-3987064994709986779 / (arr_0 [i_0 - 1]))) - 37))));
    }
    #pragma endscop
}
