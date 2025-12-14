/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141731
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2749)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3321043356U))))));
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-9)), (max((max((5793256227231863283LL), (((/* implicit */long long int) 2901020572U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (-1655664972) : (67106816))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */unsigned int) (unsigned short)20513);
                var_17 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 4138733928U)) ? (329374007U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))))), (max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) (unsigned short)21605)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (32767U)))))));
                var_18 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) 4091368733U)))), (((((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) == (((/* implicit */int) arr_2 [i_0] [i_0]))))));
            }
        } 
    } 
}
