/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143953
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & ((((~(((/* implicit */int) (short)8)))) ^ (((/* implicit */int) ((short) (unsigned char)202)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((unsigned int) ((arr_4 [i_0] [i_0] [i_0]) - (134184960U)));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) / (((/* implicit */int) (short)3))));
                var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)30)) ? (((((/* implicit */_Bool) (unsigned char)37)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23742))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) == (((/* implicit */int) var_8)))))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((var_13) / (((((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (var_11))))))))))));
    var_20 = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) var_9)), (var_10))))));
}
