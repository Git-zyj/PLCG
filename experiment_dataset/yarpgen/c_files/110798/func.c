/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110798
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((_Bool) (~(((/* implicit */int) arr_3 [i_1] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0])))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (2712154525U) : (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), ((unsigned short)52386)));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (var_12)))) || (((/* implicit */_Bool) ((unsigned char) var_9))))))));
}
