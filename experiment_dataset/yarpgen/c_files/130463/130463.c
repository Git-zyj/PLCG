/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (~var_11);
    var_20 = var_10;
    var_21 = (min(var_21, ((max((((!(var_14 != var_18)))), 7637)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (min(var_22, ((((max(((~(arr_0 [10]))), (((var_11 ? var_18 : 1))))) | (((~15934506176140117015) ? ((((-2147483647 - 1) / 1))) : 6931089990453895480)))))));
        var_23 = ((!(((~((~(arr_1 [i_0]))))))));
        var_24 = (!-7403546426076874956);
        var_25 = ((~(((arr_1 [i_0]) / ((max(122, 7637)))))));
    }
    #pragma endscop
}
