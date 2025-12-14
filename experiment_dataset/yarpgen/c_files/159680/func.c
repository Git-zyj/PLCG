/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159680
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
    var_15 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) min((((/* implicit */short) var_10)), (var_2)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) arr_3 [9] [i_2 - 1])), (((unsigned long long int) var_2)))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned char)137))))) + (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (1106594009971098864ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65524)), (1U)))))))));
                    arr_10 [i_0] [(signed char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                    arr_11 [i_0] [i_1] |= ((/* implicit */signed char) (~(((/* implicit */int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)242))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
}
