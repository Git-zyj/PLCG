/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143957
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
    var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_12)))))) >= (var_0))))) != ((((~(var_6))) % (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
    var_20 = ((/* implicit */short) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [(_Bool)1] [i_0] [i_0] = ((/* implicit */short) min((((unsigned int) arr_4 [i_0] [i_1 - 2])), (((/* implicit */unsigned int) (-(var_14))))));
                var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((+(((/* implicit */int) arr_4 [6ULL] [i_1]))))))) ? ((((!(var_1))) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)16]))))))) : ((+(((/* implicit */int) min((var_9), (var_12))))))));
            }
        } 
    } 
}
