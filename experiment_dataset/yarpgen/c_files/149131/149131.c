/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= -1883579984;
    var_11 ^= (min(((min(((var_7 ? var_9 : var_0)), 1642117408))), ((-((371383550 ? 371383574 : 65535))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : 7)), (arr_0 [i_0])));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    var_12 &= (-((min(32787563, var_2))));
    #pragma endscop
}
