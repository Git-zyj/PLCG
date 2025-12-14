/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186081
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
    var_15 &= ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)32)), (var_14)))) ? (max((0U), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
    var_16 = ((/* implicit */unsigned long long int) var_12);
    var_17 = ((/* implicit */unsigned long long int) max((2128370166U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15366900574243390796ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */long long int) ((min(((+(15366900574243390796ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (4294967295U)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_12 [i_2] [i_0]))) == (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_4 - 1]))))))));
                                arr_13 [i_0] [i_2] [i_4] = ((/* implicit */long long int) 6283781531628029673ULL);
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((max((arr_11 [i_1] [i_1] [(unsigned char)8] [i_4 + 1] [(_Bool)1] [i_4 + 1] [i_2]), (arr_11 [2] [(short)8] [i_4] [(signed char)6] [0ULL] [i_4 + 1] [i_0]))) >= (((((/* implicit */_Bool) arr_11 [i_1] [0LL] [i_3] [(unsigned short)6] [i_4] [i_4 - 1] [i_2])) ? (arr_11 [i_3] [i_3] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                            {
                                arr_21 [i_7] [i_6] [i_5] [i_1] [i_0] [i_0] |= ((/* implicit */short) (~(((/* implicit */int) var_10))));
                                arr_22 [i_0] [i_0] [6U] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) != (max((((/* implicit */unsigned long long int) arr_17 [i_0] [i_5] [i_6] [i_7])), (arr_16 [i_0] [2ULL] [i_6] [i_7])))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (arr_20 [i_0] [5ULL] [5ULL] [i_7] [(_Bool)1] [i_7] [i_6])))), (arr_1 [i_7]))))) + (max((max((arr_11 [i_0] [i_1] [10U] [i_6] [i_7] [i_0] [i_0]), (var_14))), ((-(var_13)))))));
                                arr_23 [i_0] [i_1] [i_0] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1210879941) * (((/* implicit */int) arr_15 [(signed char)2]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (arr_11 [i_6] [i_6] [i_5] [i_5] [i_1] [i_1] [i_6]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)4]))) / (var_14))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 876534941U)) ? (((/* implicit */int) (unsigned char)0)) : (-1210879941))))))) : (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (876534931U)))));
                            }
                            for (long long int i_8 = 3; i_8 < 11; i_8 += 3) 
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_8 - 1] [i_8] [i_8] [i_8 - 2] [i_6])) + (((/* implicit */int) arr_18 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8]))))) ? (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) arr_19 [(signed char)5] [i_6] [i_8] [i_8 + 1] [i_6])) : (((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8 - 3] [i_8 - 3])))) : ((-(((/* implicit */int) arr_19 [i_8 - 2] [i_8] [i_8] [i_8 - 3] [i_6]))))));
                                arr_26 [i_6] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) max((arr_4 [i_6] [i_1] [i_5]), (((/* implicit */int) (signed char)-1))))) != ((~(arr_16 [i_0] [(unsigned short)2] [(unsigned short)2] [i_6]))))) ? (((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8 - 1])) ? (arr_25 [i_8 + 1] [i_8] [9U] [i_8 - 1] [i_8 + 1]) : (arr_25 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            }
                            arr_27 [(short)1] [i_1] [i_6] [(short)1] [i_5] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_5] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 |= ((/* implicit */long long int) max((var_2), (((/* implicit */unsigned long long int) var_9))));
}
