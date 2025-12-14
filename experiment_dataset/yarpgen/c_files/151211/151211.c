/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (max(524288, 524265));
    var_16 |= var_7;
    var_17 = ((-(!var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = ((-(arr_4 [i_0])));
            arr_5 [i_1] [1] [i_1] = (-524283 | 524283);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = 19591;
            arr_10 [i_2] [i_0] = (~var_14);
        }
        var_19 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
