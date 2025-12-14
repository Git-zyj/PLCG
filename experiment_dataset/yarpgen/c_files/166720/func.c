/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166720
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) var_17);
                    arr_9 [i_2] [i_1] [14LL] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) > (((/* implicit */int) (unsigned char)97))))))), (max(((-(arr_8 [i_1] [i_2]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) != (4294967295U))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 2; i_3 < 18; i_3 += 4) 
    {
        arr_14 [10U] = ((/* implicit */unsigned short) arr_7 [i_3]);
        var_21 -= ((((/* implicit */_Bool) (((-(32767U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 2])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) / (arr_13 [i_3 - 1]))) : (min((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (69805794224242688LL))), (((/* implicit */long long int) arr_10 [i_3 - 1] [i_3 - 2])))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)88))))) > (((((/* implicit */_Bool) arr_12 [18U])) ? (4270894493U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 + 1]))))))) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_3 - 2])))))))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)158)) > (((((((/* implicit */int) var_12)) | (((/* implicit */int) var_2)))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)102))))))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 4; i_6 < 7; i_6 += 2) 
                {
                    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_20 [i_4] [i_5] [i_6] [i_6 + 2]), (((/* implicit */int) (signed char)7))))) && (((/* implicit */_Bool) (unsigned char)147))))) + (((/* implicit */int) var_8))));
                    arr_23 [8LL] [i_4] [8LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1351431293U)) && (((((/* implicit */_Bool) 31744U)) || (((/* implicit */_Bool) arr_22 [i_4] [i_5] [i_6 - 2] [i_6 - 2]))))));
                    var_25 -= arr_16 [i_6] [i_5];
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        arr_27 [i_4] [i_5] [(signed char)3] [(unsigned char)1] [(unsigned char)1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) -7327569127367798352LL)) ? (6310761362876742741LL) : (((/* implicit */long long int) 31722U))));
                        var_26 ^= (-(31722U));
                    }
                    arr_28 [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (unsigned char)255)), (985162418487296LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned short)18])))));
                }
                for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) 4270894472U);
                                arr_36 [i_4] [i_5] [4U] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-17LL), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20276))) : (1923625415049763960ULL)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_5])) || (((/* implicit */_Bool) (unsigned char)236))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [13] [13])) ? (((((-3953682735008235729LL) + (9223372036854775807LL))) << (((4294967295U) - (4294967295U))))) : (min((((/* implicit */long long int) 3700639806U)), ((-9223372036854775807LL - 1LL)))))))));
                                arr_37 [i_4] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((long long int) -6310761362876742742LL))) && (((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_4]))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) max((((/* implicit */unsigned int) (short)28591)), (4294967295U)));
                    arr_38 [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-32765))) + (((((/* implicit */_Bool) arr_22 [i_4] [(unsigned char)3] [i_8] [i_8])) ? (arr_2 [i_5] [i_8]) : ((-9223372036854775807LL - 1LL))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) arr_32 [i_4] [i_4] [i_11] [i_12] [i_4]);
                            arr_43 [7LL] [i_4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (68719476735LL))) : (((/* implicit */long long int) 4294935573U))))));
                            arr_44 [i_4] = ((/* implicit */signed char) -6310761362876742736LL);
                        }
                    } 
                } 
            }
        } 
    } 
}
