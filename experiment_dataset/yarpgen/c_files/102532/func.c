/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102532
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
    var_12 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [(unsigned char)1]), (arr_0 [(_Bool)1] [i_0])))) ? (((((_Bool) (_Bool)0)) ? ((+(2829419090U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (56138)))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (((2829419090U) % (2829419090U)))))));
                var_13 *= ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [17ULL])) : ((+(((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
}
