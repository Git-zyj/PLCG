/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136017
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (_Bool)1);
                arr_6 [13ULL] [13ULL] [13ULL] = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) ((((min((((/* implicit */int) var_2)), (((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_2)) + (52))))))) + (2147483647))) << (((((((/* implicit */int) var_2)) + (32))) - (8)))));
    var_13 = (+(((((/* implicit */_Bool) -1581296645)) ? (((((/* implicit */_Bool) var_3)) ? (-47421859) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))));
}
