/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110229
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
    var_19 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_17)))) | (((((/* implicit */_Bool) (short)32767)) ? (24U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))) - (var_16)));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-47)) - ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        arr_4 [i_0] = (((~(((long long int) (signed char)-47)))) | (((/* implicit */long long int) ((((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35703)) ^ (((/* implicit */int) (unsigned short)14281)))))))));
        var_21 &= ((/* implicit */unsigned char) 578695442U);
    }
    var_22 = (~(((/* implicit */int) (signed char)-47)));
    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) < (((/* implicit */int) ((var_11) < (var_11))))));
}
