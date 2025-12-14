/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (((arr_3 [0] [1]) ? 1 : ((((((arr_1 [i_0]) >= (arr_1 [13]))) ? (arr_1 [i_0]) : (var_11 ^ 1584843027))))));
        var_19 = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [7] = (-6541051061721267489 && -100);
            arr_12 [0] [0] [i_2] = ((((((((162 ? -100 : 6541051061721267488))) ? var_7 : 65535))) | (((arr_2 [11] [i_2]) ? (arr_3 [i_1] [i_2]) : (arr_8 [i_1] [i_1])))));
        }
        var_20 = (min((((!(arr_2 [i_1] [i_1])))), ((~(arr_8 [8] [i_1])))));
    }
    var_21 = var_17;
    #pragma endscop
}
