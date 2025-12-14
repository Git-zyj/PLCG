/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 ? ((max(27533, 181))) : var_8))) ? var_11 : 1315669290));
    var_16 = 1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 *= ((-(var_4 > 1)));
        var_18 = (max(var_18, (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_19 ^= 5602190667632650047;
            arr_6 [i_1] [i_0] = (((arr_1 [i_0] [i_1]) ? var_6 : (arr_5 [i_1])));
            arr_7 [i_0] [i_0] [i_1] = (min(((((arr_5 [i_0]) + var_4))), ((var_1 ? (((var_13 ? 92 : 2979298006))) : (-9223372036854775807 - 1)))));
            arr_8 [i_0] [i_0] [i_1] = var_3;
            arr_9 [i_0] [i_0] [i_1] = (arr_4 [i_0]);
        }
    }
    #pragma endscop
}
