/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114480
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_16))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10545))) > (39861900U));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2127462281)) ? (((/* implicit */int) (unsigned short)26950)) : (((/* implicit */int) (unsigned short)48792))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2]))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4733408990941711126ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1]))) : (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(unsigned char)10] [i_2] [i_0]))) > (39861900U))))) : (arr_3 [i_2 + 1])))))));
                    arr_10 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) 7247094533126326674LL);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_2);
    var_21 = ((/* implicit */long long int) 13713335082767840490ULL);
}
