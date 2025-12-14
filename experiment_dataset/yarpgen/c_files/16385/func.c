/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16385
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
    var_20 = var_8;
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_9))));
    var_22 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (9523175338293597100ULL))) > (((/* implicit */unsigned long long int) arr_2 [i_2])))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(((int) arr_6 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
}
