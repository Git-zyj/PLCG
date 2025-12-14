/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145112
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) min((((/* implicit */short) arr_4 [i_0])), ((short)28031))))) ? (((unsigned long long int) ((var_3) / (((/* implicit */unsigned int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) >> (((((/* implicit */int) arr_2 [i_2])) - (62)))))))))));
                    var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(arr_0 [i_0])))) & (8LL)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(12403506966212164165ULL))) >> (((((/* implicit */int) var_10)) - (48389)))))) ? (((((/* implicit */unsigned long long int) -1409350579)) & (((var_7) & (var_11))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) >> (((616748171) - (616748170))))))));
}
