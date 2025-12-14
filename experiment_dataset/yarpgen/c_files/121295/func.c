/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121295
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
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ ((((~(4989389277439436716ULL))) | (((/* implicit */unsigned long long int) var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (4989389277439436716ULL))))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned short) ((((/* implicit */_Bool) var_8)) || (arr_5 [i_0] [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)63))));
}
