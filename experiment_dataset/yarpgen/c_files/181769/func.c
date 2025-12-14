/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181769
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_14 = ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)46)) << (((((/* implicit */int) arr_3 [i_0] [i_0])) - (14819)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1])) != (((/* implicit */int) arr_8 [i_1] [(signed char)11] [i_2]))))) : (var_4))) & (((/* implicit */int) ((1646644032) == (((/* implicit */int) ((unsigned short) arr_2 [i_0])))))));
                    arr_9 [i_0] [i_1] [i_0] = arr_6 [i_2] [i_1] [i_0];
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_12 [i_0] [i_0] [i_0] [i_4])));
                                var_15 = ((/* implicit */long long int) ((arr_13 [i_0] [i_1] [i_0] [i_4] [i_5]) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_1] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                arr_23 [i_1] [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [i_7] [i_3] [i_6] [i_1] [i_0] [i_1])) ? ((-(((/* implicit */int) arr_18 [i_0] [(unsigned char)10])))) : (((((/* implicit */_Bool) (unsigned short)26620)) ? (((/* implicit */int) arr_6 [i_1] [i_3] [i_7])) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_3] [(unsigned char)12] [9U]))))));
                                var_16 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (arr_13 [3U] [i_1] [i_3] [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) < (((/* implicit */unsigned long long int) arr_5 [i_0] [(short)12] [i_3]))));
                                arr_24 [i_1] [i_1] [i_3] [8LL] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
                                arr_25 [i_1] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) var_6))))) : (((int) (unsigned short)44235))));
                            }
                        } 
                    } 
                }
                for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    arr_30 [i_1] [i_1] [i_8] [i_8] = ((((/* implicit */int) ((unsigned char) ((arr_14 [i_0] [i_1]) * (18446744073709551615ULL))))) >> (((/* implicit */int) ((((((/* implicit */int) var_7)) | (var_9))) < (((arr_20 [i_0] [i_1] [i_8] [i_8] [i_8] [i_0] [i_1]) | (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((arr_7 [i_1]) - (((/* implicit */long long int) 1646644032)))) == (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                }
                /* vectorizable */
                for (unsigned char i_9 = 3; i_9 < 13; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 14; i_11 += 3) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned short) arr_11 [i_10] [i_11] [i_11] [i_11 - 1]);
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((17) ^ (((/* implicit */int) (short)-4245)))))));
                                arr_41 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_7))))));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_8))));
                            }
                        } 
                    } 
                    var_21 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_9 + 1])) << (((((/* implicit */int) arr_21 [6LL] [i_1] [6LL])) - (1893)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_9 + 1])) << (((((((/* implicit */int) arr_21 [6LL] [i_1] [6LL])) - (1893))) - (61005))))));
                    var_22 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_18 [(unsigned short)9] [i_1])))));
                    arr_42 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (unsigned char)65);
                }
                var_23 = ((/* implicit */unsigned int) max((var_23), (max((((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_28 [3] [i_1] [i_1] [0U])), ((unsigned short)63194))))) | (arr_12 [i_0] [i_1] [(short)10] [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) & (arr_5 [i_1] [(unsigned short)0] [12ULL])))) ? (((/* implicit */unsigned int) ((arr_5 [i_0] [6] [4]) / (((/* implicit */int) arr_10 [i_1] [i_0] [i_0] [i_0]))))) : (((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))))))))));
                var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2))));
                arr_43 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_18 [(signed char)10] [(signed char)10])), (arr_20 [13] [(short)11] [i_1] [(short)11] [i_0] [11] [i_1])))) ? ((~(((/* implicit */int) arr_21 [i_0] [i_1] [i_0])))) : (((/* implicit */int) max((arr_40 [i_1]), (var_11))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((var_9) == (((/* implicit */int) (signed char)70))))))))));
            }
        } 
    } 
    var_25 ^= ((/* implicit */unsigned long long int) ((4294967295U) >> (((((/* implicit */int) (unsigned char)108)) - (104)))));
}
