/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120768
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
    var_17 = ((/* implicit */short) (+(max(((-(((/* implicit */int) var_13)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_4))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = (-((-(((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (max((((/* implicit */unsigned int) (+(arr_0 [i_0] [i_0])))), (var_3))) : (((arr_2 [i_0] [19ULL]) - (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
    }
    var_19 = var_4;
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)65529)))))))) ^ (var_7))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_17 [i_3] [i_5] = arr_16 [i_1] [i_1] [i_1] [i_4] [i_5];
                                var_21 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65529)) / (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) arr_7 [i_1] [i_2 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27)) || (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1]))))))));
                                arr_18 [i_1] [i_1] [i_3] [i_3] [i_4] [i_4] [i_5] = ((unsigned char) ((((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3])))))));
                                arr_19 [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((arr_14 [i_1] [i_2] [i_3] [i_4] [i_3]), (arr_8 [i_2] [i_3] [(unsigned short)7])))) ? ((+(((/* implicit */int) (short)-15159)))) : (((/* implicit */int) min((arr_16 [i_1] [i_2] [i_3] [i_3] [i_5]), (var_5)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    arr_22 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2 - 1] [i_2] [i_6] [i_6] [i_6] [i_6]))) & (((unsigned long long int) arr_7 [i_2 + 1] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_2 - 1] [i_2 + 1] [i_1] [i_6])) : (((/* implicit */int) arr_15 [i_1] [i_6] [i_6] [i_6] [i_2 - 1] [i_6]))))) : (((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 1])) ? (arr_9 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            arr_29 [i_6] = ((/* implicit */_Bool) max((arr_24 [i_6]), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_12 [i_1] [i_6] [i_6])) ^ (((/* implicit */int) var_2)))), ((-(((/* implicit */int) (unsigned short)11)))))))));
                            var_22 = ((/* implicit */short) ((int) min((arr_9 [i_6]), (max((var_16), (arr_24 [i_7]))))));
                            var_23 = ((/* implicit */short) max((min((((/* implicit */int) arr_1 [i_8] [i_8])), (var_11))), (((/* implicit */int) max((arr_12 [i_2 - 1] [i_2] [i_2]), (arr_12 [i_2 + 1] [i_2 + 1] [(short)1]))))));
                            arr_30 [i_6] = arr_27 [(_Bool)1] [i_2 - 1] [i_2 - 1] [i_7] [i_8];
                        }
                        var_24 = ((/* implicit */unsigned char) -4917099341120178042LL);
                        var_25 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_23 [i_2] [i_6] [i_2] [i_2 + 1] [i_1])) ? (arr_20 [i_1] [i_6] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_2] [i_6] [i_6])) & (var_11)))))) && ((!(((/* implicit */_Bool) arr_14 [(unsigned char)5] [i_2] [(unsigned char)5] [i_6] [i_6]))))));
                        var_26 = (i_6 % 2 == zero) ? (((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) arr_1 [i_2] [i_6])) ? (arr_20 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))))) << (((((arr_9 [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [(_Bool)1] [i_2]))))) - (3327010614U))))))) : (((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) arr_1 [i_2] [i_6])) ? (arr_20 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))))) << (((((((arr_9 [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [(_Bool)1] [i_2]))))) - (3327010614U))) - (273542111U)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        arr_33 [i_1] [i_2] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1])) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_1] [i_2])))))));
                        arr_34 [i_1] [i_2] [i_6] [i_1] = (!(arr_16 [i_1] [i_2 + 1] [i_2] [i_6] [i_9]));
                        arr_35 [i_6] [i_6] [i_6] [i_1] = ((/* implicit */short) ((((unsigned int) arr_24 [i_2 - 1])) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_37 [i_1] [i_2] [i_6] [i_10]) ? (((/* implicit */int) arr_10 [i_6] [i_6] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_10])))) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)56))))))))) : ((-(-3910131694017130405LL)))));
                        arr_40 [i_1] [i_2 + 1] [i_6] [i_10] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_27 [i_1] [i_2] [i_6] [i_10] [i_10])) ? (((((/* implicit */_Bool) (signed char)-31)) ? (1026952840) : (((/* implicit */int) (short)37)))) : (((/* implicit */int) ((short) var_8)))))));
                    }
                    arr_41 [i_1] [i_1] [i_2 + 1] [i_6] = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) arr_25 [i_6] [i_2 - 1] [i_6])))));
                }
                for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
                        {
                            {
                                arr_51 [i_1] [i_2] [i_12] [i_12] [i_13] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) ((unsigned int) (signed char)-19)))), (max((arr_42 [i_2] [i_2 - 1] [i_2] [i_2]), (((/* implicit */unsigned int) var_11))))));
                                var_29 = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_8 [i_2] [i_2] [i_2 + 1])))), (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_12])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_12]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            {
                                arr_57 [i_1] [i_1] [i_1] [i_11] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65529)), (arr_42 [i_2] [i_2 - 1] [i_2] [i_2])))) ? (((arr_52 [i_2 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1]))))) : (min((arr_52 [i_2 + 1]), (((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_2 + 1]))))));
                                arr_58 [i_1] [i_2] [i_11] [i_14] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_28 [i_2 + 1] [3] [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]))) == ((+(((/* implicit */int) arr_28 [i_2 - 1] [(short)6] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                                arr_59 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_14 [i_2 + 1] [i_2] [i_2 + 1] [i_11] [i_11])))) & (((/* implicit */int) max((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */signed char) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */unsigned int) ((short) min((arr_14 [i_1] [i_2] [i_2] [i_2 + 1] [i_1]), (((/* implicit */unsigned short) arr_43 [i_2 - 1] [i_2 - 1] [i_1])))));
                var_31 *= ((/* implicit */unsigned long long int) max(((unsigned char)4), (((/* implicit */unsigned char) (_Bool)1))));
                var_32 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_50 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [2U] [i_2] [i_2 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_39 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
            }
        } 
    } 
}
