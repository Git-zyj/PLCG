/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146882
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 -= ((/* implicit */short) ((unsigned long long int) arr_0 [(_Bool)1]));
        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)3))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) (short)3)), ((+(((/* implicit */int) (short)-4))))));
        var_21 = (+(((/* implicit */int) (short)-3)));
        var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_1])) : (arr_0 [i_1])))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (signed char)-119)))), (((((int) var_8)) ^ (((/* implicit */int) ((_Bool) 8954881529924890688LL)))))));
    }
    var_23 = ((/* implicit */unsigned char) ((((_Bool) var_9)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (unsigned short)65535)))) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)32760))))))));
}
