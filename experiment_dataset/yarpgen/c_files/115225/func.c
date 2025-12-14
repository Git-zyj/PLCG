/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115225
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
    var_13 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-22128)), (var_10)))))), (((/* implicit */unsigned int) min((var_4), (((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) -599222957)))))))));
    var_14 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((-599222948), (((/* implicit */int) (signed char)69))))))) ? (((unsigned int) (~(var_3)))) : (((((/* implicit */_Bool) (-(var_8)))) ? (min((((/* implicit */unsigned int) var_4)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_4)))))))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(min(((~(var_7))), ((~(var_5))))))))));
                arr_6 [i_0] = ((long long int) 599222949);
            }
        } 
    } 
}
