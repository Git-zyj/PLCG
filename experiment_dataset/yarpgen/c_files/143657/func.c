/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143657
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41405))) : (var_7))), (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_0])))))));
                arr_6 [i_0 - 1] [i_0] [i_1] = ((/* implicit */short) ((((var_8) ? (min((((/* implicit */unsigned long long int) var_10)), (var_9))) : (((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */unsigned int) var_8))))))) + (((((/* implicit */unsigned long long int) var_4)) - ((+(var_0)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)24131)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_6))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_2)) : (min((var_7), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) var_10))));
}
