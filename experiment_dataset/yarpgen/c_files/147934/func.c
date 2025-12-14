/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147934
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
    var_12 ^= ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [(_Bool)1] |= ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((-(12903323140986693325ULL)))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_2]), (arr_1 [i_0]))))) ^ (max((((/* implicit */unsigned long long int) arr_5 [i_2] [i_1] [i_0])), (5543420932722858295ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((min((((/* implicit */long long int) arr_1 [i_1])), (var_3))) & (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) arr_5 [i_0] [i_3] [i_3])))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                        {
                            arr_15 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (5543420932722858315ULL)))));
                            var_14 ^= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_7 [i_3])), (max((((/* implicit */long long int) arr_7 [i_2])), (arr_0 [5ULL] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (arr_3 [i_2] [i_2])))) <= (max((var_2), (var_7))))))));
                            arr_16 [i_4] [(_Bool)1] [i_3] [i_1] [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)0)), ((short)-25897)))), (min((3829843512U), (((/* implicit */unsigned int) (unsigned char)58))))))), (((unsigned long long int) ((((/* implicit */int) var_10)) - (921670782))))));
                        }
                        for (int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_13 [i_0] [2] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) max((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) var_4))))))), ((~(((((/* implicit */int) var_4)) | (((/* implicit */int) var_10))))))));
                            var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (16777215LL)))) : (max((5543420932722858293ULL), (((/* implicit */unsigned long long int) arr_17 [5ULL] [5ULL] [i_0] [i_3] [(unsigned short)5]))))));
                            arr_20 [i_5] [i_0] [i_2] [i_0] [(unsigned char)3] = ((/* implicit */_Bool) (unsigned short)2);
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((int) arr_7 [i_3])))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [6LL] [i_6] [i_7])) : (((/* implicit */int) var_8)))), (arr_5 [i_0] [i_0] [i_7])))), (max((((((/* implicit */_Bool) -867504191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_23 [i_6]) : (((/* implicit */int) arr_7 [i_2]))))))))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_1 [i_0]))));
                                arr_27 [i_0] [i_0] [i_2] [i_6] [i_6] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_6] [i_7])) : (((/* implicit */int) arr_25 [i_0]))))), (((long long int) arr_24 [i_2])))), (((/* implicit */long long int) var_2))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_8 = 2; i_8 < 7; i_8 += 4) 
                    {
                        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_22 [i_8] [i_8] [i_8] [i_8]) : (((((/* implicit */unsigned long long int) 3269177817U)) & (arr_22 [i_8] [i_8] [i_8] [i_8])))));
                        arr_30 [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) max((arr_24 [i_0]), (((/* implicit */unsigned int) var_7))))) ? ((~(((/* implicit */int) arr_6 [i_0] [i_2] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_1] [i_2] [i_8])) ? (((/* implicit */int) arr_21 [i_0] [i_0])) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((unsigned int) (unsigned char)220)) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */int) ((_Bool) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((((arr_23 [i_0]) / (((/* implicit */int) arr_12 [i_8] [i_2] [i_2] [i_0])))) - (((arr_26 [i_8] [i_1] [i_1]) / (var_2))))))))));
                        var_21 = max((var_2), (arr_23 [i_0]));
                        arr_31 [i_0] [i_0] = var_9;
                    }
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_9)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)19298)))), (var_1)))))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((var_7) - (1346946770)))))), (var_6))))))));
}
