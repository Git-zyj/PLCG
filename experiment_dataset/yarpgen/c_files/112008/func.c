/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112008
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
    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((long long int) -13))))) / (var_17)));
    var_19 = max((((/* implicit */unsigned char) (signed char)0)), (var_13));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) >= (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0] [(unsigned char)1])), (arr_1 [2LL])))) ? (((((/* implicit */int) (signed char)0)) >> (((((/* implicit */int) (unsigned short)47943)) - (47928))))) : (((/* implicit */int) ((unsigned short) var_12)))))));
        var_21 = (_Bool)0;
    }
}
