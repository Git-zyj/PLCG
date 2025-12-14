/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131249
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
    var_16 = ((/* implicit */unsigned short) var_6);
    var_17 = (~(((/* implicit */int) (_Bool)0)));
    var_18 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(short)3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((arr_4 [(short)14]), (((/* implicit */unsigned long long int) var_2))))))) | (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_1 + 1] [i_1 + 1]) ^ (arr_1 [i_1 - 4] [i_1 - 4])))) ? (8433813632757541547LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                var_19 = ((/* implicit */short) ((var_2) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_10)) : (-8433813632757541548LL)))), (min((((/* implicit */unsigned long long int) -2572055113394241589LL)), (arr_4 [i_1]))))) : (max((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (8354859034643546445ULL) : (((/* implicit */unsigned long long int) 8433813632757541539LL)))), (((/* implicit */unsigned long long int) 8433813632757541527LL))))));
            }
        } 
    } 
}
