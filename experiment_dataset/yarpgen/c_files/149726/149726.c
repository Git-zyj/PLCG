/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_1));
    var_13 = ((var_4 * ((min(var_4, 735235904)))));
    var_14 += ((-(var_4 / var_10)));
    var_15 = (min(735235888, (((((min(var_3, 64997)))) ^ var_1))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = 3559731368;
        var_17 = (((((-32751 ? 32750 : (arr_1 [i_0])))) - (((((var_5 | (arr_0 [i_0]))) != var_0)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (((arr_2 [i_1]) / (arr_3 [i_1])));
        var_19 = var_9;
    }
    #pragma endscop
}
