/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = -117;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_22 = (min((min(var_9, ((var_13 ^ (-127 - 1))))), (arr_3 [i_0] [i_1 + 1])));
            var_23 = var_6;
            arr_7 [i_0] = 107;
            var_24 = ((((min(((min(var_15, (arr_5 [i_0] [i_1])))), 2698570398))) ? 131 : ((var_12 ? 125 : -1))));
        }
        var_25 = ((((((arr_1 [i_0 - 1]) * 125))) ? (arr_0 [i_0 - 2] [i_0]) : (max(((var_10 ? 131 : var_10)), 130))));
        var_26 *= ((((((0 ? -3385 : (arr_2 [4]))))) ? (min(((((arr_3 [1] [1]) || var_2))), ((124 ? var_8 : 1642432839839389578)))) : 1073741824));
    }
    #pragma endscop
}
