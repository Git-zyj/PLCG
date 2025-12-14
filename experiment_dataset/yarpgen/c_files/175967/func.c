/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175967
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [(short)8] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)45600)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024))) : (2049386931U)));
                var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-23488)) : ((((_Bool)1) ? (((/* implicit */int) (short)-30432)) : (((/* implicit */int) (unsigned short)48287))))))) && (((/* implicit */_Bool) ((2245580365U) + (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)41173), ((unsigned short)65535))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_11);
    var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) var_5)))))) / (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)59824)))), (var_3))));
}
