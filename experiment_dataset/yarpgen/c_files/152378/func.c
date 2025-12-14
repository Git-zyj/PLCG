/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152378
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) (unsigned short)15872))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 303245940855311489LL)) : (var_1)))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */long long int) min(((unsigned char)192), (((/* implicit */unsigned char) ((-2096793506) > (2096793505))))))), (((long long int) var_10)))))));
    var_19 -= ((/* implicit */unsigned int) (((-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_16))))))) * (((/* implicit */int) (!(((var_15) < (((/* implicit */unsigned long long int) 1729432764)))))))));
    var_20 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) -2096793506)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1729432764))))) : (((int) var_0)))), (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 288230376151711743ULL)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (4294967295U)));
                var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (~(arr_3 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
}
