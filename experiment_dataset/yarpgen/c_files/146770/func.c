/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146770
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [(unsigned short)13] |= ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0]));
        arr_4 [0ULL] = var_3;
        arr_5 [1ULL] [10ULL] = ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]));
        var_20 = ((/* implicit */long long int) ((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) var_15))));
    }
    var_21 = ((/* implicit */_Bool) var_17);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned long long int) (unsigned char)18)), (var_5))))) : (((((/* implicit */_Bool) var_13)) ? ((~(var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    var_23 *= ((/* implicit */unsigned char) var_5);
    var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 1631659675)) ? (var_12) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_2))))))))));
}
