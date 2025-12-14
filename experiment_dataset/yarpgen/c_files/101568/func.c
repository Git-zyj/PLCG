/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101568
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) ((_Bool) var_0))), (var_10))), (max((((/* implicit */unsigned int) var_4)), ((-(2237070176U))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) max((arr_0 [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (arr_3 [i_0] [i_1] [i_1])))) || ((_Bool)1))))) & (((unsigned int) min((var_0), (((/* implicit */unsigned long long int) arr_0 [i_1])))))));
                var_14 = ((/* implicit */signed char) var_5);
            }
        } 
    } 
}
