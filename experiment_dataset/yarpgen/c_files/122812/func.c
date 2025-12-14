/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122812
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
    var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) 2423033306U)))))));
    var_16 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 6; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 + 1] [i_1] = ((/* implicit */long long int) max(((-((+(((/* implicit */int) var_3)))))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)63))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (short)-16);
                arr_7 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) (_Bool)1))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1023U) : (arr_3 [i_0] [i_1] [i_1 - 4])))));
            }
        } 
    } 
    var_17 = var_13;
}
