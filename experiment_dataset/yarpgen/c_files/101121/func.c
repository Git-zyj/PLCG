/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101121
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */unsigned int) (+(((733936063031380999ULL) - (max((13320847136419592921ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                arr_5 [i_0] |= ((/* implicit */short) arr_3 [5]);
                var_18 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned char)4]);
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_15))))) / (((8157871093504898756LL) / (((/* implicit */long long int) 536838144))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
}
