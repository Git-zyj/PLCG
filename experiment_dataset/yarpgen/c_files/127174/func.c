/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127174
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((min((3046835602313595868ULL), (((/* implicit */unsigned long long int) arr_13 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 3] [i_1 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) (short)(-32767 - 1))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2] [i_2] [i_2] [i_4])) ? (arr_8 [i_0] [i_1] [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))))) ? (max((arr_1 [i_2]), (4294967287U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2])))))) : (max((((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_2] [i_1] [i_0])) ? (arr_7 [i_4] [i_4] [i_4] [i_4] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4] [i_2] [i_2] [i_1 - 2] [i_0])) ? (3038537621925106471LL) : (((/* implicit */long long int) arr_5 [(unsigned char)19] [i_1])))))))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_3 [i_1]) : (((/* implicit */long long int) max((9U), (((/* implicit */unsigned int) arr_12 [(signed char)20] [i_1] [i_2] [i_2]))))))), (((/* implicit */long long int) arr_2 [i_1]))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1 + 3] [18] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967291U)) || (((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_2] [i_2]))))), (min((min((4294967281U), (((/* implicit */unsigned int) 388638015)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (15U)));
        arr_18 [i_5] = ((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))) : (902499747U));
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6] [i_7] [i_6])) || (((/* implicit */_Bool) 17179860992LL)))))) : (arr_5 [i_6] [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)118)), (4294967286U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_6 [i_6])) : (((/* implicit */int) arr_4 [i_6] [i_6] [i_6]))))))))));
                var_21 = ((/* implicit */int) arr_16 [i_6]);
                var_22 = ((((/* implicit */_Bool) max((arr_1 [(_Bool)1]), (((/* implicit */unsigned int) (unsigned char)127))))) ? (((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_6] [i_6]))) > (6U))))) : (9U))) : (((/* implicit */unsigned int) -388638016)));
                arr_25 [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_21 [i_7]) ? (arr_7 [i_6] [i_6] [(signed char)12] [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_9 [i_7] [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_10 [i_6] [i_6] [i_6] [i_6] [i_7])), (arr_11 [i_6] [i_7] [i_6] [i_7] [i_7]))))) : (((arr_19 [i_7]) ? (2366195570663196917ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [12LL] [i_6])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)118))) : (((((/* implicit */_Bool) -1796146772591741283LL)) ? (((((/* implicit */_Bool) arr_4 [1] [i_7] [(unsigned short)13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_6] [i_6] [i_6]))) : (arr_3 [i_6]))) : (((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_7] [i_6] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7] [23ULL] [i_7]))) : (arr_8 [i_7] [i_6] [i_6] [i_6])))))));
            }
        } 
    } 
}
