/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = (((((((max(1, 2018034110))) ? var_2 : ((2147483644 ? var_0 : var_4))))) ? 8184 : ((3934521606121530086 ^ (!21886)))));
    var_13 &= var_0;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, var_0));
        var_15 = (min(var_15, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_16 ^= ((+((((arr_2 [i_1 + 1] [i_1 + 1]) || (arr_3 [12]))))));
        var_17 *= (((((((arr_0 [i_1 - 1] [9]) & 18446744073709551602)) | (-4262993325362106653 | -38))) ^ (arr_1 [i_1])));
    }
    var_18 &= max((max(var_1, (min(5063, 3899244353246841196)))), var_4);
    #pragma endscop
}
