/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105742
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
    var_20 = ((/* implicit */unsigned char) min(((short)32767), (((/* implicit */short) (signed char)-95))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) max(((+(arr_5 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((short) min((arr_3 [i_1]), (4085554978662083851LL)))))));
                arr_7 [0ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) & (arr_5 [i_0 + 2] [i_1])))) ? ((-(((((/* implicit */int) var_11)) - (var_5))))) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                arr_8 [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) max((var_17), (((/* implicit */unsigned short) (signed char)95))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1]))))))))));
                arr_9 [i_1] = max((((/* implicit */unsigned long long int) ((_Bool) var_3))), (var_9));
            }
        } 
    } 
    var_21 = var_13;
    var_22 = ((/* implicit */unsigned char) var_0);
}
