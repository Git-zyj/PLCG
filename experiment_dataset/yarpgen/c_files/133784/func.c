/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133784
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 *= var_0;
    var_12 |= (~((~(((((/* implicit */_Bool) (signed char)0)) ? (3054366148528411300LL) : (-3054366148528411325LL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        arr_4 [i_0] &= ((/* implicit */unsigned char) ((14724536923158859068ULL) > (arr_0 [i_0])));
        var_13 = ((/* implicit */signed char) (~(arr_0 [i_0])));
        var_14 += ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)104)) || (((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-20)) + (2147483647))) << (((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1]))))) : ((+(7477769470986077690ULL))))) - (18446744073709551580ULL)))));
        arr_8 [(signed char)7] = var_3;
    }
}
