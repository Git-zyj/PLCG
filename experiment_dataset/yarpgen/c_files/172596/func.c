/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172596
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
    var_20 &= ((/* implicit */_Bool) -8412951354312886256LL);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned char) min((1634525339), (((/* implicit */int) (signed char)-53))));
        var_22 *= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) * (2047LL)))) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (4294967268U))));
        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) ((short) arr_1 [i_0] [i_0]))))))) ^ (((arr_0 [i_0 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
    }
    var_24 |= ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_2)) : (((var_10) % (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
}
