/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = var_16;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] [2] [i_0] = ((!((min((arr_3 [i_0]), (min(-1874662736, var_2)))))));
            var_19 = ((127 || (arr_3 [i_1])));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_20 = var_12;
            arr_7 [i_2] = ((((127 ? (((1 <= (arr_6 [0])))) : (min(var_4, (arr_3 [i_0]))))) ^ (arr_1 [i_0])));
            var_21 *= (((((((arr_5 [i_0] [1]) ? 45819 : var_8)) >= ((min((arr_0 [i_2]), var_6)))))) / (arr_2 [i_2]));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_22 = (min(45799, var_0));
            var_23 = ((((~((((arr_2 [1]) > (arr_3 [i_0])))))) + (((arr_3 [i_3]) / (arr_0 [i_0])))));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_14 [6] = (arr_2 [i_4]);
        var_24 = (-493367625 + 90);
        var_25 = (0 | 31082);
    }
    #pragma endscop
}
