/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (var_8 <= var_9)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        var_19 ^= 29;
        arr_2 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = ((8700 >> (((arr_3 [i_1]) - 38829))));
        var_21 = (max(var_21, -848847878280886218));
        var_22 = (((((arr_4 [i_1] [i_1]) - (arr_4 [i_1] [i_1]))) % var_7));
        arr_6 [i_1] [i_1] = var_9;
    }
    #pragma endscop
}
