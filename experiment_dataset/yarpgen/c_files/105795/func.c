/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105795
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min(((~(max((((/* implicit */long long int) var_9)), (var_18))))), (((((/* implicit */long long int) ((int) var_18))) | (((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_15))))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (5072141960898838468LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) | ((-(var_13))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((short) min((((int) 1979091673842445027LL)), (((/* implicit */int) arr_1 [i_1] [i_1])))));
                var_21 = ((/* implicit */short) arr_4 [i_1]);
            }
        } 
    } 
}
