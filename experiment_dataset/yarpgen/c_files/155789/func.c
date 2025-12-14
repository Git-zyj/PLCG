/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155789
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
    var_12 = var_1;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) arr_2 [i_0] [18LL]))))) ? (((((/* implicit */_Bool) var_3)) ? (-3374488244202994322LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (var_11)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-20355))))))))));
        arr_4 [7] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (((3374488244202994322LL) - (((/* implicit */long long int) 501725593))))));
        arr_5 [i_0] = ((/* implicit */short) (-((-(arr_0 [i_0])))));
    }
}
