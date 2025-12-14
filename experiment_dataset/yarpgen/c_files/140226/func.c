/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140226
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_3);
        var_18 = ((/* implicit */unsigned int) (_Bool)0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)108)) - (((/* implicit */int) var_11)))), (arr_7 [i_1] [i_1])))) : (min((((((/* implicit */_Bool) 4103380802U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))))), (max((0ULL), (6534107914706320725ULL)))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (3351296229U)))) ? (((((/* implicit */_Bool) 11912636159003230891ULL)) ? (var_8) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))))) ? (((((/* implicit */_Bool) min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_16))))))) : (((((/* implicit */_Bool) 262143ULL)) ? (1778930673) : (((((var_0) + (2147483647))) >> (((((/* implicit */int) var_11)) - (197)))))))));
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1])))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -257889489)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))) | (max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (18446744073709551595ULL)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 4; i_3 < 19; i_3 += 2) 
        {
            for (int i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_3 - 3] [i_3 - 2] [i_2] [i_3 - 4])), (arr_14 [i_3 + 2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 39ULL)) ? (3959930396U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5818)))))) ? (((/* implicit */unsigned long long int) var_7)) : (min((arr_14 [i_3] [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_4 - 1] [(unsigned short)15]))))))));
                        var_22 ^= ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_17 [i_2] [i_3] [i_3] [14U])), (max((0U), (((/* implicit */unsigned int) 0)))))), (((/* implicit */unsigned int) (unsigned char)47))));
                        var_23 *= ((/* implicit */unsigned long long int) (unsigned char)236);
                        var_24 = min((((/* implicit */unsigned long long int) ((arr_15 [i_3 - 4] [i_5] [i_4] [i_5 - 1]) ? (((/* implicit */int) arr_15 [i_3 + 2] [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_15 [i_3 - 3] [i_5] [(_Bool)1] [i_5]))))), (((((/* implicit */_Bool) 11912636159003230891ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 - 4] [i_3] [i_4 + 2] [i_5]))))));
                        arr_20 [i_3] [i_4] [i_4 - 1] [i_3] [i_2] [i_3] &= ((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_2] [i_3] [i_3] [10])), (((((/* implicit */int) (!(((/* implicit */_Bool) 4103380802U))))) << (min((var_10), (((/* implicit */unsigned int) arr_15 [i_5] [(_Bool)1] [i_3] [i_2]))))))));
                    }
                    var_25 ^= ((/* implicit */unsigned int) min(((-(18446744073709289471ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 2] [i_4] [i_3])) ? (((/* implicit */int) arr_19 [2U] [i_4 - 1] [i_4] [i_4] [i_4 + 3])) : (((/* implicit */int) arr_16 [i_4] [i_4 - 3] [i_4] [i_3])))))));
                    var_26 ^= ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3 + 1] [i_4 + 3])) >> (((/* implicit */int) arr_15 [i_3 + 1] [i_4 - 3] [i_4] [i_4]))))) ? (((/* implicit */int) max((arr_18 [i_3 + 1] [i_4 - 1] [i_4 + 3] [i_4]), (arr_12 [i_3 - 4] [i_4 + 2])))) : (2147483647));
                    arr_21 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4 - 2] [i_3 - 3])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) var_11))));
                    arr_22 [i_3] [i_3] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_16 [i_4 + 1] [i_3] [i_4 + 3] [i_3]), (arr_16 [i_4 + 3] [i_3 + 2] [i_4] [i_3])))) ? (((/* implicit */int) arr_16 [i_4 + 1] [i_3] [(_Bool)1] [i_3])) : (((/* implicit */int) min((arr_16 [i_4 - 2] [i_3] [i_4] [i_3]), (arr_16 [i_4 - 1] [i_3] [i_4] [i_3]))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) max((2132709021U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2])) ^ (arr_11 [i_2] [i_2]))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1802468418)) ? (((arr_23 [(_Bool)0] [i_6]) ? (arr_26 [i_6] [20]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(unsigned short)16] [i_6]))))) : (((3520532612U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 191586476U)) ? (0) : (1129198790))))))));
        arr_27 [(_Bool)1] &= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(_Bool)1] [i_6]))) + (3741052412U))) * (min((arr_26 [i_6] [(unsigned short)22]), (arr_26 [i_6] [14])))));
    }
    var_29 = ((/* implicit */unsigned short) 2162258263U);
}
