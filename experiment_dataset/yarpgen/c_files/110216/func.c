/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110216
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) max(((unsigned short)17361), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                var_18 = ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)59056)))) - ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (var_14))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_2))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_5)) <= (4294967272U))))));
}
