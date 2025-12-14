/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185564
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_0 + 1])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1])), ((unsigned char)45))))))) > (min(((-(var_5))), (min((var_5), (((/* implicit */unsigned long long int) var_7))))))));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_1 [i_1] [i_0])))) + (2147483647))) << (((((var_0) + (1312568170))) - (26)))))), (var_4))))));
                arr_8 [i_1] = -1844275710;
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */int) 1693512479U);
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned long long int) var_4);
}
