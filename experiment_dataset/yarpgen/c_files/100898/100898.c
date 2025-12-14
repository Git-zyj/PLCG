/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 11049671219090375183;
    var_15 = ((7397072854619176430 ? var_1 : var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [1] [1] |= (((arr_0 [i_0] [0]) != (arr_1 [i_0] [i_0])));
        var_16 = (max(var_16, (((var_7 / (arr_0 [i_0] [i_0]))))));
        var_17 = ((var_6 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = 0;
    }
    #pragma endscop
}
