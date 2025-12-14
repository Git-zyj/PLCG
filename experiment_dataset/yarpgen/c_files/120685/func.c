/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120685
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) ((int) 2034988305))), (((((/* implicit */unsigned int) -780920239)) ^ (arr_3 [(signed char)8] [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)-9))))) >= (arr_1 [i_1]))))));
                var_14 -= ((/* implicit */long long int) arr_4 [i_1]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)31), (var_6))))) <= (min((((/* implicit */unsigned long long int) -1954941294)), (var_4))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) ((6153066536902321353LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) : (((/* implicit */int) max((((/* implicit */short) var_10)), ((short)-31232))))))));
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
}
