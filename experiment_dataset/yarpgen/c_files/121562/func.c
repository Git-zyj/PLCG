/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121562
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_3] [i_4] |= ((/* implicit */unsigned int) max((((/* implicit */short) var_11)), ((short)1989)));
                                var_16 += ((/* implicit */signed char) (~(max((((/* implicit */int) (unsigned short)18924)), (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(short)7] [(short)7])) : (((/* implicit */int) var_0))))))));
                                var_17 *= var_9;
                                var_18 = ((/* implicit */_Bool) (unsigned short)18924);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                    arr_16 [i_0] [i_2] = ((/* implicit */int) (signed char)-19);
                }
                for (signed char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) var_0);
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_25 [(signed char)3] [i_6 + 1] [i_5] [20ULL] [i_7] [i_5] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_0 [i_1 - 3] [i_1 + 1]), (arr_0 [i_1 - 1] [i_1 + 1])))), (((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_1 - 3])) ? (((/* implicit */int) arr_0 [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 3]))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((1825824064) / (((/* implicit */int) (short)-16218))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7] [i_1 + 2])) ? (min((arr_21 [(unsigned short)16] [i_6] [i_6 + 1] [i_6]), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [5ULL] [i_1 + 3] [i_5]))))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) > (min((((/* implicit */int) max((arr_22 [i_8] [i_1] [(unsigned short)2] [i_0] [i_0]), (((/* implicit */short) var_11))))), (arr_7 [(signed char)11] [(signed char)11] [i_1] [(signed char)21])))));
                    /* LoopSeq 3 */
                    for (short i_9 = 1; i_9 < 20; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */short) (+(((/* implicit */int) max((arr_14 [i_1 - 4] [i_1 + 2] [i_9 + 2] [i_9 + 2] [i_8] [i_10]), (arr_14 [i_1 - 2] [i_1 - 2] [i_9 + 1] [i_0] [i_10] [i_1 - 2]))))));
                            var_24 = ((/* implicit */short) (signed char)115);
                            arr_34 [i_10] [i_9] [i_8] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) 2623551969U)) ? (197587419U) : (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [21U] [21U])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_19 [i_0] [(short)17] [i_8] [i_9] [(signed char)13])))))));
                        }
                        for (short i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            arr_37 [(signed char)23] [(short)1] [(unsigned short)21] [i_11] [i_8] [(short)1] [(unsigned short)21] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_0)), (arr_12 [i_11] [i_11] [i_11] [(signed char)15] [i_11]))) << (((((/* implicit */int) var_13)) - (59994)))))) ? ((~(((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (197587423U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [i_11] [i_9] [(short)0] [i_9 - 1] [i_9 + 4] [i_1 + 3] [i_11])))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) 1478390995)) <= (((((/* implicit */_Bool) min((((/* implicit */short) var_5)), ((short)22293)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_13))))) : (((long long int) 197587423U))))));
                        }
                        var_26 = ((/* implicit */signed char) min((4097379850U), (((/* implicit */unsigned int) (signed char)126))));
                    }
                    for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) arr_19 [i_12] [(unsigned short)8] [i_8] [(signed char)11] [i_12])) + (3883))) - (26))))) - (2147481282)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)46584)) & (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) max((var_10), (((/* implicit */short) var_11)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2] [(short)7])) : (((/* implicit */int) arr_3 [i_8]))))), (min((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)-9017))))))));
                        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 - 1])) ? (arr_23 [i_1 - 1] [i_1 - 1]) : (arr_23 [i_1 + 3] [i_1 + 2]))) : (((/* implicit */int) var_0))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_12])) ? (((((/* implicit */_Bool) arr_13 [i_12])) ? (((/* implicit */int) arr_13 [i_12])) : (((/* implicit */int) (signed char)101)))) : (((/* implicit */int) arr_13 [i_12]))));
                        arr_40 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */int) (~((-(var_4)))));
                        arr_41 [i_12] [i_12] [i_0] [i_0] [6] [i_12] = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [(unsigned short)20] [i_12] [i_1] [i_1] [(signed char)19] [i_0])), (var_6)))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))), ((+(((/* implicit */int) min((var_10), (((/* implicit */short) arr_0 [(short)18] [(signed char)6])))))))));
                    }
                    for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)9700)), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_8])) : (((/* implicit */int) arr_1 [9ULL])))) / (((/* implicit */int) arr_26 [i_0] [i_1 - 2]))))));
                        var_31 *= ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_11))))));
                    }
                }
                var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-23975)) ? (((/* implicit */int) (short)-11688)) : (((/* implicit */int) (signed char)-127))));
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((~(((((/* implicit */int) var_6)) | (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (short i_14 = 2; i_14 < 12; i_14 += 4) 
    {
        for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            {
                arr_49 [(unsigned short)4] [1] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((4ULL), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */int) ((signed char) ((short) (short)-30840)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_26 [i_14] [i_14 - 2]))))) ? (((arr_12 [(unsigned char)3] [i_15] [i_15] [(unsigned char)3] [i_14]) & (((/* implicit */int) arr_18 [i_14] [i_15] [i_15])))) : (((((/* implicit */int) arr_13 [i_14])) + (arr_12 [i_14] [i_14] [(short)13] [i_14] [(short)9])))))));
                /* LoopNest 2 */
                for (short i_16 = 1; i_16 < 11; i_16 += 4) 
                {
                    for (short i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [i_14] [(short)0] [(short)17] [i_14]))));
                            arr_56 [i_14] [i_15] [i_16] [(_Bool)1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_14 - 1] [i_14 - 1] [9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [i_16] [i_14] [i_14 - 2]))))) : (max((arr_31 [i_14] [i_15] [i_17] [i_17] [i_14]), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_54 [i_14] [i_15] [i_14] [i_16] [i_14])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_23 [i_17] [i_17]))))) : (((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                arr_57 [i_15] [i_14] = ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_22 [i_14 - 2] [(short)8] [(short)8] [i_15] [(unsigned short)17]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (short)-23969)))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_4))), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) ((var_4) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4)))))) : (((/* implicit */int) var_13))));
}
