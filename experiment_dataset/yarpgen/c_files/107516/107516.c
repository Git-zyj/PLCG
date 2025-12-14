/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = ((~(~14558275188798389046)));
        arr_2 [i_0] = ((((~(arr_0 [i_0] [i_0]))) != var_9));
        var_18 = (min(var_18, (((((min((~18446744073709551606), (~202)))) ? ((+(((var_11 + 9223372036854775807) << (((var_8 + 79) - 5)))))) : (((-(7864320 == 1409994069)))))))));
    }
    var_19 = 1409994080;
    var_20 = ((3270715534 ? ((((min(var_15, var_10))) ? var_16 : (194 ^ var_7))) : (!var_3)));
    #pragma endscop
}
