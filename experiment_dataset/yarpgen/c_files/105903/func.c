/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105903
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1))))), ((+(((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) 1130804904U)) > (-269724075318341090LL))) ? (885308549U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32764)))))) ? (((((/* implicit */_Bool) -269724075318341079LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) : ((+(269724075318341076LL))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-6348)))) + (1847701949U))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26692)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)32704))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (+(7962044087227450290ULL))));
            }
        } 
    } 
    var_17 -= ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((269724075318341078LL) & (((/* implicit */long long int) var_0))))));
}
