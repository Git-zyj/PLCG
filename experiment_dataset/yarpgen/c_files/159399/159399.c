/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_9 & ((1886241038 ? var_8 : var_5))))) ? var_8 : (min(var_0, (var_8 & -1449708382)))));
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [i_0 + 1])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_12 = (((arr_1 [i_0 - 3]) - (arr_1 [i_0 + 3])));
            var_13 = (15 / (arr_4 [i_0 + 2] [i_0] [i_1]));
            var_14 = ((-(((arr_4 [19] [i_0] [0]) ? 8388607 : (arr_1 [0])))));
        }
        var_15 += ((var_1 ? (arr_0 [i_0 + 2]) : ((var_8 ? 12553693741240953181 : (arr_0 [i_0])))));
    }
    var_16 = -11572147582733172905;
    #pragma endscop
}
