/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141513
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (arr_2 [i_2 - 2] [i_1] [i_0])));
                    var_20 = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) ((((_Bool) var_17)) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))))));
}
