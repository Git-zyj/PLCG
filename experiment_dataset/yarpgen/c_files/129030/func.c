/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129030
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) var_2);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19458)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (short)-28057))))) && (((/* implicit */_Bool) (unsigned short)46457))));
                            arr_12 [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                            arr_13 [i_0] [(short)0] [i_3] [i_3] &= ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1] [3LL] [8]))), (((int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                            var_22 = max((((/* implicit */unsigned int) arr_5 [i_1] [i_4])), (min((arr_1 [i_3] [i_0]), (arr_1 [i_4] [i_0]))));
                        }
                    }
                    var_23 ^= ((/* implicit */_Bool) max((11835040971285457455ULL), (((/* implicit */unsigned long long int) 0U))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (int i_6 = 4; i_6 < 24; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (long long int i_8 = 2; i_8 < 24; i_8 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                            {
                                arr_29 [15LL] [0LL] [i_7] [i_5] [(unsigned short)12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_14 [i_5] [i_5])) : (arr_24 [9U] [i_5] [i_5] [i_5] [i_5]))))));
                                var_24 = ((/* implicit */long long int) var_7);
                                var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_6 - 3] [i_6 + 1])) ? (arr_14 [i_6 - 3] [i_6 + 1]) : (arr_14 [i_6 - 3] [i_6 + 1])));
                                var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [(_Bool)1] [i_6] [i_6] [i_8] [i_9])) && (((/* implicit */_Bool) ((short) arr_20 [i_5])))));
                                arr_30 [i_9] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_19 [i_6 - 1] [i_8 + 1])) : (((/* implicit */int) arr_18 [i_8 - 1] [i_6 - 1] [i_7]))));
                            }
                            for (unsigned int i_10 = 2; i_10 < 24; i_10 += 1) 
                            {
                                var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_17 [i_5] [i_7] [i_7]), (((/* implicit */long long int) var_1))))) ? (max((8522876475236565101LL), (-6586331746267163366LL))) : (8522876475236565101LL)))), (var_0)));
                                var_28 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) arr_26 [i_5] [i_6] [i_7] [i_8 - 2] [i_10] [i_5]))))), (((((/* implicit */_Bool) arr_18 [(unsigned short)6] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5] [i_6] [i_7] [i_8 + 1] [i_10]))) : (arr_24 [i_7] [i_8] [i_7] [i_7] [i_10]))))))));
                                var_29 &= ((/* implicit */long long int) (unsigned short)19097);
                            }
                            for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                            {
                                arr_35 [i_8] [i_6] [i_7] [i_8] [i_11] |= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((unsigned int) var_13))) != (max((((/* implicit */long long int) var_3)), (var_14))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)19079)), (((((/* implicit */_Bool) arr_20 [i_5])) ? (13186627125780192979ULL) : (((/* implicit */unsigned long long int) 19U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_6] [i_7] [i_8])))));
                                arr_36 [i_5] [i_5] [i_7] = var_17;
                                arr_37 [i_11] [i_5] [i_7] [i_5] [i_5] = ((_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)7)));
                                var_30 |= ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_6)) <= (((((/* implicit */unsigned long long int) 2969849737U)) & (4639524118665341972ULL))))) ? (min((8293750139639695752ULL), (((/* implicit */unsigned long long int) min((-5329491848632347289LL), (((/* implicit */long long int) 4294967295U))))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_18)), (1325117559U)))), (min((((/* implicit */unsigned long long int) arr_26 [(signed char)15] [i_5] [i_6] [i_6] [i_8] [i_11])), (var_0)))))));
                                arr_38 [i_5] [i_6] [i_7] [i_7] [i_11] [i_8] [i_11] |= ((/* implicit */unsigned long long int) ((max((((arr_25 [i_5] [i_6] [i_6] [i_7] [i_7] [i_11]) - (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((_Bool) arr_24 [i_5] [i_11] [i_7] [i_5] [i_11]))))) == (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                            }
                            for (unsigned int i_12 = 2; i_12 < 24; i_12 += 1) 
                            {
                                var_31 = (unsigned short)0;
                                var_32 ^= ((/* implicit */unsigned char) var_12);
                                var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_20 [i_5])))));
                            }
                            var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))) ? (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) arr_40 [(unsigned short)20] [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 1]))))) : (((((/* implicit */_Bool) min((arr_25 [i_5] [i_6] [i_7] [i_7] [i_7] [i_8 - 1]), (((/* implicit */long long int) (signed char)35))))) ? (arr_25 [i_8 - 2] [i_8] [i_7] [i_6 - 3] [i_5] [6U]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_34 [i_5] [i_6] [i_6] [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) arr_40 [i_5] [i_6] [i_7] [i_8] [i_8 - 1] [i_8]))))))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [12LL] [i_5] [i_6 - 2]);
                var_36 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) arr_31 [i_6 + 1] [i_6] [i_5] [i_6] [i_6] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [2U] [i_6] [i_6] [i_6] [2U] [(signed char)9])))))) : (min((((/* implicit */unsigned long long int) 2969849737U)), (var_0)))))));
            }
        } 
    } 
    var_37 += ((/* implicit */_Bool) var_18);
    var_38 = ((/* implicit */unsigned char) var_4);
}
