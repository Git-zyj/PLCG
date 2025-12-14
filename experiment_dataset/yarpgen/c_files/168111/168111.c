/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_11 = (arr_3 [i_0 - 1]);
        arr_4 [i_0] = (max(1032192, (min(((max(-1, 4294967295))), ((-(arr_3 [i_0 - 2])))))));
        arr_5 [i_0] = ((((max(var_7, (arr_3 [10])))) ? 117440512 : 32767));
    }
    var_12 ^= min(((66584576 ? 11 : (((-2147483647 - 1) + 18446744073709551610)))), ((((var_9 < 9223372036854775780) < ((var_8 ? 9 : var_5))))));
    #pragma endscop
}
