/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129341
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
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */long long int) var_2)) > (var_3)))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)20013))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) var_7)))) : ((-(var_10))))));
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(((((var_2) + (2147483647))) << (((var_13) - (1895587155U)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))) << (((/* implicit */int) ((short) (signed char)25))))) * (((/* implicit */unsigned int) var_10))));
    var_19 *= ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_13))) < (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_6)))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)20013)) || (((/* implicit */_Bool) var_1)))) ? (((-7658378765381520334LL) % (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_10))))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_15)))))))) : (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? ((-(var_0))) : (((/* implicit */long long int) var_10))))));
}
