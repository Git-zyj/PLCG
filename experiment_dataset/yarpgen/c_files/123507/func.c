/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123507
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
    var_19 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((var_5) + (1512047813)))))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_5)) : (var_2))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) * ((-(4294967295U))))))));
    var_20 = ((/* implicit */_Bool) var_5);
    var_21 -= ((/* implicit */int) var_16);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((~((~(4063833454U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    arr_9 [i_0] [6] [i_2] [i_0] = ((int) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */int) min((arr_3 [i_0] [i_1] [i_2 + 1]), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) arr_6 [i_2 + 2] [23] [23] [i_2 + 2]))));
                    arr_10 [i_2] [i_1] [i_2 + 1] = ((/* implicit */int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_17)), (389932579U)))) ? (((/* implicit */unsigned int) ((arr_5 [(_Bool)1]) + (var_5)))) : (min((2590969832U), (((/* implicit */unsigned int) var_13))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) 1548915922U);
}
