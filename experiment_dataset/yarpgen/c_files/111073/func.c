/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111073
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
    var_19 &= ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) 2773734721U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_8)))) << (((((/* implicit */int) ((_Bool) (_Bool)1))) >> (((min((var_7), (((/* implicit */unsigned int) var_16)))) - (635U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_2))))));
                arr_7 [i_0] [10LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) var_14)) : (((arr_1 [i_0] [i_1]) ^ (arr_1 [i_0] [i_1])))));
                arr_8 [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)64404))))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((min((var_6), (((/* implicit */unsigned int) var_18)))), (((/* implicit */unsigned int) arr_0 [i_0]))))) * (max((((/* implicit */unsigned long long int) var_13)), (((unsigned long long int) var_7))))));
                arr_10 [i_0] [(unsigned short)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_1])))) ? ((+((~(((/* implicit */int) (signed char)-1)))))) : (((/* implicit */int) var_9))));
            }
        } 
    } 
}
