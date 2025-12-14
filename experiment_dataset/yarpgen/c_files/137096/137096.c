/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_14));
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (max(var_20, (((var_4 ? (!-68) : (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = (((8295634122574617514 | var_7) ^ (((((((-(arr_0 [i_0])))) || ((max((arr_1 [i_0]), (arr_1 [3]))))))))));
        var_21 = (((((!(arr_1 [i_0])))) || ((!(arr_1 [i_0])))));
        var_22 = 1;
    }
    var_23 = var_15;
    #pragma endscop
}
