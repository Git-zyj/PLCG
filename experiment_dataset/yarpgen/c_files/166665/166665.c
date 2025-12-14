/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_16 *= ((!(4666320256086290230 % -var_8)));
        arr_2 [i_0 + 1] = 32767;
        arr_3 [i_0 - 1] [0] = min((max(var_3, var_0)), (arr_1 [i_0 - 1]));
        var_17 = (max((max(-32767, (min((arr_0 [i_0]), (arr_0 [i_0]))))), var_1));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = max(-32767, -32760);
        var_19 *= (max((arr_5 [i_1]), (~var_10)));
        var_20 = var_12;
    }
    var_21 = var_9;
    var_22 -= -2;
    #pragma endscop
}
