/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138728
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) (-((+(16592396931130951947ULL)))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (1854347142578599654ULL)))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) : (1854347142578599668ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_4 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                var_16 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) arr_4 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) 16592396931130951947ULL)) ? (17792853093931767123ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
}
