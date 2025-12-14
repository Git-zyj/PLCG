/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132431
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned long long int) (_Bool)0)), (4649061102184416617ULL))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) var_9))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (short)-7133)) ^ (((/* implicit */int) var_4))))), (min((var_12), (((/* implicit */long long int) 2759021418U)))))) : (((/* implicit */long long int) ((0U) << (((((((/* implicit */_Bool) (signed char)-42)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31170))))) - (7052659663110944659ULL))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (_Bool)0);
}
