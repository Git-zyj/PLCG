/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_12));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [16] [16] &= ((-((~(((arr_0 [6]) ? (arr_1 [12]) : (arr_1 [12])))))));
        var_16 = ((-((((min((arr_2 [i_0]), (arr_2 [4])))) * (((!(arr_0 [i_0]))))))));
    }
    var_17 = (((!var_1) >> (((var_14 >> (var_2 - 3030565599))))));
    #pragma endscop
}
