/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156499
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((unsigned short) max((var_9), (((/* implicit */long long int) var_7)))))))))));
    var_13 ^= (((!(((/* implicit */_Bool) ((short) var_9))))) ? (min((((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (-9223372036854775806LL))), (-9223372036854775806LL))) : (max((var_9), (((/* implicit */long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) (signed char)56))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */signed char) (+((-9223372036854775807LL - 1LL))));
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-56)))))));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_4] [i_2] = ((/* implicit */long long int) (unsigned short)0);
                            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)68))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)29)) >> (((((/* implicit */int) arr_7 [i_2] [i_5 + 2] [4LL] [i_5 + 2])) - (88)))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_19 [(unsigned short)8] [i_1] [i_1] [i_4] [5LL] = ((/* implicit */signed char) var_9);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_3))))) * (0ULL)));
                        }
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) (signed char)-123))));
                            arr_23 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned short)11])) ? (((((/* implicit */_Bool) -9223372036854775806LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)16)) / (((/* implicit */int) (signed char)38))))));
                            var_19 = ((/* implicit */_Bool) var_3);
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-30)) && (var_11))) && (((/* implicit */_Bool) (unsigned short)65522))));
                        }
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-78))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754))) / (arr_24 [i_1] [i_1] [i_0])))) ? (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_22 [i_8])))) : (((/* implicit */int) var_11))));
                                arr_28 [i_0] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                                arr_29 [i_0] [i_9] [i_2] [4ULL] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0])) ? (arr_18 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                var_24 -= ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                    var_25 *= ((/* implicit */_Bool) ((((var_2) + (2147483647))) << (((((/* implicit */int) var_7)) - (104)))));
                    arr_30 [i_0] [i_1] [i_0] |= ((/* implicit */long long int) ((signed char) arr_11 [i_0] [i_0] [i_0] [i_0]));
                }
                arr_31 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_22 [i_0])))) ? (3714051469750803478ULL) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
}
