/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122472
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
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_7)) >> (((var_1) - (1986563870U))))) : (((((-30) + (2147483647))) >> (((4294967295U) - (4294967265U))))))) >> (((((/* implicit */int) var_19)) - (16131)))));
    var_21 ^= ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2)) >> (((((/* implicit */int) var_17)) - (27118)))))) ? (((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_18)) + (103))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0))))))) >> (((((/* implicit */int) var_19)) - (16121))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) var_9);
                                var_23 -= ((/* implicit */unsigned long long int) (((~(arr_2 [i_2 - 1]))) >> (((((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (var_11) : (((/* implicit */long long int) arr_2 [i_2 + 1])))) - (6378902559676897731LL)))));
                                var_24 *= ((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) max((arr_3 [i_0] [i_2]), (arr_3 [i_0] [i_3])))), (arr_7 [i_2 - 1]))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (+(-3492919856165504972LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_9 [4] [i_3] [i_0] [i_1] [i_0]))) - (45347ULL)))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))))) >> (((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)10882)) ^ (((/* implicit */int) var_9)))))) - (28379))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 1])) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((arr_9 [i_0] [i_0] [i_0] [i_1] [10U]) - (12244148217468754213ULL)))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
                    var_27 = ((/* implicit */unsigned int) var_2);
                    var_28 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) & (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 - 1])) ? (arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [6]))));
                }
            } 
        } 
    } 
}
