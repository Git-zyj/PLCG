/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((min(var_10, 18))) ? ((18 ? 20 : -331613815)) : var_1)), var_1));
    var_12 = var_5;
    var_13 = (max(var_5, var_2));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((min(-619703333, (max(9223372036854775807, -1297124287))))) ? (((((-127 - 1) && 331613815)))) : 9223372036854775807);
        var_14 = (max(var_14, ((min((((((~(arr_1 [i_0] [i_0])))) ? ((-76 ? (arr_1 [i_0] [i_0]) : var_0)) : 331613824)), (((((min(var_2, (-127 - 1)))) % (arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((((min(var_3, (arr_1 [i_0] [i_0]))))) ? (min(var_5, (min(1, (arr_0 [1] [i_0]))))) : ((max((arr_1 [i_0] [i_0]), 22))));
    }
    #pragma endscop
}
