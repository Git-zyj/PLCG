/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163525
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
    var_18 = ((((/* implicit */_Bool) min((min((var_11), (892085021U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (var_14))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (min((var_2), (var_12))) : (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) > (((var_8) + (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))));
    var_19 -= ((/* implicit */unsigned long long int) ((-843937131350172943LL) < (-3120403576783568752LL)));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0])), (-1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned char) arr_0 [i_0])))))) : (((((/* implicit */_Bool) (short)-20135)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (7603014846513825951LL)))))) + (max((13017689481983317923ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (7549863333179792690LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (((((/* implicit */int) var_14)) ^ (((/* implicit */int) (short)32765)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) + (((/* implicit */int) var_7))))))))));
            }
        } 
    } 
}
