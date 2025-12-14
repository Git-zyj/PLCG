/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125891
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
    var_20 = var_9;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_0 [19ULL]))))) ? (var_5) : (((((/* implicit */int) ((((/* implicit */int) var_12)) != (var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) min((var_14), (((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_8))) : (((/* implicit */unsigned long long int) min((220033248), (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))))))));
                var_22 = ((/* implicit */unsigned long long int) min((arr_3 [i_0 - 1] [i_1] [i_0 + 1]), (arr_3 [i_0] [i_1] [i_0 - 1])));
                arr_7 [i_1] [i_1] [i_1] = (_Bool)1;
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((max((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) 4294967295U))))) ? (min((var_15), (var_15))) : ((~(((/* implicit */int) var_9)))))))));
    var_24 = var_14;
}
