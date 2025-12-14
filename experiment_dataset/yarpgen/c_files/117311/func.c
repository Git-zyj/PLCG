/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117311
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
    var_19 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_0 - 1] [i_1])) > (-2022472497)))) : (((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) arr_2 [(_Bool)1])))) : (min((var_17), (418422171))))));
                arr_7 [i_0] [i_1] [i_0 + 1] = ((/* implicit */signed char) var_18);
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2] &= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_1] [i_2] [i_4]), (((/* implicit */short) (signed char)109))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_3)) : (0ULL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (2814746564367758141LL)))) ? (932106363) : (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) arr_3 [i_2] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_16 [i_0 - 1])))))))));
                                var_20 *= ((/* implicit */signed char) ((min(((-(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_5 [i_0] [i_4]))))))) != (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [4] [i_0]))))) * (max((arr_15 [i_0 - 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) var_6))))))));
                                arr_18 [i_1 + 1] [i_1] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_14 [i_2] [i_2 + 3] [i_2] [i_2] [i_4]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_2 + 2] = ((/* implicit */long long int) var_14);
                }
                for (long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((short) 4294967295U));
                                var_22 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) arr_14 [i_0 - 1] [i_1] [i_5 + 3] [(signed char)12] [i_7 - 2]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (min((2516691911U), (((/* implicit */unsigned int) (signed char)19))))))) >= (((((/* implicit */_Bool) max((arr_26 [i_7] [i_7 - 1]), (((/* implicit */int) var_2))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_18))) + (-2814746564367758135LL))) : (((/* implicit */long long int) ((unsigned int) arr_10 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        arr_31 [i_1] [i_1] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2448127722U)) ? (((/* implicit */long long int) arr_10 [i_0 - 2])) : (2814746564367758116LL)))), (arr_0 [i_1 - 1]))), (((/* implicit */unsigned long long int) max(((~(2814746564367758141LL))), (((/* implicit */long long int) (-(-1326952873)))))))));
                        var_23 = ((/* implicit */unsigned short) var_8);
                        var_24 -= ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 932106386)) | (var_4)))) >= (max((0ULL), (((/* implicit */unsigned long long int) arr_20 [i_5] [(signed char)19] [i_5 + 1] [i_5 + 1]))))))), (arr_21 [i_0] [i_1 - 2] [i_5 - 1] [i_0])));
                        var_25 ^= ((/* implicit */unsigned short) (signed char)(-127 - 1));
                    }
                }
                /* vectorizable */
                for (signed char i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) var_12);
                    var_27 = ((/* implicit */long long int) ((arr_9 [(_Bool)1] [i_1] [i_0] [i_0 - 2]) - (((int) var_14))));
                }
                for (signed char i_10 = 1; i_10 < 20; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 2; i_11 < 22; i_11 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((339862123U), (((/* implicit */unsigned int) (signed char)-127))))), (max((((/* implicit */long long int) 16383U)), (-2814746564367758117LL)))))), (((unsigned long long int) ((short) (unsigned short)14104))))))));
                        var_29 = ((/* implicit */short) max(((~(((/* implicit */int) arr_21 [i_1] [i_10] [i_0] [i_1])))), (((/* implicit */int) (signed char)-25))));
                    }
                    var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((var_12) > (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (7731504475267031574ULL)))))))));
                    arr_41 [i_1] [(signed char)8] [i_1] [(short)7] = ((/* implicit */short) ((min((((/* implicit */int) min(((unsigned short)33922), (var_13)))), ((~(((/* implicit */int) (signed char)109)))))) & ((~((-(((/* implicit */int) (_Bool)1))))))));
                    var_31 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (-2814746564367758112LL)));
                }
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned char) var_2))) < ((~(((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) arr_3 [i_0 - 1] [(unsigned char)6] [i_0])) * (-1))), (((/* implicit */int) ((short) var_14)))))) : (min((((((/* implicit */_Bool) -1326952865)) ? (2516691911U) : (4294950896U))), (((/* implicit */unsigned int) var_1)))))))));
            }
        } 
    } 
    var_33 &= ((/* implicit */int) var_11);
}
