/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131959
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(15702588059761701351ULL)))) ? (4095LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [(_Bool)1]))))))) / (((/* implicit */long long int) 2041447557))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24205))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) (unsigned char)187)) ? (4095LL) : (((/* implicit */long long int) 511))))));
}
