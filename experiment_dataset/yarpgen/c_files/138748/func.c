/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138748
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
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_2 - 2])) ? (6970667402812263673ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 2]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 6970667402812263673ULL)) ? (((/* implicit */int) (short)7936)) : (((/* implicit */int) (short)-627))))));
                                var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) 1341809299U)) ? (-817927005277788108LL) : (((/* implicit */long long int) ((int) -817927005277788108LL))))), (((/* implicit */long long int) ((arr_11 [i_2 + 2] [i_2 + 2] [i_2]) ? (((/* implicit */int) arr_12 [i_2] [i_2 + 2] [i_2] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_11 [i_2] [i_2 + 2] [i_2])))))));
                                var_20 = arr_4 [i_0] [i_1];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((var_5), ((short)-19508))))) == (max((((((/* implicit */_Bool) 14251931041415165134ULL)) ? (-817927005277788108LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)27))))), (((/* implicit */long long int) ((var_2) % (var_12))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_15)));
    var_23 = ((/* implicit */long long int) max((((/* implicit */int) var_7)), (((((/* implicit */int) var_13)) << (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) var_15)) : (var_16))) - (3877022963ULL)))))));
}
