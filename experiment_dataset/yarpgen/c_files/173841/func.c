/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173841
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 2] [i_1 + 1] [i_0 + 1]))))) ? (min((var_13), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0 + 1]))))))))))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_11 [i_4 - 4] [i_4 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_3] [2U]))) : (var_13))))), (((/* implicit */unsigned long long int) min((1522112339240222483LL), (((/* implicit */long long int) (_Bool)1)))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (var_9))))) : (var_4)))));
                            }
                        } 
                    } 
                    var_20 = min((((((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_0] [14U] [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1 - 1]))))), (((/* implicit */unsigned int) max((arr_5 [i_1] [(unsigned char)2] [i_1 - 1] [i_2 - 1]), (arr_5 [i_0 + 2] [i_1 - 1] [i_2 + 3] [i_2 - 2])))));
                    arr_12 [i_0 + 2] [i_0] [i_0] [i_2 + 1] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_13)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 1] [i_0] [i_2 + 2] [i_2])))), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_1 + 1] [i_2 + 4])))), (((/* implicit */unsigned long long int) ((1042737606U) != (min((0U), (((/* implicit */unsigned int) var_16)))))))));
                    var_21 |= ((/* implicit */unsigned char) ((var_2) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1] [i_0 + 2]))) >= (arr_0 [i_2]))))));
                }
                for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_15 [i_0] [i_1] [i_6 - 1])) >= (((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */int) arr_8 [i_6] [i_5] [i_1 + 1] [i_0] [(_Bool)1]);
                        var_24 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [9ULL] [i_5 + 3] [i_6 + 2])) : (var_8)))));
                        arr_18 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) var_0);
                        var_25 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [9])) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_1 + 1] [i_1 + 1] [(unsigned char)8])) : (((/* implicit */int) (unsigned char)10))))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1 + 1]))) : (((/* implicit */int) arr_2 [i_0 - 1])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) var_3);
                        var_27 *= ((/* implicit */unsigned int) (short)24531);
                    }
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        arr_24 [10U] [i_0] [10U] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1)))))));
                        arr_25 [i_0 + 3] [i_1] [i_0] [i_5] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) (short)-24556)) : (((/* implicit */int) arr_3 [5ULL] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */long long int) max(((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((((_Bool)1) ? (var_5) : (arr_19 [(_Bool)1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 + 3] [i_8] [i_5] [i_8] [i_8])) ? (((/* implicit */int) (short)24547)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 2915101636676789851LL)) ? (arr_11 [i_0] [(_Bool)1]) : (arr_11 [i_1 + 1] [11LL]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)83)))))))));
                    }
                }
                var_28 = max((arr_11 [i_0 + 2] [i_1 + 1]), (((((/* implicit */_Bool) var_2)) ? (arr_11 [i_0 + 3] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_1 - 1] [i_1 - 1]))))));
                arr_26 [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_0] [i_1 + 1] [i_1 - 1]);
            }
        } 
    } 
    var_29 -= ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned short)2047))))) ? (((((/* implicit */_Bool) var_4)) ? (var_15) : (var_15))) : (var_9)))) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)50334)), (var_10)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)243))))) : (max((17U), (((/* implicit */unsigned int) var_6))))))));
    var_30 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) var_15))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (9166836429640113830ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) && ((!(((/* implicit */_Bool) 32505856U)))))))) : (var_2)));
}
