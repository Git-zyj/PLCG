/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161196
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */int) var_12);
                    var_17 |= ((/* implicit */short) arr_5 [9ULL] [9ULL]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) max(((short)-16820), ((short)-16820)))), (((((/* implicit */long long int) var_7)) / (var_9)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)55869)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16820))) - (10416262369644690626ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_1))))))))));
}
