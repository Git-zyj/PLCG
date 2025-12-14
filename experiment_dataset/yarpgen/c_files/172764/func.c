/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172764
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
    var_20 = ((/* implicit */long long int) min((max((((((/* implicit */int) (short)9)) ^ (((/* implicit */int) var_16)))), (((/* implicit */int) var_19)))), ((~(((/* implicit */int) max((((/* implicit */unsigned char) var_18)), (var_12))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)-108)))))))) ? (((((/* implicit */_Bool) ((long long int) (signed char)(-127 - 1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)0)))) : (min((((/* implicit */long long int) arr_3 [i_1])), (var_15))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (unsigned char)122))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_19))))));
}
