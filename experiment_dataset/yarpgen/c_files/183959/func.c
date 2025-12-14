/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183959
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_10 += ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1 - 2])))));
                var_11 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
            }
        } 
    } 
    var_12 = (((~(((/* implicit */int) var_0)))) | (((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)66)))));
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_8))))) | (((((/* implicit */_Bool) var_0)) ? (30ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (max((((/* implicit */unsigned long long int) (unsigned short)24849)), (38ULL)))));
}
