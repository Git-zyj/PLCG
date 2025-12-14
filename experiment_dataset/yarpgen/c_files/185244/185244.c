/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 3479533959;
        var_19 = ((~(((arr_1 [i_0]) ? 815433334 : 815433334))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_20 = ((((!var_11) ? ((var_11 << (3479533961 - 3479533957))) : ((((arr_3 [i_1] [i_1 - 1]) + (arr_5 [i_1] [i_1])))))) == ((max((var_6 + 227), (69 | var_5)))));
        var_21 = (((((var_3 << (arr_5 [i_1] [i_1 - 1])))) ? ((min(60445, (arr_5 [i_1] [i_1 - 1])))) : (!0)));
        arr_6 [i_1] [i_1 - 1] = (max(var_17, ((var_11 ? -18928 : var_16))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_22 *= var_13;
        arr_11 [i_2] = ((+(((~204) ? (~var_1) : (max(var_14, (arr_10 [i_2] [i_2])))))));
    }
    var_23 = (((1 ^ (max(var_3, 47896)))));
    #pragma endscop
}
