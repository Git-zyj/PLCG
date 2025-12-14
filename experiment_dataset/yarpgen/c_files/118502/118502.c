/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = (min((min(((min((arr_1 [i_0] [i_0]), -8))), (max(var_13, (arr_0 [i_0]))))), (!var_13)));
        arr_2 [i_0] = min(20, ((min((arr_0 [i_0]), 14997852453223495041))));
        var_19 = (min(((~(((1 >= (arr_1 [1] [i_0])))))), ((((((var_13 >= (arr_0 [i_0])))) == (~var_1))))));
        arr_3 [i_0] [i_0] = (((~(arr_0 [i_0]))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = (max(107, (((!(((var_9 ? var_10 : -735888186))))))));
        var_20 = 2999866117;
        var_21 = ((var_2 == (arr_6 [i_1 - 1])));
    }
    var_22 = ((47533 ? 4169854163 : -84));
    var_23 = ((max((max(171, var_15), -var_11))));
    #pragma endscop
}
