/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = min((((-(arr_1 [i_0] [i_0])))), ((-(arr_0 [i_0]))));
        var_16 = ((+(((arr_1 [i_0] [i_0]) ? -14423 : 1))));
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = ((((var_4 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))) != (((19328 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_19 = (((((max((arr_1 [i_0] [i_0]), (!-14423))))) <= (max((max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), var_11))));
    }
    var_20 = var_5;
    #pragma endscop
}
