/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105766
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
    var_12 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 18347130332979192034ULL)) ? (18347130332979192038ULL) : (18347130332979192044ULL)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((int) var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18347130332979192030ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (min((2881464402U), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))))), (((/* implicit */unsigned int) max((arr_2 [i_0 + 1]), ((!(((/* implicit */_Bool) var_7)))))))));
                var_14 = ((/* implicit */long long int) max((((arr_0 [i_0]) << (((var_9) - (8572491932292694668ULL))))), (arr_0 [i_1])));
                var_15 = ((/* implicit */_Bool) max((((arr_2 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 2]))) : (18347130332979192029ULL))), (((/* implicit */unsigned long long int) max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) (-(var_1)));
    var_17 = ((/* implicit */unsigned long long int) (~(var_4)));
}
