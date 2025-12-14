/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121058
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
    var_19 = ((/* implicit */long long int) (signed char)54);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)54073))))) ? (min((((/* implicit */unsigned long long int) var_18)), (9410262869452468020ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [(unsigned short)6]) : (((/* implicit */int) arr_0 [i_1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_1]))) ? (((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) var_17)))) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (var_15)))))))));
                var_20 *= ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1])), (var_17))))));
                arr_5 [i_0] = ((/* implicit */short) ((unsigned int) (signed char)-16));
            }
        } 
    } 
}
