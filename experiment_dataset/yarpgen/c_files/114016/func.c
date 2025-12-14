/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114016
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
    var_16 = (+((~(((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */int) (unsigned char)47)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [(short)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1] [i_0 - 1])) - (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */unsigned long long int) arr_3 [1] [i_0 - 1])) - (var_4)))));
                arr_6 [i_1] = ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
}
