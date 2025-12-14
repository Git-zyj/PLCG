/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178767
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) var_15)), (var_4)))) > (min(((~(((/* implicit */int) var_12)))), ((-(((/* implicit */int) var_5))))))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) min((min((((/* implicit */int) var_9)), (var_14))), (((/* implicit */int) max((var_15), (var_7))))));
                    arr_8 [i_2] = ((/* implicit */int) ((((((/* implicit */int) var_9)) * (((/* implicit */int) var_11)))) != (((/* implicit */int) min((var_0), (((/* implicit */signed char) var_15)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((((/* implicit */short) var_15)), (var_13)))) * (((/* implicit */int) max((((/* implicit */signed char) var_3)), (var_11)))))) - (min((((/* implicit */int) min((var_12), (((/* implicit */signed char) var_7))))), (((((/* implicit */int) var_0)) + (((/* implicit */int) var_9))))))));
    var_17 = ((/* implicit */unsigned int) (~(((((((/* implicit */int) var_5)) << (((((((/* implicit */int) var_11)) + (118))) - (11))))) / (((/* implicit */int) max((((/* implicit */short) var_15)), (var_5))))))));
}
