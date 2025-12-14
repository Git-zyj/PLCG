/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18698
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1] [i_2]))));
                    var_20 = ((/* implicit */_Bool) arr_4 [i_2] [i_2]);
                    var_21 = ((((unsigned int) 17247280733192525900ULL)) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 13)))));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_1] [i_1]));
                    var_22 = ((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0]))));
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min(((-(arr_3 [i_3] [i_3]))), (((/* implicit */int) ((unsigned short) arr_1 [i_1] [i_1])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_15 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */int) ((unsigned long long int) arr_10 [i_1] [i_1] [(signed char)5]));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) : (arr_6 [i_3] [i_1] [i_0])));
                            arr_18 [i_0] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_4] [i_0])) ? ((+(((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_5] [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) 10233437867264753139ULL)) && (((/* implicit */_Bool) (short)14932)))))));
                        }
                        for (short i_6 = 4; i_6 < 9; i_6 += 1) 
                        {
                            arr_21 [i_1] [i_0] [i_1] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_19 [i_6 - 2] [i_6 - 2] [i_6 - 3] [i_6 - 4] [i_6 - 2])))), (((/* implicit */int) arr_0 [i_6]))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = arr_16 [i_6] [i_6 - 1];
                        }
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_25 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (((((/* implicit */_Bool) (signed char)-90)) ? (4095) : (-1992919808))) : (((/* implicit */int) (_Bool)1)))));
                            var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_7])) - (((/* implicit */int) arr_0 [i_7]))))), (((min((((/* implicit */unsigned long long int) (short)11552)), (arr_23 [0LL] [i_1] [i_1] [i_1] [0LL]))) / (((/* implicit */unsigned long long int) ((int) (signed char)-53)))))));
                            var_27 *= max((((((/* implicit */_Bool) arr_2 [i_4] [i_7])) ? (arr_12 [i_0] [i_1] [i_3] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_3] [i_4])))), (((/* implicit */unsigned long long int) ((_Bool) arr_3 [(_Bool)1] [i_7]))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40705))) : (2784481703U)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 2; i_8 < 10; i_8 += 2) 
                        {
                            arr_29 [i_8] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) (unsigned char)210)) ? (arr_3 [i_1] [8U]) : (arr_28 [i_8] [i_8] [i_4] [i_3] [(_Bool)1] [i_0])))))));
                            var_29 = ((/* implicit */unsigned char) ((signed char) ((_Bool) arr_23 [i_0] [i_8] [i_8 + 1] [i_8 + 1] [i_0])));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-101))))) ? (2237917034U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15965))))), (((/* implicit */unsigned int) min((arr_16 [i_8] [i_8 - 2]), ((!((_Bool)1))))))));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)116)), (-11)))) != (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [(unsigned short)9] [(short)4] [i_9])) ? (arr_5 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84)))))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_0] [i_0] [i_1] [i_3] [i_1] [i_9]))) : (18446744073709551596ULL)))));
                        var_31 = ((/* implicit */signed char) max((((/* implicit */long long int) ((5752620448882399367ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_3])))))), (max((min((((/* implicit */long long int) (_Bool)1)), (-2771942390190464083LL))), (((/* implicit */long long int) (-(arr_5 [i_3]))))))));
                        var_32 = ((/* implicit */unsigned long long int) arr_25 [i_1] [i_3] [i_3] [i_0] [i_1]);
                        var_33 = ((/* implicit */short) ((max((arr_19 [i_0] [i_1] [i_0] [i_0] [i_9]), (arr_19 [i_0] [i_1] [i_0] [i_9] [i_9]))) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) : (17485980253828594381ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1])))))) : ((+(18U))))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    arr_36 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_11 [i_0] [i_0] [0U] [(_Bool)1]) ? (arr_3 [i_10] [i_10]) : (arr_34 [i_0] [i_0] [i_0])));
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_24 [i_0] [i_10] [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_1])) : (arr_28 [i_10] [(_Bool)0] [i_10] [i_10] [i_10] [i_10])))));
                    arr_37 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_10] [i_10] [i_1]))) * (arr_32 [i_0] [i_1] [i_1] [i_10])));
                }
                for (unsigned int i_11 = 3; i_11 < 10; i_11 += 2) 
                {
                    var_35 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-98)), (arr_26 [i_0] [i_0] [i_0] [i_11] [i_11])))))))));
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_1] [i_0])) ^ ((~(((/* implicit */int) (_Bool)1)))))))));
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (-((-(((((/* implicit */int) arr_1 [6ULL] [i_0])) >> (((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
                    arr_40 [i_0] [i_0] [i_1] [i_11] = ((/* implicit */short) (~(1878152938)));
                    var_38 = arr_20 [i_0] [(short)10] [(short)10] [(short)10] [(short)10];
                }
                var_39 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_33 [i_1]))))));
                arr_41 [8U] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && ((_Bool)1))) ? ((+(((/* implicit */int) (signed char)103)))) : (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_1] [(short)1]))))) < ((~(4165677084U))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
    {
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            {
                var_40 = (-(4493829512859676105ULL));
                var_41 = ((/* implicit */short) (+(((unsigned int) arr_46 [i_12] [i_13]))));
            }
        } 
    } 
    var_42 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (4294967295U))))))));
}
