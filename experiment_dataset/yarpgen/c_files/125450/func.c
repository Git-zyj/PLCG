/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125450
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) arr_2 [i_1]);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3409451247U)))) ? (8765924393738446419LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))))) ? (min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_3))), (max((3409451265U), (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))))) : (((/* implicit */unsigned int) ((arr_3 [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1 + 1])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_11);
    var_13 = ((/* implicit */short) (((_Bool)1) ? (885516049U) : ((+(885516048U)))));
    var_14 = ((/* implicit */unsigned short) var_1);
    var_15 = ((/* implicit */int) min(((~(var_2))), (((/* implicit */unsigned int) ((max((((/* implicit */int) var_11)), (var_0))) & (var_0))))));
}
