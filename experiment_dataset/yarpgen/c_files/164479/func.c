/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164479
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (-53078891674968164LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((((long long int) var_6)) + (((/* implicit */long long int) arr_6 [i_0] [i_0])))))))));
                var_11 = ((/* implicit */unsigned int) min((var_11), (((((((/* implicit */_Bool) (-(var_4)))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1858389269U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [12ULL] [i_1]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)3310)), ((unsigned short)54629))))) & (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))) ^ (var_0))))));
}
