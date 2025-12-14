/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139737
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_1]);
                var_14 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (_Bool)1))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) var_6)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (10884626332000454158ULL))))) : (((/* implicit */unsigned long long int) (+(((arr_3 [i_0]) ? (var_5) : (var_1))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) / (((var_2) / (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-6558)))) / (1983337783)))) : (var_4)));
    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) min((2170315060U), (((/* implicit */unsigned int) var_0))))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2))))));
}
