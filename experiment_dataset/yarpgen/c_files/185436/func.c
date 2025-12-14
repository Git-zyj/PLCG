/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185436
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_11))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (~(14)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned char)244))))) : (var_1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)19)) ? (13748893930008569441ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)252)))));
                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~((~(((/* implicit */int) arr_1 [i_0])))))) : (((((arr_2 [i_0] [i_0]) || ((_Bool)1))) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : ((+(((/* implicit */int) arr_2 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((var_5) ? (var_4) : ((~(var_4))))))))));
}
