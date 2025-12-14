/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176251
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
    var_17 = ((/* implicit */_Bool) ((var_7) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
    var_18 = ((/* implicit */unsigned short) max((max((var_6), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned char)84)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)84)) + (((/* implicit */int) var_15))))) ? (((((/* implicit */int) var_11)) + (((/* implicit */int) var_2)))) : (max((((/* implicit */int) (unsigned char)172)), (var_0)))))));
    var_19 = var_14;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_7);
                var_20 -= ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
}
