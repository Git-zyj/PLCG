/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (!var_1);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_13 -= (((max(-32757, (arr_1 [i_1] [i_0 + 1])))));
            arr_5 [i_0 + 1] = (0 ? var_5 : (((((3 ? (arr_2 [i_0]) : (arr_0 [i_1] [i_0])))) ? ((25 ? var_6 : 1)) : 13)));
        }
        var_14 -= (min(9, (arr_0 [i_0] [i_0])));
        var_15 = ((var_1 <= ((((((arr_1 [i_0] [i_0]) - 3))) ? (arr_2 [i_0 + 1]) : ((-302310070 ? (arr_0 [i_0] [i_0 + 1]) : var_7))))));
        arr_6 [i_0 + 1] = (((((~65517) ? (arr_0 [8] [i_0]) : ((min(var_5, 157294344))))) < 65533));
    }
    var_16 = (min(((var_4 ? (max(-6194840082756750171, 1)) : ((max(var_7, var_3))))), var_7));
    #pragma endscop
}
