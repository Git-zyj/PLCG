/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141981
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
    var_14 |= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (((var_1) >> (((4294967295U) - (4294967273U))))))) ? (min((var_1), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_11)), ((unsigned char)0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_15 &= ((/* implicit */unsigned short) (-((-(((unsigned int) var_4))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) min((((1056819376U) | (1056819376U))), (((/* implicit */unsigned int) min((arr_0 [i_0 - 2]), (var_8))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_2 [(unsigned short)6]))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [1U])) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))) >> (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_3 [11U])) : (((/* implicit */int) min((arr_3 [i_0 - 2]), (arr_3 [i_0 - 1])))))))));
                var_19 = ((/* implicit */unsigned short) (~(((long long int) min((arr_2 [i_1]), (((/* implicit */long long int) arr_0 [i_0])))))));
                var_20 = ((/* implicit */unsigned int) min(((~(var_7))), (((/* implicit */unsigned long long int) (short)17567))));
            }
        } 
    } 
}
