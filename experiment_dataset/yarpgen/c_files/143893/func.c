/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143893
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
    var_19 = ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))));
    var_20 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (!(var_14))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) min((max((var_16), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_9)))))))))))));
                }
            } 
        } 
    } 
}
