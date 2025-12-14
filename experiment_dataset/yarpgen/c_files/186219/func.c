/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186219
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
    var_17 = ((/* implicit */unsigned long long int) 0U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((16323439115157986943ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (2123304958551564672ULL)));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_8))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */int) var_11)), ((+(((/* implicit */int) (!((_Bool)1)))))))))));
                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_9)), ((-(max((((/* implicit */unsigned long long int) (unsigned short)45442)), (var_7)))))));
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_10)))))))));
            }
        } 
    } 
}
