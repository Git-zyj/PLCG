/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187391
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
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32240))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (unsigned short)63977))))) : (var_5))) * (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) >= (((/* implicit */int) var_18))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_1])), (max(((unsigned short)0), ((unsigned short)54635))))))) & (min((arr_2 [i_1]), (((/* implicit */long long int) arr_6 [(short)11]))))));
                var_23 = ((/* implicit */int) arr_3 [i_1]);
            }
        } 
    } 
}
