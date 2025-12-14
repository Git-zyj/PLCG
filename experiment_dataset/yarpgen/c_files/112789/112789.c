/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (min((((((-2147483647 - 1) && var_3)) ? var_5 : var_4)), var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = 56101;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 = (arr_1 [9]);
            var_14 = (arr_3 [i_1]);
        }

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_15 = (min(var_15, ((((arr_2 [i_0]) ? 10946126882643497149 : ((35516 ? 10466093855003094922 : (arr_4 [i_0] [i_0] [7]))))))));
            var_16 = (max(var_16, (((~(((arr_8 [i_0] [10]) ? var_6 : (arr_0 [i_0] [i_0]))))))));
        }
        var_17 += 11135125243293542504;
    }
    #pragma endscop
}
