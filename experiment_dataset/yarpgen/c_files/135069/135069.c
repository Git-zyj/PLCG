/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_3));
    var_18 = (max(var_18, 138));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 *= (!var_1);
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) + ((((arr_1 [1]) ? 0 : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = (((((((max(var_15, var_4))) ? var_14 : 1))) ? (max((var_2 & var_11), 1)) : -var_8));
        arr_4 [0] [i_0] = 4503599627370464;
        var_20 = (arr_0 [i_0] [i_0]);
    }
    var_21 = ((!((min(var_3, ((var_7 ? var_15 : var_11)))))));
    #pragma endscop
}
