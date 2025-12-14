/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160080
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 += ((288212783965667328ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))));
                arr_5 [(_Bool)1] [i_1] |= ((/* implicit */unsigned char) max((131071U), (((/* implicit */unsigned int) (unsigned short)32036))));
                arr_6 [i_0] [i_0] [6ULL] |= ((/* implicit */unsigned int) ((((unsigned long long int) min((0U), (((/* implicit */unsigned int) var_6))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 3])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) var_13)), (var_3))))));
}
