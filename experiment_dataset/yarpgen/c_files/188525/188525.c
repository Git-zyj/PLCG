/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = ((8142264724735737716 ? 1 : 1));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = ((1 ? ((((((2089411461 ? 1 : 36))) || 0))) : -59));
        arr_2 [i_0] [i_0] = var_9;
        var_19 = (min(1048574, (arr_0 [i_0])));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (((arr_4 [i_0] [i_1 - 2]) ? (arr_4 [i_1 - 3] [i_0]) : (arr_4 [i_1 - 3] [i_0])));
            arr_6 [i_0] = (arr_0 [i_0]);
        }
    }
    #pragma endscop
}
