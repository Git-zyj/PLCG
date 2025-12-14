/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110690
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
    var_11 |= ((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((var_10) - (3774736525U)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [10LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)6])) ? (arr_0 [i_0] [0LL]) : (arr_0 [i_0] [(unsigned char)12])));
        arr_4 [i_0] [0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_2 [i_0] [(short)10])) : (arr_1 [i_0])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_7))))), ((unsigned short)11)))) : (arr_1 [i_0])));
        arr_5 [i_0] = ((/* implicit */long long int) var_10);
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) <= (490835354U)));
        arr_9 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((((/* implicit */_Bool) arr_2 [i_1] [(_Bool)1])) && (((/* implicit */_Bool) (unsigned short)65532))))))), ((short)-13264)));
        arr_10 [i_1] = max((((/* implicit */unsigned int) arr_7 [i_1])), (max((((((/* implicit */_Bool) -196126108890342966LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (3804131942U))), (((unsigned int) arr_0 [i_1] [4LL])))));
        arr_11 [i_1] [i_1] = ((/* implicit */_Bool) min((((min((490835354U), (var_7))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [(unsigned char)16])) << (((490835352U) - (490835335U)))))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (-684631017)))) * (((((/* implicit */_Bool) var_2)) ? (490835354U) : (((/* implicit */unsigned int) arr_1 [i_1]))))))));
        arr_12 [i_1] [i_1] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7263398315547903288LL)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (unsigned char)36)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_16 [i_2] = ((/* implicit */int) var_2);
        arr_17 [i_2] [i_2] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_14 [i_2] [i_2])), (var_9)))));
        arr_18 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) min((max((arr_13 [i_2] [i_2]), (arr_15 [i_2]))), (arr_15 [i_2]))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_22 [i_3] = arr_19 [i_3];
        arr_23 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_20 [i_3] [i_3]), (arr_20 [i_3] [i_3])))) ? (arr_21 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_20 [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3]))) < (var_10))))) : (max((((/* implicit */unsigned long long int) (-(4294967295U)))), (var_9)))));
    }
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (int i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                {
                    arr_32 [i_6] = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) arr_25 [i_4])) ? (((/* implicit */unsigned long long int) arr_14 [i_4] [i_5])) : (var_9))) * (((/* implicit */unsigned long long int) -684631017))))));
                    arr_33 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)127)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_25 [i_5]))))) : (((arr_21 [i_4] [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4] [i_4])))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_39 [i_5] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_7])) ? (arr_6 [i_5]) : (((/* implicit */unsigned long long int) 3804131943U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_5]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_4] [i_4] [i_5] [i_6] [i_4] [i_8]))) * (((((/* implicit */_Bool) var_4)) ? (arr_14 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8])))))))));
                                arr_40 [i_4] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_21 [i_5] [i_6 - 1])) ? (arr_21 [i_6 + 1] [i_6 + 1]) : (arr_21 [i_5] [i_6 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)35565)) - (35540))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((long long int) var_9)), (((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)255)), (var_5))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)));
}
