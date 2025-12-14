/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164754
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
    var_10 = ((/* implicit */signed char) ((max((var_0), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)28440))))))) >= (((/* implicit */unsigned int) ((((((/* implicit */int) ((short) 2715068295U))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 2715068287U)) || (((/* implicit */_Bool) 1579899000U))))) - (1))))))));
    var_11 += (-(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (var_3))) : (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 696057909)) & (1579899001U)))) ? ((~(arr_0 [i_0 - 2] [i_0 + 1]))) : (var_5)));
        var_12 = ((/* implicit */unsigned long long int) var_8);
    }
}
