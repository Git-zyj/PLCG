/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105255
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
    var_17 = ((short) ((((/* implicit */int) var_8)) / (((/* implicit */int) ((unsigned short) var_8)))));
    var_18 = ((/* implicit */short) var_10);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) * (min((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11))))), ((~(((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) ((var_2) && (((/* implicit */_Bool) var_0)))))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) != (var_9))))) % (min((((/* implicit */unsigned int) var_16)), (var_9))))))));
                    var_21 = ((/* implicit */long long int) (((+(((/* implicit */int) var_2)))) & (((/* implicit */int) min((var_16), (((/* implicit */short) ((_Bool) var_15))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((unsigned int) var_14)) << ((((~(((/* implicit */int) ((unsigned short) var_9))))) + (35083))))))));
                    var_23 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((unsigned short) var_10)))))));
                }
            } 
        } 
    } 
}
