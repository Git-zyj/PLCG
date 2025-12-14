/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168294
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
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned int) (short)-16384);
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (1073740800U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50781)))))) || (((/* implicit */_Bool) ((arr_2 [(short)9]) ? (3221226496U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))), ((+(((/* implicit */int) (unsigned char)2)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_5);
    var_13 = ((/* implicit */short) min((((/* implicit */long long int) min((((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((_Bool) 44606242U)))))), (var_5)));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4250361053U)) ? (min((((1713397052U) % (3221226496U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-18365)) * (((/* implicit */int) (signed char)0))))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4250361053U))) : (((((/* implicit */_Bool) 525531043U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (1713397052U)))))));
}
