/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173293
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 9223372036854775807LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_8))))))) : (var_9)));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((unsigned char) var_8)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))))));
                var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) max((arr_1 [2U] [i_1]), (var_0)))))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))), (max((9223372036854775807LL), (((/* implicit */long long int) (short)7909)))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
            }
        } 
    } 
    var_13 &= ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? ((+(-2521763007459937419LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)4655))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) (_Bool)1))))) ? (max((((/* implicit */int) (unsigned char)243)), (126645281))) : (((/* implicit */int) (short)-9961))))));
    var_14 = ((/* implicit */_Bool) ((int) (~(((((/* implicit */int) var_0)) >> (((var_6) - (1178853914U))))))));
}
