/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (min(var_14, (((2216527627 != (((((arr_6 [i_0]) >= var_5)))))))));
            var_15 = (max(var_15, 2078439673));
        }
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (arr_2 [i_0] [i_2]);
            var_16 = (((arr_4 [i_2] [i_2 + 4] [i_2 + 4]) ? (((32083 ? (arr_2 [2] [i_2 + 4]) : var_2))) : ((974573100 << (arr_2 [i_2 + 1] [i_2 + 4])))));
        }
        arr_10 [i_0] = var_10;
        var_17 = ((~((max((arr_8 [i_0]), (!1325036233))))));
    }
    #pragma endscop
}
