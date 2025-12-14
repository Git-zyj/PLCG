/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11339
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
    var_20 = ((/* implicit */unsigned long long int) 3444895751U);
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > ((+(((10166809818116164264ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned long long int) 3829429277U)), (((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [1U]))) : (var_19)));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))) ? (((/* implicit */int) min((arr_5 [i_1 + 3]), (arr_5 [i_1 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1])))))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_4 [i_0 - 2] [i_1 + 2]))));
            }
        } 
    } 
}
