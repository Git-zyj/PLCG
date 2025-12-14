/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106974
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) arr_3 [i_0 - 1] [i_0 - 1]))), ((+(((/* implicit */int) (unsigned short)35944))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) (!(((arr_1 [i_0] [i_0 - 1]) < (((/* implicit */unsigned long long int) (((_Bool)1) ? (0) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)17)), (178343399U)))) : (min((-5974575177614254036LL), (((/* implicit */long long int) ((_Bool) var_7)))))));
}
