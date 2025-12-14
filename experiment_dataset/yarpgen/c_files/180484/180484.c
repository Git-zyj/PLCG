/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = var_10;
        arr_4 [i_0] &= (max((arr_2 [8]), (((!var_10) ? (arr_3 [i_0] [i_0]) : (((arr_1 [17] [17]) - (arr_3 [12] [i_0])))))));
        var_15 = (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - 12195845962870746139)))) : (!64915)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 = (9218 >= 229);
        var_17 ^= (((((arr_5 [i_1]) ? var_2 : (arr_5 [i_1]))) - (~var_10)));
        arr_9 [i_1] = (((arr_6 [i_1] [i_1]) < 9218));
    }
    var_18 = ((max((min(62562, var_7), var_1))));
    #pragma endscop
}
