/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163731
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14924))))), (max((((8146597271222837408ULL) << (((11382460847721662808ULL) - (11382460847721662770ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))))));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_2 [i_1]))));
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (arr_4 [i_0])));
            }
        } 
    } 
    var_14 = ((/* implicit */short) 18446744073709551615ULL);
    var_15 = (+((((+(var_5))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
    var_16 *= ((/* implicit */short) max((var_7), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
}
