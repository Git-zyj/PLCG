/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((max((var_3 || var_6), 1150239688))) & var_4)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((min((arr_1 [i_0]), (arr_0 [i_0 + 1] [i_0 - 1])))) || (((var_5 & ((-(arr_1 [i_0])))))));
        var_17 *= (((arr_2 [i_0]) % (max((arr_3 [i_0]), ((var_7 ? (arr_1 [i_0]) : -2147483647))))));
        var_18 = (1 | 1);
        var_19 = (max((((-(arr_3 [i_0 + 1])))), (max(-4393094906031728200, ((((arr_1 [i_0]) + (arr_1 [i_0]))))))));
    }
    #pragma endscop
}
