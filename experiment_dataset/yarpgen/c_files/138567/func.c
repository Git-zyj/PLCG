/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138567
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
    var_11 = ((/* implicit */long long int) var_2);
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (2018034110U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4)))))) ? (((/* implicit */unsigned long long int) 8184U)) : (((3934521606121530086ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21886))))))))));
    var_13 &= ((/* implicit */unsigned int) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (var_0)));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_3 [12U])))))));
        var_17 *= ((/* implicit */unsigned char) ((((((arr_0 [i_1 - 1] [9ULL]) & (18446744073709551602ULL))) | (((/* implicit */unsigned long long int) ((-4262993325362106653LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-38)))))))) ^ (arr_1 [i_1])));
    }
    var_18 &= max((max((((/* implicit */unsigned long long int) ((unsigned int) var_1))), (min((((/* implicit */unsigned long long int) (unsigned short)5063)), (3899244353246841196ULL))))), (((/* implicit */unsigned long long int) var_4)));
}
