/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18033
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((min((arr_9 [i_2] [i_2]), (arr_9 [i_0] [i_0]))) != ((-(2222340263U))))))));
                    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-797)), (var_8)))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) 1041501644U)) ? (((/* implicit */int) (short)29488)) : (((/* implicit */int) var_6))))) / (((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((((arr_4 [i_0] [i_1] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-803))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))))))));
                    var_18 = ((/* implicit */signed char) (((-(4294967295U))) / (min((((/* implicit */unsigned int) var_7)), (arr_10 [i_1] [i_1 + 1] [i_1])))));
                    var_19 *= (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)779)), (3438121674839111982LL)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_6);
    var_21 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_14)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (-3438121674839111964LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))), (((/* implicit */unsigned long long int) max((max(((short)-803), (((/* implicit */short) (unsigned char)87)))), (((/* implicit */short) (unsigned char)131)))))));
}
