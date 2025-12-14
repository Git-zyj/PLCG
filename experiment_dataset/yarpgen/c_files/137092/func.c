/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137092
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
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_5)));
    var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) 6456446492217151980ULL)) ? (6456446492217151989ULL) : (((/* implicit */unsigned long long int) 3084537328U))))));
    var_14 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 *= ((((/* implicit */unsigned long long int) ((min((4034210381U), (((/* implicit */unsigned int) (signed char)14)))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-8544)))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) * (min((((/* implicit */unsigned long long int) (unsigned short)13)), (6456446492217151989ULL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) 768U);
                            arr_14 [i_2] = ((/* implicit */unsigned int) (+(max((((((/* implicit */int) arr_8 [i_1] [i_1])) + (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3])))), (((/* implicit */int) arr_2 [i_2]))))));
                            arr_15 [11ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (max((0), (((/* implicit */int) var_0))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0]))) % (var_4)))), (((((/* implicit */unsigned long long int) arr_12 [i_3] [i_0])) * (11990297581492399635ULL))))) : (max((6456446492217151995ULL), (((/* implicit */unsigned long long int) min(((unsigned short)46856), (((/* implicit */unsigned short) (_Bool)0)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 3; i_4 < 14; i_4 += 4) 
    {
        for (short i_5 = 2; i_5 < 13; i_5 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    arr_24 [i_5] = ((/* implicit */int) max((((/* implicit */long long int) ((int) min((arr_23 [i_4 + 2] [i_5] [i_6]), (((/* implicit */unsigned int) var_6)))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (932779334805122949ULL))))) * (min((((/* implicit */long long int) var_2)), (arr_16 [i_4] [i_5 - 2])))))));
                    arr_25 [i_5] [i_5 + 1] [i_5] = ((/* implicit */unsigned short) (((((+(127778556U))) + (max((((/* implicit */unsigned int) (short)14268)), (3084537329U))))) << (((((arr_16 [i_4] [i_6]) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) + (2484589287396343842LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_32 [i_4] [i_4] [i_6] [i_7] [i_5] = ((/* implicit */_Bool) ((long long int) (-2147483647 - 1)));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-26925)) : (((/* implicit */int) (_Bool)1)))))));
                                var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) != (((arr_16 [i_4] [i_4]) | (((/* implicit */long long int) arr_26 [i_4] [i_5 + 3] [i_6] [i_7]))))))), (max((((var_1) ^ (var_2))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_3)), (arr_18 [i_4] [i_5]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_9 = 3; i_9 < 13; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 3; i_10 < 14; i_10 += 2) 
                    {
                        arr_39 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((var_9) - (1009145330U)))))), (((((/* implicit */_Bool) (short)22907)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4] [1] [i_5] [(unsigned short)6] [i_10]))) : (var_8)))))) ? (((/* implicit */int) ((signed char) (signed char)-86))) : (((/* implicit */int) ((_Bool) min((((/* implicit */int) (_Bool)1)), (-1784072234)))))));
                        arr_40 [i_10] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */signed char) arr_17 [i_4 - 3]);
                        arr_41 [6LL] &= (~(((/* implicit */int) (short)-11776)));
                    }
                    arr_42 [i_5] [i_5] [i_9] = ((_Bool) ((((/* implicit */_Bool) (signed char)-89)) || (((/* implicit */_Bool) (short)-22910))));
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4 - 2] [i_5])) || (((/* implicit */_Bool) ((arr_33 [(signed char)2]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 127778556U)) ? (2777303593U) : (127778573U)))))))));
                    var_19 *= ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_5] [i_5])) % (((/* implicit */int) var_3))))), (arr_29 [i_5] [i_5] [2ULL] [i_4 - 2] [i_4]))));
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 15; i_11 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_12 = 3; i_12 < 13; i_12 += 1) 
                    {
                        for (short i_13 = 2; i_13 < 15; i_13 += 1) 
                        {
                            {
                                arr_52 [i_4] [i_5] = ((/* implicit */short) ((arr_38 [i_4] [i_5] [i_11] [i_12 - 1] [i_13]) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) arr_38 [i_4] [i_5] [i_11 - 2] [i_12 + 1] [i_13]))));
                                arr_53 [i_12] [i_11 - 1] [i_12] [i_12 - 3] [i_5] [i_5 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_4] [i_13] [i_11] [i_5] [i_13])) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1784072252))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_4 - 1] [i_5 - 2] [i_11 - 1])) ? (932779334805122960ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8153)))));
                    arr_54 [i_5] [i_11 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_4] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_11 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11 - 1] [i_11 - 1] [i_4 - 3] [(_Bool)1] [i_5 - 2]))) : (arr_49 [i_4] [i_4] [i_4 + 2] [i_4 - 2] [i_4 + 1])));
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 2) 
                {
                    arr_57 [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) arr_27 [i_4] [i_4 - 2]);
                    var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)6861))) < (-1939603567465546826LL)));
                }
                arr_58 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_5 - 1] [i_5] [i_5] [i_4])) ? (((/* implicit */int) arr_46 [i_5 + 2] [i_5] [i_5] [i_4])) : (((/* implicit */int) arr_46 [i_5 + 3] [i_5] [i_5] [i_4]))))) ? (((((/* implicit */_Bool) 2756898058731148371ULL)) ? (min((((/* implicit */unsigned int) (short)-9397)), (95006722U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_49 [i_4 + 2] [i_4 - 1] [i_5 - 2] [i_4 - 1] [i_5])))))) : (((((/* implicit */_Bool) arr_33 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_5 + 2]))) : (4294967266U)))));
                var_22 ^= ((_Bool) ((min((arr_43 [i_4 - 3] [i_4 + 1] [i_5]), (((/* implicit */long long int) var_5)))) == (((/* implicit */long long int) ((/* implicit */int) arr_55 [(signed char)10] [i_4] [i_4] [i_4])))));
            }
        } 
    } 
}
