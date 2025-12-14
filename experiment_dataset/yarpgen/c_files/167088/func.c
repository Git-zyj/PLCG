/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167088
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
    var_15 = ((/* implicit */unsigned char) 49152U);
    var_16 = ((max(((_Bool)1), (((_Bool) (_Bool)1)))) && ((_Bool)1));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]);
                var_17 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_11)) / (((/* implicit */int) (unsigned char)162)))));
                var_18 = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]);
                var_19 &= ((/* implicit */unsigned char) ((((arr_2 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((unsigned int) max((var_11), ((_Bool)1)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1] [(unsigned short)2])) >> (((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) var_11));
}
