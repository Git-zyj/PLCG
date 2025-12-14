/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176837
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_3 [9ULL] [i_1 - 1])) : (var_3)))) ? (((/* implicit */int) (unsigned short)44325)) : (((/* implicit */int) max(((signed char)-23), ((signed char)63))))))) ? (max((((/* implicit */int) arr_1 [i_1] [i_0])), (((arr_1 [i_0 + 1] [i_1 - 1]) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)-56)))))) : (((/* implicit */int) arr_3 [i_0] [16ULL])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 -= arr_4 [20ULL] [i_3] [1ULL] [i_0];
                                arr_14 [8ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_2])) : (((/* implicit */int) (signed char)-63)))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_4 [i_0 + 1] [i_0 + 1] [i_2] [4]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) (signed char)-49);
                        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741823ULL)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (signed char)-59))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_18 [i_6] [i_5] [i_2] [i_1] [i_0 - 1]);
                            arr_22 [i_0 - 3] [19ULL] [19ULL] [19ULL] [i_6] [i_6] [15ULL] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [17] [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) var_6)))))));
                        }
                        arr_23 [i_0] [i_0] [19LL] [19LL] [17] [i_5] = ((/* implicit */int) arr_3 [i_0] [i_0]);
                        arr_24 [i_5] [i_5] [(unsigned short)1] = ((/* implicit */short) arr_15 [1LL] [7ULL] [i_1] [i_0]);
                    }
                    for (signed char i_7 = 4; i_7 < 20; i_7 += 2) 
                    {
                        var_16 = (signed char)-63;
                        arr_27 [(signed char)7] [i_1] [(signed char)13] [5LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0 + 1])) ? (arr_8 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        arr_28 [i_0] [i_1] [i_7] = ((/* implicit */signed char) var_9);
                        arr_29 [i_0] [i_0] [(unsigned char)20] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        arr_32 [i_8] = ((/* implicit */unsigned long long int) var_0);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 4; i_9 < 20; i_9 += 2) 
                        {
                            var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9 - 1])) ? (arr_35 [i_8 - 1]) : (arr_35 [i_9 - 4])));
                            arr_36 [i_2] [10U] = ((/* implicit */unsigned long long int) (!(((var_0) == (((/* implicit */int) var_9))))));
                            arr_37 [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) arr_33 [i_0] [(_Bool)1] [i_2] [i_2] [i_8] [i_9]);
                            arr_38 [i_0] [11ULL] [11ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2 - 3] [i_9 - 3] [i_1 - 1])) ? (arr_34 [i_2 - 3] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0 - 2] [i_0]))))))));
                        }
                    }
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-23)) && (((/* implicit */_Bool) -9223372036854775806LL))))) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) min((var_1), (var_4))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((var_4) | (((((/* implicit */_Bool) ((signed char) var_10))) ? (max((var_4), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
}
