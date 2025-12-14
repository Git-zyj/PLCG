/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160573
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
    var_17 = ((/* implicit */_Bool) ((int) ((unsigned short) max((((/* implicit */unsigned short) var_16)), (var_13)))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) | (((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */int) var_8)))))))) ? (((((/* implicit */int) var_13)) >> (((((/* implicit */int) ((unsigned short) (short)-11531))) - (53983))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))))));
    var_19 = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((_Bool)0)))), (((int) -2102896327)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 &= ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (short)29799)), (402653184U))), (((/* implicit */unsigned int) ((unsigned char) 3892314111U)))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((402653175U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))))) % (((((/* implicit */_Bool) 67108856)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_6))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((short) (signed char)21)))));
}
