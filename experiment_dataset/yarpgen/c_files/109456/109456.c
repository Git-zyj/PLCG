/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_18 = (max(((((min(var_4, var_14)) < ((((!(arr_3 [i_0])))))))), (min(var_1, (max(var_16, 4064))))));
            var_19 = (arr_1 [14]);
        }
        var_20 = ((!(((arr_0 [i_0]) < 1784873557806550000))));
    }
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        arr_7 [i_2] |= ((((max(((max((arr_6 [i_2]), var_14))), -var_15))) ? var_0 : (max(103, ((0 ? var_11 : (arr_6 [i_2 + 4])))))));
        var_21 = ((((((((arr_6 [i_2]) ? (arr_0 [3]) : 5698))))) & ((~(max(var_10, var_15))))));
        arr_8 [i_2] = ((~(!var_9)));
        var_22 = 1;
    }
    var_23 = (max(((min((var_15 > var_4), ((var_14 ? 5698 : var_13))))), ((var_3 ? (max(var_4, var_3)) : ((max(65024, var_16)))))));
    var_24 = var_10;
    var_25 &= (max(var_14, ((var_6 ? ((min(4064, var_0))) : (!4096)))));
    var_26 = ((((var_12 ? var_15 : 1)) << (((min(5181, ((min(var_9, 65535))))) - 73))));
    #pragma endscop
}
