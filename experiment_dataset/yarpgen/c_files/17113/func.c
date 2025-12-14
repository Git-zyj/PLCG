/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17113
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) 3448055903897641187LL);
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_10)))))) && (((/* implicit */_Bool) (short)(-32767 - 1)))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */long long int) 16777215);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((var_18) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) >= (((/* implicit */int) (!((_Bool)1))))));
    var_23 = ((/* implicit */_Bool) var_5);
    var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4091191153U)) ? (((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) (unsigned char)225))))) : (((/* implicit */int) ((3790546378U) >= (((/* implicit */unsigned int) var_9)))))))));
    var_25 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_18)))) ? (((/* implicit */unsigned int) max((var_19), (((/* implicit */int) (_Bool)1))))) : (var_15))));
}
