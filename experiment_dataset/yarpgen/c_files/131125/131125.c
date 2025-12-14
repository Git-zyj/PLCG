/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -481153404;
    var_20 = ((var_13 ? var_11 : (((481153401 ? var_4 : var_15)))));
    var_21 = (max(var_21, ((min(((max(var_6, var_11))), var_10)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min(((var_12 || (arr_1 [i_0] [i_0]))), ((!(arr_1 [i_0] [i_0])))));
        var_22 = (arr_1 [i_0] [i_0]);
        var_23 = (+(max((13465146657156703929 <= 1), var_11)));
    }
    #pragma endscop
}
