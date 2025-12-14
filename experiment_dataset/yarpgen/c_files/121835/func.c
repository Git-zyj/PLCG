/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121835
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
    var_20 = ((/* implicit */unsigned short) ((unsigned char) min((min((var_7), (((/* implicit */long long int) var_19)))), (var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) ((unsigned char) (signed char)(-127 - 1))))));
                var_22 &= max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (144114638320041984ULL))) > (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1]))))), ((~(arr_1 [i_1]))));
                var_23 &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_13))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_0 [i_1] [i_0]))) : (min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) var_17)))))));
                var_24 &= ((/* implicit */_Bool) var_14);
            }
        } 
    } 
}
