/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (((!var_6) ? ((((var_1 > (arr_1 [i_0]))))) : (min((arr_1 [i_0]), 65535))));
        var_13 = ((65535 ? (((max(65530, 65514)))) : ((~(28 > 65521)))));
        arr_3 [i_0] [i_0] = ((!((((!0) % -18)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = ((~((((241 / (arr_5 [i_1]))) % (((arr_5 [i_1]) & var_11))))));
        var_14 = (max(var_14, ((((min(var_10, (arr_4 [i_1]))) < ((((arr_4 [i_1]) >> (((arr_4 [i_1]) - 1213706145))))))))));
    }
    var_15 |= var_10;
    #pragma endscop
}
