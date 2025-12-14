/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (((((-((max(var_1, var_4)))))) ? (max((arr_0 [3]), (min(8576517444088006776, 7745)))) : (((-(arr_0 [i_0]))))));
        var_20 ^= (max(((-((min((arr_0 [i_0]), var_5))))), ((var_2 >> ((((1773683944 ? 9870226629621544837 : 5990700406197920614)) - 9870226629621544834))))));
    }
    var_21 = var_15;
    var_22 = -90;
    #pragma endscop
}
