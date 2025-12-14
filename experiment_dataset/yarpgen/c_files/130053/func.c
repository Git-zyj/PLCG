/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130053
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (arr_3 [i_1 + 2] [i_0])))) : (((((/* implicit */_Bool) 5469529256071127970LL)) ? (2773932526725551503LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14969)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_3 [i_0] [i_0])) : (5469529256071127970LL))), (((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 + 1])))))))));
                var_20 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) | (((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */long long int) arr_1 [i_1])) : (5469529256071127993LL)))));
                arr_4 [i_0] = ((/* implicit */short) ((unsigned int) arr_0 [i_0] [i_0]));
                arr_5 [i_0] [i_0] = var_14;
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (~(((max((((/* implicit */unsigned long long int) var_0)), (0ULL))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))) - (4294947926U)))))));
    var_22 = ((/* implicit */short) ((unsigned short) var_7));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (((unsigned long long int) 4294967295U)))))));
}
