/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107904
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
    var_13 = ((/* implicit */unsigned short) 2515594899175774108ULL);
    var_14 = ((/* implicit */unsigned short) var_4);
    var_15 = ((/* implicit */_Bool) ((((var_8) >= (((/* implicit */long long int) 0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 536838144U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8))) < (((/* implicit */long long int) var_9)))))) : (var_7)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_4 - 1] [i_0]);
                                var_17 = ((/* implicit */long long int) arr_4 [i_3] [i_1]);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_1]);
                }
                for (signed char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1] [i_5])) ? (arr_2 [i_0 - 2] [i_1] [i_5]) : (arr_2 [i_0 + 1] [i_1] [i_1])));
                    var_18 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_5] [i_5])) : (arr_6 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5] [i_5])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (unsigned short)41734))))), (arr_2 [i_0] [i_1] [i_0]))))));
                    var_19 = 9868172051898822621ULL;
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_5 [i_0 - 1] [i_1]))));
                }
                /* LoopNest 3 */
                for (unsigned short i_6 = 4; i_6 < 11; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_0]);
                                arr_25 [i_1] = ((/* implicit */_Bool) max((min((arr_20 [i_8 + 2] [i_6 - 4] [i_0]), (arr_20 [i_8 + 1] [i_6 - 1] [i_6]))), (((((/* implicit */_Bool) arr_20 [i_8 - 1] [i_6 - 2] [i_1])) ? (arr_20 [i_8 - 1] [i_6 - 1] [i_6]) : (arr_20 [i_8 + 1] [i_6 - 2] [i_0])))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) (short)10221);
                var_23 = ((/* implicit */unsigned long long int) ((arr_19 [i_0] [i_0] [i_1] [i_0]) | (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_1])), (arr_19 [i_0] [i_1] [i_0] [i_1])))) ? (max((-1512993882), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (min((arr_10 [i_0]), (((/* implicit */int) (signed char)15)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_9 = 1; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10611))) ^ (arr_22 [i_0])))) : (0ULL)));
                    var_25 += ((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_28 [i_1] = ((/* implicit */short) arr_4 [i_1] [i_9]);
                    var_26 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
                }
                for (int i_10 = 1; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_11])) ? (arr_6 [i_0] [i_1] [i_10] [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_13 [i_0] [i_1] [i_10] [i_11] [i_10]))))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)10014), (((/* implicit */unsigned short) arr_27 [i_0] [i_0] [i_0]))))))))));
                        var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_0])), (arr_5 [i_10] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_1] [i_10] [i_1] [i_10] [i_10 - 1] [i_1]))) : (arr_22 [i_0]))), (((/* implicit */long long int) (unsigned char)145))));
                        arr_34 [i_0] [i_1] [i_10] [i_1] = ((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_0] [i_1] [i_0]);
                        arr_35 [i_0] [i_1] [i_1] [i_11] = 562915593682944ULL;
                        var_29 = ((/* implicit */short) ((arr_2 [i_10] [i_1] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32997)) && (((/* implicit */_Bool) (unsigned short)20036))))))));
                    }
                    for (short i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        arr_39 [i_0] [i_1] [i_1] [i_1] = 351655496;
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_33 [i_10 + 2] [i_10 + 2] [i_12] [i_10 + 2] [i_12] [i_12]), (arr_33 [i_10 + 1] [i_12] [i_10 + 1] [i_12] [i_12] [i_12])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10]))) | (1555753646U)))) : (((((/* implicit */_Bool) arr_33 [i_10 - 1] [i_10 - 1] [i_12] [i_12] [i_12] [i_10 - 1])) ? (-10LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_10 + 2] [i_10] [i_10 + 2] [i_12] [i_12] [i_12])))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        for (short i_14 = 3; i_14 < 11; i_14 += 2) 
                        {
                            {
                                arr_44 [i_1] [i_10] [i_10] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_43 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) ? (((/* implicit */int) arr_43 [i_14] [i_1] [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15742)) ? (((/* implicit */int) (short)8881)) : (((/* implicit */int) (unsigned short)4642))))) : (((((/* implicit */_Bool) 336547553U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_31 += ((/* implicit */unsigned int) (unsigned short)20196);
                                var_32 = ((/* implicit */signed char) 4077718652786961647LL);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((max((arr_26 [i_0] [i_0] [i_10] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34751)) ? (((/* implicit */int) arr_37 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65532))))))) == (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_1]))))))));
                }
                for (int i_15 = 1; i_15 < 10; i_15 += 1) /* same iter space */
                {
                    arr_47 [i_0] [i_0] [i_0] &= ((/* implicit */int) min((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_0])), (-6665254574112544359LL)));
                    var_34 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 + 1]);
                    arr_48 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) max((1974752060550681913ULL), (((/* implicit */unsigned long long int) ((262016U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_15 + 1] [i_15] [i_15] [i_15] [i_15]))))))));
                    arr_49 [i_0] [i_1] [i_15] [i_1] = ((/* implicit */short) max((arr_26 [i_15] [i_15] [i_15] [i_0]), (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0]))));
                }
            }
        } 
    } 
}
