/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (max(var_15, ((((((((max(var_4, var_11))) ? (((min(var_12, var_4)))) : (min(var_6, var_10))))) ? ((max(((var_3 ? var_1 : var_11)), ((var_4 ? var_2 : var_11))))) : (min((min(var_0, var_11)), (((var_4 ? var_10 : var_8))))))))));
    var_16 = (min((max((max(var_10, var_5)), var_3)), ((((((var_13 ? var_11 : var_5))) ? var_2 : (max(var_3, var_12)))))));
    var_17 = (max(var_5, ((max(var_11, ((min(var_4, var_9))))))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_18 = (max(var_18, var_13));
        arr_3 [i_0] = (max((max((arr_0 [i_0]), (min(16001, 7596762321280035137)))), ((max((min((arr_2 [i_0 + 2]), (arr_0 [i_0 + 2]))), (max(var_2, (arr_0 [i_0]))))))));
        var_19 = (min(55, (max(((min((arr_1 [i_0 + 2]), -80))), (min(-71, var_11))))));
    }
    #pragma endscop
}
