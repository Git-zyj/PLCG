/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149495
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
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) ((short) 4U))) : (((/* implicit */int) arr_0 [i_2] [i_0])))))));
                    arr_6 [i_0 + 1] [i_1] [(short)3] [i_2] = ((((/* implicit */_Bool) min((arr_5 [i_0 - 1] [i_1 + 2]), (((/* implicit */short) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)11069)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_6))))));
                }
                var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) max((arr_0 [i_0] [i_1]), (arr_5 [0LL] [i_1])))) : (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))) + (6815151789819442344ULL))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_9)), (var_4))), (((/* implicit */long long int) var_2)))))));
}
