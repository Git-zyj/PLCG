/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17556
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((max((arr_0 [i_2 + 2]), (((/* implicit */long long int) arr_3 [i_0] [i_2 - 1])))) + (((/* implicit */long long int) ((/* implicit */int) (((~(arr_0 [i_2]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)0))))))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 6; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_1] [i_2] [i_2] [i_3 - 2] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) ? (max((arr_6 [(_Bool)1] [i_2 - 1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)14)))) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_3 + 1] [i_4])))))));
                                var_11 = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)14), (arr_9 [i_3] [i_3 - 2])))) % (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_3 - 1])) > (((/* implicit */int) (short)-17207)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned short)0))))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            {
                arr_18 [(unsigned char)23] [i_6] [i_5] = ((/* implicit */short) arr_15 [i_6] [i_5] [i_5]);
                var_13 = ((/* implicit */long long int) -1340186995);
                var_14 ^= ((/* implicit */_Bool) ((((arr_15 [i_5] [i_5] [i_6]) + (2147483647))) >> (((max(((-(((/* implicit */int) (unsigned short)65522)))), (((((/* implicit */int) arr_16 [i_5] [i_5] [i_5])) | (((/* implicit */int) var_6)))))) - (31293)))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    var_15 &= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_17 [i_6] [i_5])))) + (((/* implicit */int) ((((/* implicit */_Bool) 424075414783160292LL)) && (((/* implicit */_Bool) (signed char)0))))))) & (((((((/* implicit */int) (short)-32763)) + (2147483647))) << (((((/* implicit */int) (signed char)8)) - (8)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((arr_22 [i_8]) ? (((/* implicit */int) (short)17206)) : (((/* implicit */int) arr_19 [(signed char)0] [i_8 - 2] [i_5] [i_8 - 1]))))) : (((((/* implicit */_Bool) arr_19 [i_5] [18ULL] [i_8] [i_8 + 1])) ? (5625654343319924929ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_6] [i_6] [i_8 + 2])))))));
                                var_17 = ((((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_6] [(short)17] [i_8] [i_9])) || (((/* implicit */_Bool) var_4))))) > (arr_15 [i_5] [i_6] [i_7]))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (arr_21 [i_5] [i_6] [i_8] [i_8] [i_9])))) && (((/* implicit */_Bool) ((unsigned int) arr_13 [i_5])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)55)))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-2367)), ((unsigned short)65521)))) < (((((/* implicit */int) ((unsigned short) arr_16 [i_5] [i_6] [i_7]))) << (((var_5) - (592406238)))))));
                            }
                        } 
                    } 
                }
                arr_26 [i_5] [i_5] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_6])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (5464529164526806235LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65522)))))), (((/* implicit */long long int) arr_13 [i_5]))));
            }
        } 
    } 
}
