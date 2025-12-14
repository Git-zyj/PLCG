/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((!(var_4 != -48))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (!var_10);
        arr_4 [i_0] = (max(((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : -7691769862486114545))), ((((min(-443134101600313659, var_8))) ? ((var_2 ? (arr_1 [i_0] [i_0]) : -621240406528749720)) : var_4))));
        var_14 = (-443134101600313645 && 26689);
        arr_5 [i_0] = ((((-(max((arr_2 [i_0]), (arr_2 [i_0]))))) == ((((arr_0 [i_0] [i_0]) % (arr_0 [i_0] [i_0]))))));
    }
    #pragma endscop
}
