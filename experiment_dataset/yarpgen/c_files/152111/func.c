/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152111
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (~(min((((2943403161U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))), (((/* implicit */unsigned int) (unsigned char)2)))))))));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6596)))))) - (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1])) | (((/* implicit */int) (unsigned char)221))))) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_2]) > (((/* implicit */int) (signed char)99))))))))));
                        arr_12 [i_3] [(signed char)5] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1351564154U))))), (1351564135U))), (((/* implicit */unsigned int) arr_6 [i_1]))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) (signed char)96))) * ((+(4013732676U))))))));
                        arr_14 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_8 [i_0] [i_0] [i_0] [(unsigned short)13])), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0]))))))) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned char)255)))), (((arr_5 [i_0] [i_1] [i_2]) - (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3]))))))) : (max((4013732676U), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((max((arr_9 [i_1] [i_2] [i_2 - 1]), (arr_9 [i_0] [i_2 - 1] [i_2 - 1]))) >= ((-(arr_9 [i_0] [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_20 [i_0] [i_1] [i_4] [(short)17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_2 + 1] [i_2 + 1]))) ^ (281234619U)))) : (((long long int) arr_11 [i_0] [i_4]))));
                        arr_21 [i_4] [i_1] [i_2] [2LL] [17ULL] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 2943403161U)) ? (arr_9 [i_0] [i_1] [i_2 + 1]) : (max((((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1])), (2943403153U)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 18; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_26 [i_1] [i_2] = ((/* implicit */unsigned char) (~(arr_24 [i_0])));
                                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_1 [i_0]))));
                                arr_27 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 2943403143U)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (signed char)-45))))));
                            }
                        } 
                    } 
                    arr_28 [i_2] [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_2] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_10 [(signed char)12] [i_1] [i_1] [i_1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_9 [i_0] [i_0] [i_0])))))));
                }
                arr_29 [i_1] = ((/* implicit */long long int) ((int) min(((-2147483647 - 1)), (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) > (((((/* implicit */_Bool) -4425093726891414139LL)) ? (((/* implicit */unsigned long long int) 1957747156U)) : (arr_1 [i_0]))))))))));
            }
        } 
    } 
}
