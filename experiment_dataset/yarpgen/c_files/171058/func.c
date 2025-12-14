/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171058
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = max((((/* implicit */unsigned long long int) min((max((var_11), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((signed char) var_0)))))), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((14506691142625271889ULL) % (12240821023999966479ULL))))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) ((-801924700) > (((/* implicit */int) (signed char)-56))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((unsigned long long int) ((int) ((unsigned int) (unsigned char)67))));
}
