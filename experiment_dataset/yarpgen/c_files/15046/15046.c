/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2959974304354021432;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = var_8;
        var_13 = (max(var_13, ((min(((((-115 <= (arr_0 [i_0]))))), (min((arr_1 [2]), (max(2959974304354021432, 92)))))))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_14 *= ((((-((-(arr_2 [1]))))) + (((min(109, var_8))))));
        var_15 = (arr_5 [i_1 + 3]);
    }
    var_16 = (var_8 + (min((115 + var_1), var_5)));
    #pragma endscop
}
