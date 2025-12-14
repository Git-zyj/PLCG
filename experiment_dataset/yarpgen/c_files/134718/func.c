/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134718
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
    var_17 = ((/* implicit */unsigned long long int) ((int) ((min((1255120054), (((/* implicit */int) var_15)))) << (((((unsigned long long int) (unsigned char)100)) - (100ULL))))));
    var_18 = ((/* implicit */signed char) 1255120065);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */long long int) arr_8 [i_0 + 1] [6] [i_2]);
                    arr_11 [(unsigned short)9] [i_0 + 1] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_2]);
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((arr_8 [i_0] [(unsigned char)12] [i_2]) <= (max((-1255120066), (arr_8 [i_0 + 1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) % ((-9223372036854775807LL - 1LL))))))) : (((arr_7 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 1]) ? (arr_6 [i_0 - 1]) : (arr_6 [i_0 - 1]))))))));
                }
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                {
                    arr_14 [(short)8] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned char)192)) >> (((((/* implicit */int) (unsigned char)36)) - (34)))))));
                    arr_15 [i_0] [i_0] [i_3] = max((((arr_2 [i_0 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((846864568U), (((/* implicit */unsigned int) (unsigned short)15876))))) ? (((((/* implicit */int) arr_5 [i_0])) & (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) (signed char)14))))))));
                }
                for (signed char i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        var_20 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (short)-11935)) : (((/* implicit */int) (unsigned char)63)))) / (((var_6) ? (((/* implicit */int) (short)11916)) : (((/* implicit */int) arr_3 [(unsigned char)12] [i_4] [i_5]))))));
                        arr_21 [i_0] [i_1] [i_4] [i_5] &= ((/* implicit */long long int) var_3);
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_5] [(_Bool)1] [i_1])) >> (((((/* implicit */int) var_13)) - (206)))))) / (var_1)));
                        arr_22 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((((/* implicit */_Bool) (signed char)111)) ? (5561645553249661686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (-1) : (((/* implicit */int) (signed char)9))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_23 -= arr_23 [i_0 + 1] [i_1] [(signed char)1] [i_4] [i_6] [i_6];
                        var_24 = ((/* implicit */int) max((((/* implicit */long long int) max((max((1064968044), (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_4] [i_6])))), (((/* implicit */int) ((18446744073709551605ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27945))))))))), (max((((/* implicit */long long int) max(((short)11916), (((/* implicit */short) (unsigned char)131))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1]))) / (-3913308476365387567LL)))))));
                        arr_25 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_4] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_0] [i_0] [i_4] [i_6]))) >= (((/* implicit */long long int) ((/* implicit */int) ((-1373146120) != (((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2] [i_0])) + (((/* implicit */int) arr_19 [i_0 + 2] [i_0 - 1] [i_0 + 1] [(_Bool)1] [i_0]))))) : (((long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8))))));
                    }
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (_Bool)1))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_30 [(_Bool)1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(max((4294967286U), (((/* implicit */unsigned int) arr_13 [i_0 + 1]))))));
                                arr_31 [i_0] [12LL] [i_4] [i_7] [i_8] = ((/* implicit */unsigned int) arr_1 [i_0]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1373146120)) < (3236215152939137086ULL)))), (var_7)));
                    arr_32 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_13 [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_0 + 1])) : (((/* implicit */int) (signed char)127)))) > (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)17960)))))));
                }
                for (signed char i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 13; i_11 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) ((arr_2 [i_0]) | (((arr_2 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77)))))));
                                arr_40 [i_0] [1U] [i_0] = ((/* implicit */signed char) 1373146125);
                                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_1] [i_0 + 2] [i_9] [i_11 + 1]))) != (var_8)))) + (((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_11])))))))));
                                var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) 9154732985864368655LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))) : (11U)));
                            }
                        } 
                    } 
                }
                var_31 = ((/* implicit */unsigned short) max((-1857750237), (((((/* implicit */int) arr_28 [i_0 + 1] [i_0] [i_0] [i_0])) ^ (min((-2147483637), (((/* implicit */int) arr_19 [i_0 - 1] [i_0] [i_0] [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 2; i_12 < 13; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        {
                            arr_48 [i_0] [i_1] [i_0] [i_13] = ((/* implicit */unsigned short) ((-2147483634) & (((/* implicit */int) (signed char)117))));
                            arr_49 [i_0] [i_1] [i_12] [(unsigned short)1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (+(arr_20 [3U])))) ? (9154732985864368681LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        {
                            var_32 ^= ((/* implicit */int) (unsigned char)89);
                            var_33 ^= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)56841))));
                            arr_55 [i_0] [(signed char)13] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_43 [(unsigned short)7] [i_15] [i_0]), (arr_43 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) (unsigned char)114)) : (((arr_26 [i_0 + 2]) ? (((/* implicit */int) (short)17612)) : (((/* implicit */int) arr_26 [i_0 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
