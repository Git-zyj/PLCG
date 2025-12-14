/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100532
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
    var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) min(((signed char)-115), ((signed char)-25)))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (3418831615162629911ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) : (((((/* implicit */_Bool) (signed char)-111)) ? (15027912458546921705ULL) : (((/* implicit */unsigned long long int) ((unsigned int) var_1)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) var_9)) & (3418831615162629911ULL)))));
        var_13 = ((/* implicit */int) ((_Bool) var_4));
    }
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        arr_5 [i_1 - 1] [i_1] = ((/* implicit */signed char) 4288888599866717545ULL);
        arr_6 [i_1] = ((/* implicit */unsigned short) (signed char)122);
        var_14 = ((/* implicit */long long int) var_4);
    }
}
