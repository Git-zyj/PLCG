/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175831
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
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((var_12) + (((/* implicit */int) (signed char)-126)))))) << ((((~(max((4U), (3601547720U))))) - (693419571U)))));
        var_16 = ((/* implicit */unsigned int) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_13))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (var_5)))), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (3601547729U)))), (var_10))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) > (var_8))) && (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0]))));
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (min((((var_8) >> (((-1621210400) + (1621210430))))), (min((var_11), (3601547723U))))))))));
    var_19 = ((/* implicit */unsigned long long int) min(((((-(var_7))) * (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned int) -219958043))))) ? (min((var_7), (4294967292U))) : (min((((/* implicit */unsigned int) var_9)), (var_7)))))));
}
