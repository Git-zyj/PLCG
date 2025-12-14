/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max((((!var_3) ? var_7 : var_6)), ((22 ? var_9 : 2997513637)))))));
    var_11 = (12320 >= 288230376151711743);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((((min((arr_0 [i_0]), var_1))) ? -3419768859548339736 : (((((arr_0 [i_0]) || (arr_0 [i_0])))))));
        var_13 = -8;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, 23));
        var_15 = (max((arr_4 [i_1]), var_4));
        var_16 = (-127 - 1);
        var_17 = var_7;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_18 = (-(((!((((arr_3 [6]) << 1)))))));
        var_19 -= (((((45 == -97) | -984969804)) >= ((((var_4 <= (arr_3 [4])))))));
        var_20 -= (max((arr_5 [i_2]), (((4087154828961559867 ? ((var_5 ? var_9 : 68)) : (arr_3 [2]))))));
    }
    #pragma endscop
}
