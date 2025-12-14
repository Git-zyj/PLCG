/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146526
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) -268435456))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) min((min((((/* implicit */long long int) arr_1 [(unsigned short)11] [i_1])), (max((var_14), (var_14))))), (((/* implicit */long long int) 268435432))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 - 2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4096)) ? (9385617039813033224ULL) : (((/* implicit */unsigned long long int) -268435457))))) ? (((/* implicit */unsigned int) max((268435410), (((/* implicit */int) (unsigned char)160))))) : (var_10))))))));
            }
        } 
    } 
}
