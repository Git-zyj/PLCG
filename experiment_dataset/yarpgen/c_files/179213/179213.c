/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [6] [i_0] = ((~(((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))));
        var_18 = (((((12285598763148276555 - (arr_1 [17])))) ? (arr_0 [4]) : ((((((arr_2 [1] [2]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0])))) ? (arr_1 [i_0]) : 7154628302051248765))));
    }
    var_19 = ((var_10 ? 6083840052705341062 : 505826122));
    var_20 = var_7;
    var_21 = (min(var_3, (-16931 * 4294967295)));
    #pragma endscop
}
