/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18895
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
    var_16 = ((/* implicit */int) var_10);
    var_17 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */int) max((var_18), (min(((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))), (((/* implicit */int) ((4149038579U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52230))) : (-8373238784452092758LL))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) (_Bool)1))), (((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_4 [i_1]))))))))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned int) min(((+(arr_1 [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61970)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1))))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((-16) <= (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])))))) | ((((!(((/* implicit */_Bool) -15LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (var_11))))) : (((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (short i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_5] [i_6] [i_7] = arr_14 [i_1] [i_1];
                            var_21 = ((/* implicit */int) ((((_Bool) arr_3 [(_Bool)0])) && (((/* implicit */_Bool) (short)-10725))));
                            var_22 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (!((_Bool)1)))) : (arr_19 [i_0] [i_7 + 1] [i_5] [i_0] [i_0])));
                            arr_23 [i_0] [i_0] [i_1] [3] [i_6] [2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_1] [i_5] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_19 [i_7 + 1] [i_1] [i_5] [i_0] [i_7])) : (1709510047U)));
                            var_23 -= ((/* implicit */short) ((3709740282U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30899)))));
                        }
                        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26943)))))));
                            arr_27 [i_0] [i_8] [i_8] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_6] [i_8]);
                        }
                        for (unsigned char i_9 = 3; i_9 < 16; i_9 += 3) 
                        {
                            arr_30 [i_9] [i_9 - 1] [i_9] [i_9] [i_0] [i_9] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((-8373238784452092738LL) + (9223372036854775807LL))) << (((145928716U) - (145928716U))))))));
                            arr_31 [i_0] [i_1] [i_0] [(unsigned short)11] = ((/* implicit */unsigned short) ((arr_29 [i_0] [i_0] [i_0] [i_0]) & (arr_29 [i_0] [i_0] [i_0] [i_0])));
                            arr_32 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_9 - 3] [i_5] [i_6] [i_9 + 1])) ? (((/* implicit */int) (short)1213)) : (975986666)));
                        }
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            arr_36 [i_0] [13] [i_0] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_35 [i_0] [i_1] [i_1] [i_6] [i_10] [i_6] [i_6]))));
                            var_25 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)26934)) - (((/* implicit */int) arr_35 [i_10] [i_6] [i_6] [i_5] [i_5] [i_1] [i_0])))) * (((/* implicit */int) (_Bool)1))));
                        }
                        var_26 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -949487035)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (unsigned short)34657))))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 2; i_11 < 16; i_11 += 4) 
                        {
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)153)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))));
                            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */int) (unsigned short)16383)) + (((/* implicit */int) (unsigned short)26943))))));
                            var_29 *= ((/* implicit */_Bool) var_9);
                            arr_39 [i_11] [i_0] [(unsigned short)2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_5] [i_0] [i_5] [i_11 + 1] [i_11 - 2] [i_11])) ? (16176322937619725158ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [i_0] [11] [i_6] [i_11 - 2] [i_11 - 1])))));
                            arr_40 [i_0] [i_1] [i_5] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_5] [i_6] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (8373238784452092760LL))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 16; i_12 += 2) 
                        {
                            arr_44 [i_1] [i_0] [i_1] [i_1] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) (signed char)-60))))) ? (((/* implicit */int) (unsigned short)49156)) : (((/* implicit */int) arr_26 [i_0] [i_12 - 1] [i_12 - 1] [i_12] [i_12])));
                            arr_45 [i_0] = ((/* implicit */unsigned long long int) var_10);
                            arr_46 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)38612))) % (8436237421134769668LL)))) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_35 [i_12 - 1] [i_5] [i_5] [i_1] [i_1] [i_0] [i_0]))));
                            arr_47 [i_12 + 1] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((6093242765796486435ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])) > (arr_7 [i_0] [i_5] [i_0] [i_12 - 1])))))));
                        }
                    }
                    for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        arr_51 [i_0] [i_1] [i_0] [i_5] [i_13] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                        arr_52 [i_0] [i_1] [i_1] [i_0] [i_13] [i_0] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_0] [i_1]))));
                    }
                    arr_53 [i_0] [i_1] [i_0] [0LL] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_5] [i_5] [i_5]))));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_1] [i_5])) ? (arr_18 [i_0] [i_0] [i_5] [i_0] [i_0]) : (arr_18 [i_0] [i_0] [i_1] [i_1] [(short)15])));
                }
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                {
                    var_31 *= ((/* implicit */_Bool) min((((unsigned long long int) arr_56 [i_1] [i_1] [i_14])), (((/* implicit */unsigned long long int) arr_56 [i_1] [i_1] [i_1]))));
                    var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                }
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38592))) % (18446744073709551615ULL))))));
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_1] [i_0] [i_1]))) : (((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [i_0] [i_0])))));
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (short)16272))));
            }
        } 
    } 
    var_36 -= ((/* implicit */unsigned short) (!((((((_Bool)1) || (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) var_3))))));
}
