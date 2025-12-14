/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169085
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
    var_12 = ((/* implicit */_Bool) var_8);
    var_13 += ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) min((max((arr_2 [i_0]), (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (14486405180592616674ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) max((arr_6 [i_2 - 4] [i_1 + 1]), (((/* implicit */int) min((arr_8 [i_0] [i_0]), (((/* implicit */unsigned short) var_9))))))))));
                        arr_13 [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((var_7), (arr_8 [(signed char)12] [i_1 + 1])))), (((((/* implicit */_Bool) max((6143952131505326741LL), (((/* implicit */long long int) 2147483635))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)6] [(unsigned char)6]))) : (var_8)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_17 [i_0] [i_0] [i_1] [i_1 - 1] [i_1 + 1] [i_5] [i_5]), (arr_17 [i_0] [i_0] [i_1] [i_1 - 2] [4LL] [i_1 - 2] [i_4 - 2])))) ? (((/* implicit */unsigned long long int) max((((unsigned int) arr_10 [i_0] [i_1 + 1] [7] [i_5])), (((/* implicit */unsigned int) var_2))))) : (max((3960338893116934921ULL), (var_8)))));
                                arr_18 [i_0] [i_1] [i_1] [i_4 - 1] [i_1] = max((min((3960338893116934929ULL), (((/* implicit */unsigned long long int) arr_11 [i_1 + 1] [i_2 + 2])))), (((/* implicit */unsigned long long int) arr_11 [i_1 - 1] [i_2 + 3])));
                            }
                        } 
                    } 
                    var_15 -= ((/* implicit */unsigned int) ((short) var_5));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_16 &= ((/* implicit */unsigned short) var_5);
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_11), (arr_6 [i_2 + 1] [i_1 - 1])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [(short)1] [i_2] [i_1] [i_0] [i_0])) ? (var_11) : (((/* implicit */int) var_2))))), (min((3960338893116934964ULL), (14486405180592616662ULL))))))))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) 1326364190U)) ? (((/* implicit */int) (signed char)-101)) : (-405073761))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_3))))))), (((/* implicit */int) var_1))));
                            var_19 -= ((/* implicit */short) (+(((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_1)))))));
                        }
                        for (signed char i_8 = 2; i_8 < 12; i_8 += 3) 
                        {
                            arr_26 [i_8] [i_6] [(unsigned short)5] [2LL] [i_0] &= ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 4] [i_8 - 1])) >= (((/* implicit */int) arr_8 [i_8 - 2] [i_1 - 2]))))), (((unsigned char) arr_8 [i_8 - 2] [i_1 - 1]))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_14 [i_2 - 4]))));
                            var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)4064)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((((/* implicit */_Bool) 65520)) ? (((/* implicit */int) var_4)) : (arr_10 [i_2 + 1] [i_2 + 3] [i_2 + 3] [(unsigned short)3])))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((int) 5058901745824491780ULL)) & (((/* implicit */int) (_Bool)1))))) ? (min((max((((/* implicit */long long int) arr_4 [i_0] [i_1])), (arr_14 [i_8]))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_2 + 3] [i_1 - 2] [i_1] [i_0] [i_0] [i_0])) ? (arr_23 [0ULL] [i_2 + 3] [i_1 + 1] [i_1] [i_1] [i_0] [i_0]) : (arr_23 [i_8 + 2] [i_2 - 2] [i_1 + 1] [i_1 + 1] [(short)0] [i_1] [i_1]))))));
                        }
                        arr_27 [i_6] [4ULL] [i_1] [i_0] = ((/* implicit */unsigned long long int) (signed char)19);
                        arr_28 [i_0] [i_0] [i_2 - 1] [i_6] = ((/* implicit */_Bool) (unsigned short)61490);
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 1; i_10 < 11; i_10 += 3) 
                        {
                            arr_34 [i_10] [i_9 - 1] [i_1] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_25 [i_2 - 1] [i_2 - 1]) / (((/* implicit */unsigned int) var_11))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (unsigned short)49800))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_0))));
                        }
                        for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            var_25 *= ((/* implicit */int) ((((/* implicit */int) arr_16 [i_2 + 1] [i_1] [i_2])) != (((/* implicit */int) (short)-32038))));
                            var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_35 [i_1 - 2] [i_1] [(_Bool)1] [i_2 - 3] [(_Bool)1] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)0))))))));
                        }
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)45)) ? (((((/* implicit */_Bool) var_10)) ? (6819700128197696995LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2] [i_9 - 1] [(unsigned short)10] [i_2 + 1] [i_1 + 1])))));
                    }
                }
            } 
        } 
    } 
}
