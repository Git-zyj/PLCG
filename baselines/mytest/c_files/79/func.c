/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/79
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
    for (short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_11 [i_1] [i_1] [(unsigned char)15] = ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) && (((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0 - 1] [i_2])))))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_12))))));
                    var_20 = ((/* implicit */short) ((var_19) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) ((unsigned char) var_7))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        arr_14 [(signed char)0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0 - 2] [i_2] [i_3 - 1])), (arr_1 [i_0 - 1]))))));
                        arr_15 [i_0] [(signed char)0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((arr_5 [i_0] [(unsigned char)14]), (((/* implicit */unsigned long long int) var_4)))))))));
                        arr_16 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_16)))));
                    }
                    arr_17 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((short) arr_6 [i_0] [i_1]))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 4193792ULL)))))) << (((arr_10 [(short)8] [i_1] [8]) - (2093232842)))));
                }
                for (unsigned short i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) max(((+(arr_10 [i_0] [i_0 + 2] [i_0 - 2]))), (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 4])) ? (arr_10 [i_0] [10] [i_0 + 2]) : (arr_10 [i_0] [i_0 - 1] [i_0 - 3])))));
                    var_22 |= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1])) ? (arr_2 [i_4] [6LL]) : (arr_4 [(short)7]))) < ((+(var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))) : (((long long int) (!(((/* implicit */_Bool) arr_7 [i_4])))))));
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0 - 3]))));
                }
                arr_21 [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (17ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)172))))) : (((unsigned int) var_14)))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_9)))))))))))));
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((var_0), (((/* implicit */short) var_18)))))))));
        var_26 *= max((((/* implicit */unsigned long long int) (+(min((var_2), (((/* implicit */long long int) var_7))))))), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551579ULL))), (((/* implicit */unsigned long long int) ((var_14) != (((/* implicit */long long int) 0))))))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((unsigned char) ((((/* implicit */int) arr_13 [i_5] [i_5])) - (((/* implicit */int) arr_13 [i_5] [i_5])))))));
        arr_25 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_5] [i_5])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            {
                var_28 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_28 [i_7])) ? (arr_28 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) / (((((/* implicit */int) var_9)) - (arr_27 [i_6] [i_7]))))))));
                /* LoopSeq 2 */
                for (int i_8 = 3; i_8 < 17; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_29 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_40 [(short)12])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_31 [i_6]))))) && (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) var_7)))))));
                            }
                        } 
                    } 
                    var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21423)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)4095))));
                    arr_41 [i_8] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_13))))));
                }
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 18; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_18))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_16))))))));
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_6] [i_7] [i_12 + 1] [i_12 + 1] [i_13] [i_11])) ? (((/* implicit */unsigned long long int) var_19)) : (((((/* implicit */_Bool) arr_36 [i_6] [i_6] [i_6] [i_6] [(short)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_46 [i_6] [i_7] [i_6] [i_12 + 1] [i_13] [i_11])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (((arr_36 [i_12 + 1] [i_13] [i_13] [i_13] [i_12 + 1]) + (((/* implicit */unsigned long long int) arr_28 [i_12 - 1]))))));
                            }
                        } 
                    } 
                    var_34 = var_2;
                }
                /* LoopSeq 1 */
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    arr_54 [17ULL] [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned short) (!(((((/* implicit */int) arr_31 [i_14])) < (var_16))))));
                    var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-19))))) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))))));
                }
                arr_55 [(unsigned char)1] [i_7] = ((/* implicit */int) (!(((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_44 [i_6] [i_6] [(unsigned short)16])))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_28 [i_6])))))))));
            }
        } 
    } 
}
