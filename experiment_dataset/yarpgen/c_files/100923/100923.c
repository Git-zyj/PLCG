/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 *= 8341556609554608443;
        var_19 = 2038621023;
    }
    var_20 = ((var_11 <= ((max((!-708222142), var_11)))));
    var_21 = (((~var_2) ? 1 : ((((1 ? 3585297643 : var_11)) % (var_9 * var_4)))));
    var_22 = ((((max(-2147483644, 9223372036854775807))) ? -2147483644 : var_7));
    #pragma endscop
}
