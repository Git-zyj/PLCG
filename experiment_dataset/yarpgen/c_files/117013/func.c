/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117013
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_17))));
    var_21 = ((/* implicit */int) ((var_17) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3))), (((/* implicit */long long int) min((0), (((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))), ((-(((unsigned int) (unsigned short)65535))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-79)) ? (1255001878U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78)))));
            }
        } 
    } 
}
