/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162488
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
    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2296857813876679723ULL)) ? (((/* implicit */unsigned int) -1073741824)) : (964403863U)))) && (((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (signed char)-40)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [(unsigned short)9] [i_1] [i_0])) != (((/* implicit */int) (signed char)48)))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) 18446744073709551602ULL)))))))) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))) : (((int) (unsigned short)49152)))) : (max((((((/* implicit */_Bool) (unsigned short)63644)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_9 [i_0] [(unsigned short)4] [i_0])))), (((/* implicit */int) ((16149886259832871886ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1892)))))))));
                    var_19 ^= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_9 [i_2 - 4] [i_2 + 1] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_12 [i_3] [i_4] [i_4]) & (((((/* implicit */_Bool) arr_7 [i_4] [i_3])) ? (arr_7 [i_3] [7ULL]) : (((/* implicit */unsigned int) -1))))))) ? (((((/* implicit */_Bool) arr_12 [i_3] [i_3 + 2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_3] [15U]))) : (arr_2 [i_3 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_11 [i_3]), (((/* implicit */unsigned short) arr_9 [(unsigned short)11] [i_4] [i_3]))))) || (((/* implicit */_Bool) arr_13 [i_3]))))))));
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 + 2])) ? (((/* implicit */int) arr_6 [i_3 + 2] [i_3 - 1])) : (((/* implicit */int) (signed char)-101))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_3 + 2] [i_3 - 1]) == (((/* implicit */unsigned long long int) (~(1U)))))))) : (((((((/* implicit */_Bool) (-2147483647 - 1))) ? (6ULL) : (((/* implicit */unsigned long long int) arr_4 [i_3] [i_4] [i_4])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1885))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) 0U))))))));
}
