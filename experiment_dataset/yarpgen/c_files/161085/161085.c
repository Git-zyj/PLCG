/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((!(((~((min(5439, 1)))))))))));
    var_15 = (min(((-(~1023))), (((-((max(var_11, 0))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (max((arr_1 [i_0]), ((min((!4294967288), (max(var_3, (arr_0 [12] [i_0]))))))));
        var_17 &= (max((min((min((arr_1 [i_0]), 2776220836174691165)), (arr_0 [i_0] [i_0]))), (((-(arr_1 [i_0]))))));
        var_18 = (max(var_18, ((min((((!((max(var_6, var_11)))))), (!var_7))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_19 = var_7;
        arr_6 [i_1] [i_1] = (~var_10);
        arr_7 [i_1] = -var_7;
        var_20 = (!7);
    }
    var_21 = (max(var_21, ((min((~var_1), (!var_0))))));
    #pragma endscop
}
