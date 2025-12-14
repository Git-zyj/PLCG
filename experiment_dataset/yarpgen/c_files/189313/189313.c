/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (1 == var_11);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        var_18 = ((((((arr_2 [6] [i_0]) ? 0 : 0)) << (((arr_1 [i_0]) - 3430)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = ((((7 ? (arr_1 [i_1]) : (((arr_4 [i_1]) ? var_11 : 272730423296)))) > (((((809383540 ? (arr_1 [i_1]) : 0))) ? 18446744073709551615 : ((var_15 ? var_9 : (arr_6 [i_1])))))));
        arr_7 [i_1] = -809383541;
        var_20 = var_3;
        var_21 = 5109;
        var_22 = 574423458;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_23 = (max(var_23, (arr_13 [i_2] [i_3] [i_3])));
            var_24 = ((~((max((arr_5 [i_2 + 1] [i_2 + 1]), (arr_5 [i_2 + 1] [i_2 + 1]))))));
        }
        var_25 -= (1 == var_1);
    }
    var_26 = -1;
    #pragma endscop
}
