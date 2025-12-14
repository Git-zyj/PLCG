/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((-var_9 ? ((-52 ? -99 : -42)) : var_2)), (((!(arr_1 [i_0] [8]))))));
        var_13 = (min((--710568359), (((arr_0 [i_0] [i_0]) ? (-51 || -29) : var_1))));
        var_14 = (min(var_14, ((max(((((22 - -3) && -52))), (((arr_0 [i_0] [6]) / (arr_0 [i_0] [10]))))))));
    }
    var_15 = ((~(max(-var_2, var_8))));
    var_16 = var_2;
    var_17 = (1 ? 8941379657863989734 : -53);
    #pragma endscop
}
