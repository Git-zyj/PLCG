/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180435
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((var_15) - (6524533196601803369ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)3]))) - (var_2))) : (((/* implicit */long long int) max((var_9), (var_9)))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) + (8114440030784724840LL)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1194869494)) <= ((-((-(2811948619U)))))));
                arr_8 [i_0] [i_1] [21ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [21LL])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : ((-(((/* implicit */int) ((short) var_8)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(var_2)))) ? (var_2) : (max((var_12), (var_12)))))));
}
