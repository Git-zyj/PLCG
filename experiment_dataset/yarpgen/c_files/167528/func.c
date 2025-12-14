/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167528
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1 - 1]))))), ((~(min((((/* implicit */long long int) var_8)), (arr_5 [i_0] [(short)7] [(short)7])))))));
                var_15 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) var_2)), ((short)8191))))))) : (min((((((/* implicit */unsigned long long int) arr_5 [10U] [10U] [i_1 - 1])) | (var_9))), (arr_3 [i_1 - 1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min(((short)-8202), ((short)8190))))));
}
