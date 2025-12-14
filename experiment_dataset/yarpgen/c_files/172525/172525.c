/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (min(0, (max((arr_0 [i_0]), ((max((arr_1 [17] [i_0]), (arr_1 [i_0] [i_0]))))))));
        var_19 = (max(var_19, (arr_1 [i_0] [i_0])));
        var_20 = ((!(arr_3 [i_0] [i_0])));
        var_21 = (min(var_21, ((((((max(var_13, (arr_3 [i_0] [i_0])))) << (var_13 - 3)))))));
        arr_5 [13] [13] = ((var_11 || ((max((max(2584921806, (arr_1 [i_0] [i_0]))), ((max((arr_3 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))))));
    }
    var_22 = ((min((max(var_4, -651888778)), var_13)));
    var_23 = var_0;
    #pragma endscop
}
