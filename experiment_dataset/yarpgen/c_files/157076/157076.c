/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [6] = ((((2733520090 != (((min(-8430, 60505)))))) ? ((((var_12 >= (83 % -83))))) : (max((((arr_0 [10] [9]) ? 95 : var_9)), var_9))));
        var_14 ^= (min(32767, ((((arr_0 [i_0] [0]) && (arr_0 [i_0] [6]))))));
        var_15 = max(-79, (((arr_1 [i_0]) & (arr_1 [i_0]))));
    }
    var_16 ^= (((var_4 / var_2) < (((var_0 + 2147483647) << (((((min(64, var_2)) + 120900732)) - 15))))));
    #pragma endscop
}
