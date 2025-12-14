/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187025
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0))))) * (((/* implicit */int) var_7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) (-(3926182746U)));
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1])) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2814))) >= (2827671103U))))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                arr_4 [i_0] [6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-359808413) - ((+(((/* implicit */int) (unsigned char)239))))))) ? ((-(((/* implicit */int) arr_0 [i_1 + 1] [i_1])))) : ((~(((/* implicit */int) (signed char)78))))));
            }
        } 
    } 
}
