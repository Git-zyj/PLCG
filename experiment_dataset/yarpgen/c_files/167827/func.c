/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167827
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_10))));
    var_16 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_0))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */short) var_6)), ((short)26295)))) : ((+(((/* implicit */int) (unsigned short)53636))))));
                var_18 = ((/* implicit */signed char) min(((-(((/* implicit */int) min((var_7), (((/* implicit */short) (_Bool)1))))))), (((((/* implicit */int) max(((unsigned short)11918), (((/* implicit */unsigned short) var_9))))) - (((/* implicit */int) max(((unsigned char)255), (var_14))))))));
            }
        } 
    } 
}
