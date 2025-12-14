/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1070
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
    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned short)14583))))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_15))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8046139747643431346LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0]), ((unsigned char)1))))) : (max((((/* implicit */long long int) arr_5 [i_0])), (var_9))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0]))))));
                arr_6 [(_Bool)1] [i_0] [i_0 + 1] = ((/* implicit */int) ((((((/* implicit */long long int) var_16)) > (7147956717085690876LL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (-1448735464) : (((/* implicit */int) arr_4 [i_0]))))) : (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0 - 1]) == (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_1])), ((unsigned char)193)))))))))));
                var_19 = ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
}
