/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155124
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_10 = max(((+(((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_0])));
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_8))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            {
                arr_11 [i_2] = ((/* implicit */signed char) var_3);
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 2; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_12 = ((/* implicit */unsigned short) max((max(((+(((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [3]))) != (arr_1 [i_1])))))), (((/* implicit */int) max(((signed char)-6), ((signed char)127))))));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_1])), (arr_7 [i_3])))) ? (var_1) : (((arr_0 [i_4] [i_2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)24166))))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32767)))) : ((+(((/* implicit */int) arr_0 [i_4 - 1] [i_5 + 1]))))));
                        }
                        for (short i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_6] [11U] [i_2] [11U] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_16 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1]), (((/* implicit */short) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1087981879))))) : ((+(-949264744)))))) : ((((!(((/* implicit */_Bool) var_7)))) ? (arr_8 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_6] [(unsigned char)9] [i_2])) != (((/* implicit */int) arr_18 [i_1] [i_2] [i_1] [i_2]))))))))));
                            arr_22 [i_2] [(unsigned char)5] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_6 + 1] [i_2] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_2] [(short)9])))))))) != (((max((((/* implicit */unsigned long long int) var_6)), (arr_6 [i_1] [i_1]))) - (((/* implicit */unsigned long long int) var_1))))));
                            var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_18 [i_1] [i_2] [i_3] [i_2]) ? (-4504268288262413743LL) : (((/* implicit */long long int) arr_15 [i_2]))))) ? (arr_8 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_1] [i_4 + 2])) * (((/* implicit */int) (_Bool)1))))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_3] [i_4] [i_2])))));
                        }
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)96))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned short) ((-7026259884127715184LL) / (((/* implicit */long long int) var_1))))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_16 [i_1] [i_2] [i_3] [i_3] [i_7 - 1] [i_1])))))));
                    }
                    arr_25 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_9 [i_1] [i_2] [i_1])) - (((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (max((var_9), (((((/* implicit */_Bool) arr_2 [(unsigned char)3] [i_1])) ? (var_9) : (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_10 [i_1] [i_1])), (var_5))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    var_20 = ((/* implicit */int) ((((max((((/* implicit */long long int) var_0)), (arr_14 [7LL] [i_2] [7LL]))) / (max((arr_7 [i_1]), (((/* implicit */long long int) var_5)))))) - (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2])))));
                    var_21 = ((/* implicit */unsigned char) arr_18 [i_1] [i_2] [i_8] [i_2]);
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_11 = 3; i_11 < 9; i_11 += 1) 
                            {
                                var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_29 [i_10] [i_9] [i_9 - 1])) : (((/* implicit */int) arr_29 [i_1] [i_10] [i_9 - 2]))))) ? ((+(((/* implicit */int) arr_13 [i_2] [i_10] [i_11 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_34 [i_1] [i_1] [i_9] [i_10] [i_10])) != (((/* implicit */int) max((arr_19 [i_2] [i_1]), (((/* implicit */short) var_8))))))))));
                                var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((arr_33 [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 2] [i_9 + 2]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1])))))))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_11 - 2] [i_10] [i_1]), (min((((/* implicit */short) var_8)), (arr_19 [i_10] [i_10])))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1))));
                            }
                            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                            {
                                var_25 = ((/* implicit */signed char) arr_4 [i_1]);
                                var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_38 [i_9] [i_9 + 2] [i_9 + 2] [(signed char)10] [i_9 - 2] [i_9 - 1])) != ((+(((/* implicit */int) var_8)))))))));
                            }
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_9 - 1] [i_1]), (arr_6 [i_9 - 2] [i_9])))) ? (arr_6 [i_9 + 1] [i_9]) : (((((/* implicit */_Bool) arr_6 [i_9 + 1] [i_1])) ? (arr_6 [i_9 + 2] [i_9 - 1]) : (arr_6 [i_9 + 2] [(_Bool)1])))));
                            var_28 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_9 + 2] [i_2] [i_9 + 2])) ? (((/* implicit */int) arr_13 [i_9 + 2] [(signed char)0] [i_9])) : (((/* implicit */int) arr_13 [i_9 + 2] [i_2] [i_9]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_9] [(signed char)7] [i_2])) ? (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [11U] [i_1])) : (((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_35 [i_10] [(short)6])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
