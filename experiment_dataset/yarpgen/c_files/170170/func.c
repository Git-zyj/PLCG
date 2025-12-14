/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170170
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
    var_16 = min((5479084338760658676ULL), (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5559)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)250))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [4LL] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)5285)))))) | (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1]))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-5286))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) && ((_Bool)0)))) : (((/* implicit */int) arr_1 [i_1]))));
                var_18 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_0] [7] [7])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) -1708595944)) : (var_1))) != (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */long long int) ((arr_3 [i_1] [i_0]) ^ (((/* implicit */int) (short)-2457))))) : (max((((/* implicit */long long int) (unsigned char)250)), (0LL)))))));
            }
        } 
    } 
}
