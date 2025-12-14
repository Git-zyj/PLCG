/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163267
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_10))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (-741190080)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (arr_3 [(unsigned short)2])))) : (((unsigned long long int) var_8)))))))));
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_0)) : (((int) (+(((/* implicit */int) var_0)))))));
                arr_4 [(unsigned char)1] [8] [8] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5174))) & (((((/* implicit */_Bool) (signed char)71)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) < (min((var_1), (((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((long long int) 460847972U))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) : (((unsigned long long int) var_1))))));
}
