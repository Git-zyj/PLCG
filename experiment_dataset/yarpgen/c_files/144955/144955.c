/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] = ((~(arr_1 [i_0])));
            arr_7 [i_0] [i_0] [i_1] = ((arr_2 [i_0 + 1] [i_1]) * 136020657);
            var_14 = (!var_7);
            var_15 = (arr_0 [i_0]);
        }
        arr_8 [i_0] = 18446744073709551615;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_16 = (~-var_5);
        var_17 = (!var_13);
        arr_12 [i_2] [6] = (var_3 - 1363337351);
    }
    var_18 = (((-32767 - 1) % 100));
    #pragma endscop
}
