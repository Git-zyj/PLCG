/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133625
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2894111582U))))), (max((((/* implicit */unsigned short) max((var_9), (((/* implicit */short) (signed char)-52))))), ((unsigned short)5394)))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((3307059326U), (((/* implicit */unsigned int) (short)-20590))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59477)) ? (6172939768969662507ULL) : (var_16)))) ? ((-(6172939768969662507ULL))) : (((/* implicit */unsigned long long int) (+(3995627431U))))))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
}
