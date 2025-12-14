/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(5009366456639254505, (~18446744073709551592))) != -var_10));
    var_16 = (63 & 29);

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_1;
        arr_3 [i_0] = ((((41 ? (arr_0 [i_0 - 2] [i_0 + 2]) : 11)) * -30));
        var_17 = ((((max((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0 - 1] [i_0 + 2])))) == (((((min(var_1, (arr_0 [i_0 + 1] [i_0])))) != var_11)))));
        arr_4 [i_0] [i_0] = (max(((112 ? (-9223372036854775807 - 1) : 0)), (!3852317893)));
        var_18 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((((var_2 ? 38222 : 2787851137811062600))) ? 59 : (arr_7 [i_1]))))));
        arr_8 [i_1] = ((!(38247 == 128)));
    }
    #pragma endscop
}
