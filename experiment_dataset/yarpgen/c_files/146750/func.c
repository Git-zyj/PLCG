/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146750
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 658691431U)) ? (((/* implicit */unsigned long long int) var_9)) : (4796407526817948591ULL))), (((var_1) / (4796407526817948591ULL)))))) ? (var_1) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                var_18 = ((/* implicit */unsigned int) (!((!(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) > (arr_3 [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (~(var_11)));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) 4796407526817948585ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((var_7) ? (((/* implicit */unsigned long long int) var_6)) : (var_1))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))))));
    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 942615722)) ? (942615722) : (((/* implicit */int) (unsigned char)110))))))) ? (3940341508U) : (var_0)));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_7)), (((max((var_17), (((/* implicit */long long int) var_0)))) * (((/* implicit */long long int) ((/* implicit */int) ((594165393) >= (-942615728))))))))))));
}
