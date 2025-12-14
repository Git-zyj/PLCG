/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179031
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
    var_12 = ((/* implicit */_Bool) max(((-(max((var_7), (((/* implicit */unsigned int) var_9)))))), (max((((/* implicit */unsigned int) var_10)), ((-(var_7)))))));
    var_13 = ((/* implicit */unsigned long long int) max(((+(var_7))), (((/* implicit */unsigned int) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(min((arr_10 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_9 [i_0] [8LL] [i_1] [i_2] [i_3] [i_1]))))))), ((~(((((/* implicit */_Bool) arr_5 [i_1] [i_2] [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_2] [i_4]))) : (arr_4 [i_3] [i_1])))))));
                                var_15 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_14 [i_0] [i_1] [i_2 - 1] [i_3] [i_4])))))));
                                var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16066933449711023321ULL)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (signed char)-45))))) ? (((/* implicit */int) arr_0 [(_Bool)1] [17ULL])) : (max(((+(((/* implicit */int) arr_1 [i_2] [i_1])))), ((-(((/* implicit */int) arr_1 [i_2] [i_1]))))))));
                            }
                            arr_15 [i_3] [i_2] [(unsigned char)3] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_2] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((~(((/* implicit */int) (signed char)116)))) : ((~(((/* implicit */int) arr_3 [i_0] [i_2]))))))) : (max((((((/* implicit */_Bool) arr_11 [i_0] [(short)14] [i_0] [i_0] [i_0])) ? (arr_14 [7LL] [i_1] [i_2 - 3] [i_1] [5]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_3]))))), (min((((/* implicit */long long int) (unsigned short)41354)), (-833374847380161090LL)))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] |= ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) (unsigned short)24182)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (16552657050029067731ULL)))))));
            }
        } 
    } 
}
