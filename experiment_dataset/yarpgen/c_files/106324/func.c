/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106324
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
    var_20 &= ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((unsigned int) min((((/* implicit */unsigned long long int) 1344967278U)), (2714685772947007967ULL))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_2 [i_0]))));
                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) * (15732058300762543664ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 538805560U)) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) -1762756173);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((signed char) min((15732058300762543657ULL), (min((2714685772947007965ULL), (((/* implicit */unsigned long long int) (signed char)-64))))))))));
    var_24 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (unsigned short)5310)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((unsigned char) var_12))))), (((((/* implicit */int) (short)28573)) + (var_19)))));
}
