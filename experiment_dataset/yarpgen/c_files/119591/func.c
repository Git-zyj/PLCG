/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119591
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
    var_12 = min((8403560368325156207ULL), (((/* implicit */unsigned long long int) (signed char)72)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (signed char)72);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)72), ((signed char)45))))) : (var_11)));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (unsigned short)34889)))) : (((/* implicit */int) (signed char)-29)))))));
    var_15 = ((/* implicit */signed char) (((_Bool)0) && ((_Bool)0)));
    var_16 = ((/* implicit */unsigned long long int) var_2);
}
