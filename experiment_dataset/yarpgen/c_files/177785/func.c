/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177785
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
    var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)63305)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (var_15))))) : ((-(var_9))))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-115)))))));
    var_21 -= ((/* implicit */int) (signed char)-81);
    var_22 = var_8;
    var_23 -= ((/* implicit */_Bool) 4294967295U);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_24 &= ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) == (((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [1] [i_2] [i_3] [(short)19] [i_4 - 1] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                                arr_13 [(unsigned char)9] [(unsigned char)9] [i_0] [i_3] [4LL] = ((/* implicit */signed char) var_11);
                                arr_14 [i_0] [i_3] = ((/* implicit */unsigned short) 2147483647);
                                arr_15 [i_0] [3U] [i_0] [13] [i_0] = ((/* implicit */signed char) -1076049849);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((4707201989074357017LL) * (((/* implicit */long long int) 0U))))) ? (((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-7350638626818325825LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) (unsigned char)84)) - (74)))))))), ((-(arr_11 [i_0] [i_1] [(unsigned char)4] [i_1])))));
                }
                var_25 ^= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0]))) : (arr_0 [i_1] [4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (67108863) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) & (7445861930402819041LL))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (int i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_7 = 2; i_7 < 18; i_7 += 3) 
                            {
                                var_26 = (+(((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) - (31457280U)))) / (((((/* implicit */_Bool) 7U)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [(_Bool)1] [i_6] [i_7 - 2]))))))));
                                arr_27 [i_5] [i_6] &= ((/* implicit */unsigned char) ((long long int) (((-(-3228658569658190258LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_0] [i_6 + 1] [i_7] [i_7 + 3] [i_1]))))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_27 = ((/* implicit */signed char) max((max(((~(((/* implicit */int) (signed char)116)))), (((/* implicit */int) (signed char)-115)))), (((((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) arr_24 [i_0] [i_1] [i_1] [i_6 + 1]))))) ? (((((/* implicit */_Bool) -1076049822)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_2 [8ULL]))))))));
                                arr_31 [i_0] [i_1] [(unsigned short)15] [i_1] [i_8] [i_0] = ((unsigned short) arr_9 [i_0] [i_0] [i_0] [9] [i_0] [9]);
                            }
                            arr_32 [i_0] [(unsigned short)15] [i_0] [i_6 - 1] = ((arr_26 [i_0] [i_1] [i_5] [11LL] [i_0] [i_6 - 2] [i_6]) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_30 [i_0] [i_0] [4] [i_0] [9U]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10)))))) ? (max((((/* implicit */long long int) (signed char)-126)), (arr_23 [i_6] [i_6] [13] [i_6] [i_6]))) : (((/* implicit */long long int) arr_30 [i_6] [i_6 - 2] [i_6] [i_6] [i_6])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
