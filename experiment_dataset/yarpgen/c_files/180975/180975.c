/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = (max((max(((min(var_0, (arr_3 [i_0])))), (max(-855, 18446744073709551615)))), ((min((min((arr_1 [i_0 - 1] [i_0]), var_10)), (min((arr_3 [i_0]), -862406273)))))));
        var_13 = min((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))), (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))));
    }
    var_14 = var_3;
    var_15 = (min(var_2, var_4));
    #pragma endscop
}
