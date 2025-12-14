/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161886
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_7))));
                var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)12))))), (((unsigned long long int) (signed char)-13))))) ? (((/* implicit */int) (unsigned short)15299)) : (-1615487436)));
            }
        } 
    } 
    var_14 |= ((/* implicit */signed char) ((int) var_5));
}
