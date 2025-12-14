/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18187
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned short)1451), ((unsigned short)49610))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49610))) / (((((long long int) (_Bool)1)) * (((/* implicit */long long int) ((/* implicit */int) (short)-8192)))))));
    }
    var_16 = ((/* implicit */short) var_13);
    var_17 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)60)) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)7680)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4742107848585327052LL)) ? (((/* implicit */int) (unsigned short)42333)) : (((/* implicit */int) (unsigned short)15918))))))), (((/* implicit */unsigned long long int) ((0LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))));
    var_18 *= ((/* implicit */_Bool) var_9);
}
