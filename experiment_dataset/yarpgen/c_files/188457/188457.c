/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_10;
    var_12 = ((var_8 ? (max((min(402653184, var_1)), var_9)) : ((var_10 ? (((3892314112 ? var_7 : var_4))) : ((402653184 >> (var_9 - 4185474909)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (min(var_13, ((((arr_1 [i_0] [12]) * (((((((-22839 < (arr_0 [0]))))) != ((var_4 ? var_5 : (arr_1 [i_0] [1])))))))))));
        var_14 = (arr_0 [i_0]);
        var_15 = (((arr_1 [i_0] [i_0]) / 16511));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = ((var_8 % (((15 ? 60393 : 60395)))));
            var_17 = (~5152);
        }
    }
    #pragma endscop
}
