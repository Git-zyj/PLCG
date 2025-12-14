/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = ((((arr_0 [4]) ? (10979 == var_5) : -1813650560497865937)));
        var_13 = 1830992133;
    }
    var_14 = ((((var_9 ^ (((max(38629, 1)))))) > 65535));
    var_15 = ((!16869) | -4111499034215642093);
    #pragma endscop
}
