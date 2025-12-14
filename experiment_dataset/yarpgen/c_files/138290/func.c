/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138290
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
    var_14 = ((/* implicit */unsigned int) ((short) var_3));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_16 += ((/* implicit */short) var_3);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((short) var_4));
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_11)))))) : (var_9))));
    var_19 ^= ((/* implicit */unsigned int) var_11);
}
