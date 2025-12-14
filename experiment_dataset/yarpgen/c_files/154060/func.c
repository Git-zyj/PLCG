/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154060
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
    var_10 -= ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_8)), (((long long int) 16383)))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)7772)) : (((/* implicit */int) var_0)))) + (((/* implicit */int) arr_9 [i_2] [i_2] [i_1]))));
                        var_11 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) ? (arr_4 [i_1]) : (4294967295U)))) - (arr_7 [i_0] [i_1 - 2] [i_1 - 2] [i_2 + 1])));
                    }
                    for (short i_4 = 2; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_12 = (signed char)102;
                        arr_18 [i_2] = ((/* implicit */unsigned char) ((signed char) var_6));
                        var_13 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)-73))))));
                        var_14 -= ((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_4] [i_0]);
                    }
                    for (short i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        arr_21 [i_2] [i_1 - 4] [(unsigned char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) min((945251263U), (((/* implicit */unsigned int) (signed char)-1)))))) ? (((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)57764)) | (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (unsigned short)12088))))))) : (((long long int) (short)32767))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_25 [i_2] [i_1] [i_2 + 1] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)57764))));
                            var_15 ^= ((/* implicit */short) (-(arr_12 [i_6] [8U] [i_1] [i_1] [(signed char)6])));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */short) (-((~(arr_12 [i_0] [12ULL] [i_5] [i_2 + 1] [i_7 + 1])))));
                            arr_30 [i_7] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6557)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)53448))))) ? (((/* implicit */int) arr_10 [i_2 + 1] [i_2] [11U] [i_0])) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (_Bool)0)))))));
                            var_17 -= ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_6)) : (1623058756607353997LL))))));
                        }
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        arr_34 [i_2] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_10 [i_8] [i_2] [i_2] [i_0])))) && (((((/* implicit */_Bool) var_4)) && (var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (arr_7 [(short)15] [i_1 - 4] [i_2] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                        arr_35 [i_2] [i_1 - 1] [19ULL] [i_8] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_4)) ^ ((~(((/* implicit */int) (unsigned short)57764)))))));
                        arr_36 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned int) ((arr_31 [i_8] [i_2] [i_2] [(short)11]) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_2 + 1])) : (((/* implicit */int) ((signed char) arr_4 [i_1]))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_18 -= ((/* implicit */unsigned long long int) (unsigned short)6079);
                            arr_39 [i_2] [i_1 - 2] [i_2] [(_Bool)1] [i_1 - 2] = ((/* implicit */short) ((unsigned char) 3147753428U));
                            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(arr_8 [i_0] [i_2] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) var_4)))))) : (((unsigned long long int) (unsigned short)65535)))) <= (((/* implicit */unsigned long long int) var_6))));
                        }
                    }
                    arr_40 [i_2] [i_2] [i_2] [i_2 + 1] = var_5;
                    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) min(((unsigned short)59457), (((/* implicit */unsigned short) var_4)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) var_1))));
    var_22 = ((/* implicit */signed char) (_Bool)1);
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) min(((signed char)-115), (((/* implicit */signed char) (_Bool)1)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (10563896142883490441ULL)))) ? (min((1623058756607353997LL), (536870911LL))) : (((/* implicit */long long int) (-(4294967295U))))))));
}
