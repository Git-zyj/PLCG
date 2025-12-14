/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133484
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((var_6) - (1915863571U)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2LL)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((((/* implicit */int) ((((/* implicit */int) (signed char)58)) == (((/* implicit */int) arr_2 [i_1]))))) & (((/* implicit */int) (unsigned char)74))))));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_5 [6] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_3 [i_0])) : ((+(((/* implicit */int) arr_3 [(short)3]))))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])), (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))))))))))));
                var_18 = ((/* implicit */_Bool) (((~(-1LL))) ^ (min((10LL), (((/* implicit */long long int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (long long int i_4 = 3; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_17 [(signed char)8] [i_4] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)64)), (3673509390U)));
                    arr_18 [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((arr_12 [i_4] [i_4 - 2] [i_4]), (((/* implicit */long long int) arr_13 [i_4 + 1] [i_2 - 1] [10]))))) - (max((5025292449359961994ULL), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_19 = (_Bool)0;
}
