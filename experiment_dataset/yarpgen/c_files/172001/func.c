/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172001
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
    var_20 = ((/* implicit */unsigned int) max((((unsigned long long int) (signed char)73)), (7709508143885271753ULL)));
    var_21 = ((/* implicit */signed char) var_17);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) 3793612142U);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (arr_5 [i_0] [i_0] [i_1])))) || (((arr_3 [i_1 - 1]) > (arr_3 [i_1 - 1])))));
                arr_7 [i_0] = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_19))));
}
