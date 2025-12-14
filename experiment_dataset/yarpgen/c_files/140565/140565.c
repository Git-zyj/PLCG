/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_15 = -9;
        arr_2 [i_0 - 1] = (min((min(var_3, 0)), -1987877969));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = (min(var_16, (var_12 % var_11)));
        var_17 = ((((min(7518392470081222765, var_12) ^ var_2))));
        var_18 = (!23);
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_19 = (((var_10 * (min(var_4, var_11)))));
        var_20 = (!65535);
        var_21 = min((min(216, 6832)), (((min(65, var_4)))));
    }
    var_22 = (((min(-var_5, ((min(var_10, 65011712))))) != var_14));
    #pragma endscop
}
