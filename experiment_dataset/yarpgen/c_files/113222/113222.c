/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 += ((1 ? 2147483647 : -1219403268));
        var_12 = ((1 ? 0 : 9223372036854775807));
        var_13 = (18446744073709551615 == 0);
        arr_3 [i_0] [i_0] = ((var_3 ^ (arr_0 [i_0])));
    }
    var_14 = min(((var_8 || (var_0 - 1219403267))), var_4);
    var_15 = (min(((((var_5 || 8995498955571988463) ? ((max(var_7, var_7))) : (max(200, var_1))))), var_2));
    #pragma endscop
}
