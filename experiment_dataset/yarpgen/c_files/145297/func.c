/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145297
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
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 553102211)) : (var_0))))))) <= (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))) % (var_18))) * (((/* implicit */unsigned long long int) ((1608965974543436862LL) << (((((-8217530821248870027LL) + (8217530821248870084LL))) - (56LL))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((-8217530821248870027LL) + (8217530821248870023LL)));
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0)))))));
                arr_8 [i_0] [i_1] = ((/* implicit */_Bool) max((-5162196741720145768LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((437074973U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5384))))))))));
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? ((+(8217530821248870026LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) arr_1 [(unsigned short)8] [i_0])) ? (((/* implicit */long long int) min((0U), (0U)))) : (((((/* implicit */_Bool) var_0)) ? (-5086028505728480430LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                var_24 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_7 [i_1] [i_0])))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (max((((/* implicit */long long int) (_Bool)0)), (var_7)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((_Bool) 4294967295U)))))));
}
