/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143842
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
    var_17 = ((/* implicit */unsigned char) var_14);
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 34656660U)), (((max((1991724514993183044ULL), (((/* implicit */unsigned long long int) 34656660U)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)142))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)60)) != (1272671895))))));
                    var_20 = ((/* implicit */int) ((unsigned char) arr_1 [i_1 - 1]));
                }
            } 
        } 
    } 
}
