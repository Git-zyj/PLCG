/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126467
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-8529)))) + ((-(var_8))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)22408)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1] [(_Bool)1])), (var_11)))) ? (((/* implicit */int) arr_3 [(short)10] [(short)10])) : ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))))));
                var_19 = ((/* implicit */_Bool) var_15);
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) (~(((unsigned long long int) var_4))));
                arr_5 [i_1] [i_1] = ((((/* implicit */int) (short)-8542)) & (((/* implicit */int) (short)8519)));
            }
        } 
    } 
}
