/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165674
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
    var_13 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) min((var_12), (var_7)))), (min((var_6), (((/* implicit */unsigned char) (signed char)28))))))) / (((/* implicit */int) var_11))));
    var_14 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) -484187747703029708LL);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((short) 14711542190653197965ULL))), (max((((/* implicit */unsigned long long int) 484187747703029707LL)), (var_9))))) + (10096685742945477143ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_7 [i_0] [(short)12] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (arr_0 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) -484187747703029696LL)) ? (-484187747703029708LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (max((484187747703029722LL), (((/* implicit */long long int) (_Bool)0))))))));
            arr_8 [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))) : (484187747703029700LL))), (562400197607424LL)));
        }
    }
    for (unsigned int i_2 = 1; i_2 < 7; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((var_11), (((/* implicit */short) arr_5 [i_2] [i_2] [i_2]))))) ? (max((var_9), (((/* implicit */unsigned long long int) (unsigned char)35)))) : (((/* implicit */unsigned long long int) arr_0 [i_2 + 1])))), (((/* implicit */unsigned long long int) (unsigned char)0))));
        arr_12 [i_2] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_1)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -484187747703029722LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))), (min((min((arr_4 [i_2] [i_2 + 4]), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])))), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_2])))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 2) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */long long int) max((((/* implicit */int) min((arr_6 [i_3 + 1] [i_3] [i_3]), (arr_6 [i_3 + 2] [i_3] [i_3])))), (((((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 1] [i_3])) ^ (((/* implicit */int) arr_6 [i_3 + 2] [6] [i_3 + 2]))))));
        arr_17 [i_3 - 2] = ((/* implicit */long long int) (unsigned char)213);
    }
    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) /* same iter space */
    {
        arr_20 [i_4] = ((/* implicit */short) var_12);
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_30 [i_5] [i_6] [i_6] = min((((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_7] [i_7])) ? (((/* implicit */int) arr_15 [i_4 + 2] [i_4 + 1])) : (((/* implicit */int) ((arr_24 [i_7]) && ((_Bool)1)))))), (((((((/* implicit */int) arr_15 [i_7] [i_7])) + (2147483647))) << (((((/* implicit */int) var_6)) - (136))))));
                        /* LoopSeq 4 */
                        for (long long int i_8 = 1; i_8 < 13; i_8 += 3) 
                        {
                            arr_33 [i_8] [i_5] [i_7] [i_7] [i_6] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)0)), ((-(0U)))))) ? (var_0) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_31 [i_4 - 1] [(signed char)12] [i_4 + 1] [i_4 + 1])), (((((/* implicit */_Bool) -7112066407025980452LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6]))) : (484187747703029700LL))))))));
                            arr_34 [i_4] [(_Bool)1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_5 [i_5] [i_7] [i_8])) : (((/* implicit */int) arr_28 [i_4] [i_5] [i_6] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_28 [i_4] [5ULL] [i_4] [i_4 + 1]), (arr_21 [i_6] [i_7]))))) : (((18446744073709551602ULL) << (((arr_13 [i_4]) - (986292551))))))), (((/* implicit */unsigned long long int) arr_27 [i_4] [13ULL] [i_6] [i_7] [i_8] [(short)4]))));
                            arr_35 [i_5] [i_7] = ((/* implicit */short) arr_32 [i_6] [i_6] [i_6] [i_5] [i_8]);
                            arr_36 [i_4] [i_4] [i_4] [i_6] [i_6] [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_4] [i_4 + 2] [i_4] [i_4])) ? (arr_1 [i_5]) : (arr_18 [i_4])))) ? (max((((/* implicit */int) var_7)), (arr_13 [i_5]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_5])) && (((/* implicit */_Bool) arr_22 [i_4]))))))) ^ (min((((((/* implicit */int) arr_15 [2ULL] [2ULL])) % (((/* implicit */int) arr_21 [i_5] [i_8])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_37 [i_4] [i_5] [i_6] [i_4] [i_8] [i_5] [i_4] = max((min((((/* implicit */long long int) arr_1 [i_5])), (-484187747703029722LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_10))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_42 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((144080003703767040LL), (((/* implicit */long long int) 446842369U))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_22 [i_4])) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_9])) : (((/* implicit */int) arr_28 [i_9] [i_7] [i_5] [i_4]))))))) ? (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_29 [i_4] [(short)5] [i_6] [i_7] [i_9]))))) ? (((var_12) ? (arr_1 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (0U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 610713888U)))))))));
                            arr_43 [i_9] [i_7] [i_9] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (484187747703029708LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_22 [i_9])) % (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15))) : (arr_22 [i_5])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            arr_48 [i_4] [i_4] [i_4 + 2] [i_4 - 1] [(signed char)0] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_27 [i_4 + 2] [i_6 + 1] [i_6 + 1] [i_7] [i_7] [(signed char)5])) : (((/* implicit */int) var_4)));
                            arr_49 [i_4] [i_4 - 2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_26 [i_4] [9U] [i_6]);
                            arr_50 [i_4] [i_10] [i_6] [i_10] [i_10] = ((/* implicit */signed char) arr_46 [i_4] [i_5] [i_6] [i_5] [i_10]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_53 [i_5] [i_7] [i_6] [i_5] [i_4 - 1] [i_4] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_4] [i_5] [i_6 + 1] [i_6 + 1]))))) ^ ((~(((/* implicit */int) arr_26 [i_5] [i_7] [i_11]))))));
                            arr_54 [i_4] [i_4 + 2] [i_4 - 1] [i_4] = ((/* implicit */signed char) min(((-(arr_22 [i_4 - 1]))), (((/* implicit */long long int) min((arr_47 [i_4] [i_4 - 2] [i_4] [i_4] [i_5] [i_6 + 1] [i_7]), (arr_47 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_6] [i_6] [i_6 + 1] [i_11]))))));
                            arr_55 [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_12))))) : (min((arr_0 [i_4]), (((/* implicit */long long int) var_11))))))));
                        }
                    }
                } 
            } 
        } 
        arr_56 [11LL] [i_4] = ((/* implicit */unsigned int) var_0);
    }
}
