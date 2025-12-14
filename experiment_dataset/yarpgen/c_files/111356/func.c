/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111356
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
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) var_1))), (((5139448832041343347ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16)))))));
                arr_6 [i_0 + 1] [i_0] [i_1] = ((/* implicit */_Bool) ((max((((/* implicit */int) min((var_13), ((signed char)-3)))), ((+(((/* implicit */int) arr_0 [i_0])))))) % ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) <= (var_12))))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -4320301443930452853LL)) ? (2507940623U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (13307295241668208269ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (var_7)));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((2145386496U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32545)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))))))), ((+(var_5)))));
    var_18 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (var_5))))));
}
