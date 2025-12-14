/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_0, (!4294967295)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0 + 2]);
        var_16 = var_0;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 = ((!(min((arr_0 [i_1 + 1]), (arr_0 [i_1 + 2])))));
        arr_6 [i_1] = (var_6 ? (arr_4 [1] [i_1]) : (arr_0 [i_1]));
    }
    var_18 = (((var_2 < var_14) ? -var_11 : (((min(2090992241209525622, var_10)) + (((1915528886 ? 94621689 : var_6)))))));
    var_19 = (max((max((((var_1 ? 4200345606 : 1))), var_5)), ((((((1847927693 ? var_14 : 0))) ? (1 || 1) : ((1 ? var_14 : var_8)))))));
    #pragma endscop
}
