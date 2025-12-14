/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((((115 ? 63163 : 4090089010))) ? ((max(var_2, var_2))) : var_1);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        var_12 *= ((-(arr_1 [i_0] [2])));
        var_13 = ((+(((arr_1 [i_0] [i_0]) ? var_1 : (arr_1 [i_0] [15])))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_14 = ((var_1 ? (max(-4, 6342225660186365954)) : ((1 ? -1731796916803997780 : (((max(1, -12513))))))));
        var_15 -= var_2;
        arr_7 [i_1] = (max((min((max(var_9, var_3)), var_6)), (arr_0 [0] [i_1])));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (arr_1 [i_2 - 1] [i_2 + 1])));
        arr_10 [i_2] [i_2] = ((((max(((var_7 ? (arr_0 [i_2] [i_2]) : (arr_5 [i_2]))), ((min(var_9, (arr_1 [i_2] [i_2]))))))) ? ((var_0 ? (arr_4 [i_2 - 1]) : var_5)) : ((min((min(1, 202)), (min((arr_4 [i_2 + 1]), (arr_1 [1] [i_2 - 1]))))))));
    }
    #pragma endscop
}
