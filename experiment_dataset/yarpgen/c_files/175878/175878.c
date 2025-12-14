/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((((max(var_14, var_5))) ? var_9 : var_11))) ? var_10 : 4602678819172646912)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [10] = ((((min(3555403089, 173)) > (((6695 >> (((arr_1 [i_0]) - 22101))))))));
        var_16 = (min(((0 ? 1 : (((arr_1 [i_0]) ? (arr_0 [i_0]) : 2470090457)))), (((-((23 ? var_3 : (arr_1 [i_0]))))))));
        var_17 = (min(var_17, ((3 ? (max(var_7, ((var_0 ? (arr_1 [i_0]) : var_5)))) : (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((-(((32 / -4602678819172646924) ? ((var_12 & (arr_0 [i_0]))) : (((((arr_1 [i_0]) > (arr_0 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (min((arr_1 [i_1]), var_1));
        arr_6 [i_1] = (((((arr_0 [i_1]) / 65534))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_19 *= ((arr_7 [i_2 + 2]) ? (arr_7 [i_2]) : (arr_7 [i_2 - 2]));
        arr_9 [i_2] = (arr_7 [i_2]);
        arr_10 [i_2] [i_2] = (arr_8 [i_2 + 2]);
    }
    var_20 += (1 || 0);
    #pragma endscop
}
