/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143293
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) * (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((var_19) / (var_11)))))) * (((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_12))))) * (((((/* implicit */_Bool) var_19)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 *= ((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0] [i_0])), ((+(((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                }
            } 
        } 
    } 
}
