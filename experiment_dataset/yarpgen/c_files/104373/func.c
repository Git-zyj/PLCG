/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104373
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), ((-(arr_4 [i_1])))))) ? (((((/* implicit */_Bool) 4462385911913131600LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (6535249438462128341LL))) : (((/* implicit */long long int) (~(arr_4 [i_0])))))))));
                var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                arr_6 [i_0] [(signed char)6] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((unsigned short) var_1))))), ((+(((/* implicit */int) (unsigned short)6144))))));
            }
        } 
    } 
}
