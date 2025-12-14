/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103470
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(637805937)))) ? (((/* implicit */int) (((+(9223372036854775807LL))) < (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)32767)), (15U))))))) : (((/* implicit */int) var_8)))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((_Bool) 1974892436))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)178), ((unsigned short)178)))))))) : (((long long int) arr_4 [i_1]))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29193)) ? (((/* implicit */int) (short)25093)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned short)52071)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) != (2223428407U))))))) ? (((unsigned int) max((((/* implicit */int) (unsigned short)35609)), (-932261088)))) : (((/* implicit */unsigned int) max((((int) arr_0 [i_0])), (((/* implicit */int) arr_0 [i_1])))))));
            }
        } 
    } 
}
