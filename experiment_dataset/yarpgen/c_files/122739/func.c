/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122739
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6)))))))) ? ((-(max((((/* implicit */unsigned long long int) var_7)), (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_11 = ((/* implicit */long long int) (~((~(((/* implicit */int) (short)-20217))))));
    var_12 |= ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_4 [i_1])))))))));
                var_14 = ((/* implicit */unsigned long long int) ((unsigned int) 3362303492U));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (min((((/* implicit */long long int) var_9)), (((long long int) max((arr_10 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_0 [i_4 + 1])))))))));
                                var_16 ^= ((/* implicit */int) var_7);
                                var_17 += ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((16140901064495857664ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((arr_10 [22U] [i_1] [i_1] [3U] [9LL] [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26395))))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (short)26407))))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((var_7) << (((((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_8 [10ULL] [i_3 + 3] [15] [i_3] [i_0 - 1])) + (113))))) - (105)))))) | ((~(((((/* implicit */long long int) var_9)) ^ (arr_11 [i_1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 2; i_5 < 23; i_5 += 4) 
                {
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_5);
                }
                /* vectorizable */
                for (unsigned int i_6 = 2; i_6 < 23; i_6 += 3) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((short) (~(arr_10 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0]))));
                    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (288195191779622912LL) : (((/* implicit */long long int) ((/* implicit */int) (short)26380)))))));
                }
            }
        } 
    } 
}
