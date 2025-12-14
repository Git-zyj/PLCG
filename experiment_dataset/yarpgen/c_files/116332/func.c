/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116332
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) ((long long int) (signed char)-109));
                var_19 = ((/* implicit */_Bool) (~(max(((~(0LL))), ((~(var_5)))))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) - (((/* implicit */int) (unsigned char)237))))), ((-(3601375851628925112ULL))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_2);
    var_22 = min((var_8), (((/* implicit */unsigned int) var_16)));
}
