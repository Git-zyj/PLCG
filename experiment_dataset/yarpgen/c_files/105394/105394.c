/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = (((min(var_7, ((8324 ? var_7 : 17425)))) + (min((max(32768, var_12)), var_5))));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        var_21 = (max(var_21, (arr_1 [8] [i_0 - 2])));
        arr_3 [i_0 - 1] [i_0] = (((((32781 ? 32768 : 61787))) ? (((arr_1 [i_0] [i_0]) / (arr_1 [18] [8]))) : (((min(var_2, (min(32777, var_17))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_22 = (max(var_22, 1));
        var_23 = 18446744073709551606;
        var_24 += ((-9223372036854775805 - (arr_6 [i_1 + 3])));
        arr_7 [i_1] = var_2;
    }
    #pragma endscop
}
