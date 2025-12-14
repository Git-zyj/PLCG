/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14210
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
    var_12 = ((/* implicit */unsigned short) min(((~(((((/* implicit */int) (unsigned short)59346)) | (((/* implicit */int) (unsigned char)144)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(2U)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-7))));
        arr_5 [i_0] = ((/* implicit */short) ((unsigned int) (-(var_11))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */unsigned char) min((((arr_9 [i_2 - 1] [i_2] [i_2 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_8 [(short)4] [i_1]), (((/* implicit */unsigned short) var_4))))), (var_1))))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((short) var_0))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6189))) : (arr_9 [i_0] [i_1] [i_2]))))) + (((/* implicit */unsigned long long int) ((1743982090U) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5))))))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_10))))) ? (max((((/* implicit */unsigned long long int) var_0)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-32766)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 4; i_3 < 22; i_3 += 2) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    arr_22 [10LL] [i_4] [8ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)6190))))))) ? (((/* implicit */int) max((arr_20 [i_4] [i_4]), (arr_20 [i_5] [i_4])))) : (((/* implicit */int) var_10))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        arr_26 [i_6] [i_4] [i_5] [(unsigned char)20] [i_5] = ((/* implicit */unsigned char) (-((-(arr_25 [(short)1] [i_3] [i_6] [i_3 + 1] [3ULL])))));
                        /* LoopSeq 1 */
                        for (int i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_3] [i_4] [22LL] [i_4] [i_7])) + (((/* implicit */int) (short)30))))), (var_11)))));
                            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2707461436U))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_8 = 3; i_8 < 20; i_8 += 1) 
                        {
                            arr_33 [i_6] = ((/* implicit */int) ((arr_17 [i_3 - 1] [i_6 + 3]) + (arr_17 [i_3 - 1] [i_6 + 4])));
                            var_17 -= ((/* implicit */unsigned char) var_10);
                        }
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            var_18 = ((/* implicit */short) max((((((/* implicit */int) ((unsigned char) arr_23 [i_3] [2ULL] [i_3] [i_3]))) | ((~(((/* implicit */int) (short)(-32767 - 1))))))), (((((/* implicit */int) arr_23 [i_3] [8] [i_6 + 2] [i_9])) | (((int) arr_16 [i_5] [i_3]))))));
                            arr_38 [i_9] [i_9] [(unsigned short)6] [i_6 + 2] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_3] [i_4] [i_4] [i_4] [i_9]))) & ((~(var_2)))))));
                            var_19 = ((/* implicit */short) ((unsigned long long int) 4294967294U));
                        }
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_41 [i_3] [i_3] [i_6] [i_6] [i_3] [i_6] [i_6] = ((/* implicit */unsigned char) 9223372036854775794LL);
                            var_20 -= ((/* implicit */unsigned short) ((unsigned long long int) (signed char)65));
                        }
                        arr_42 [i_3] [i_6] [i_5] [i_3] = ((unsigned long long int) min(((~(var_8))), (((/* implicit */unsigned long long int) ((9223372036854775806LL) - (1854392108256833774LL))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            arr_45 [i_6] = ((/* implicit */unsigned long long int) var_3);
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27162))) + (3100002787U)));
                            var_22 += ((/* implicit */unsigned long long int) (+(4143313661U)));
                        }
                    }
                }
            } 
        } 
    }
}
