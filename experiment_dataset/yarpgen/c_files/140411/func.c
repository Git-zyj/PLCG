/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140411
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
    var_12 = ((/* implicit */long long int) (signed char)10);
    var_13 += ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (short)21951)) ? (((3308100313U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) (unsigned short)16703))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((((/* implicit */int) arr_5 [i_1] [i_0 - 2])) + (2147483647))) << (((((((/* implicit */int) arr_5 [i_0] [i_1])) + (4156))) - (22))))) != (((/* implicit */int) arr_4 [i_0 + 1]))))))));
                /* LoopSeq 4 */
                for (short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1]))));
                    var_16 += ((/* implicit */unsigned short) arr_3 [i_0 - 2]);
                    var_17 = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                }
                for (int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    arr_10 [i_0 + 1] [(_Bool)1] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [(short)1])) ? (((((/* implicit */_Bool) (short)6377)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_3])) ? (1396371070U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */_Bool) (short)3363)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3363))) : (0U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3] [i_1])) ? (((/* implicit */int) (unsigned short)26172)) : (((/* implicit */int) arr_7 [i_3] [i_1])))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */int) (short)26511);
                                var_19 = ((/* implicit */unsigned short) arr_0 [i_3 + 1] [i_1]);
                                var_20 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3 + 2] [16U])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 2] [(short)17]) & (((/* implicit */int) arr_2 [i_0 + 1]))))))) > (arr_8 [i_3] [i_3] [i_3 - 2] [9U])));
                                var_21 = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_5] [i_4] [i_5] [22LL]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        var_22 = arr_9 [i_0 - 2] [i_1] [i_1] [i_0 - 2];
                        arr_17 [i_3] [i_6] [i_3] [i_1] = ((/* implicit */unsigned char) (short)-3363);
                        arr_18 [(_Bool)1] [i_1] [(short)22] [i_3] [i_6] = ((/* implicit */unsigned char) arr_6 [i_0] [i_3] [(_Bool)1] [i_0]);
                    }
                }
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3362)) ? (((arr_6 [i_0] [i_0] [i_0] [(short)12]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [19U] [i_8] [i_8] [19U] [i_1] [i_0])))))) ? (arr_9 [i_9] [20U] [i_7] [i_1]) : (((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]))))));
                                var_24 = ((((/* implicit */_Bool) arr_23 [i_9] [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1]))) : (((1363908190U) & (((/* implicit */unsigned int) -1407575646)))));
                                arr_25 [(unsigned short)16] [i_1] = ((/* implicit */unsigned int) arr_22 [i_0 - 2] [i_0] [(short)17]);
                            }
                        } 
                    } 
                    arr_26 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 - 1])) ? (arr_6 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned int) -1326200898)) : (0U)))) ? (((/* implicit */int) (short)-3363)) : (((/* implicit */int) arr_3 [22U]))))) : (arr_6 [(short)1] [i_1] [i_7] [i_7]));
                    var_25 = ((/* implicit */unsigned short) (unsigned char)188);
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 986866982U)) ? (((((/* implicit */_Bool) (unsigned short)31518)) ? (1407575645) : (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) (short)3072))));
                }
                for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            {
                                var_27 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_30 [i_0 - 2] [i_0 - 2] [i_10] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0 - 2] [i_1] [i_10] [i_11] [i_12])))))) ? (((((((/* implicit */_Bool) arr_5 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3363))) : (arr_33 [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_10] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [13ULL] [i_11])))));
                                arr_37 [(signed char)2] [(signed char)2] [i_11] [i_12] &= ((((/* implicit */int) arr_19 [i_12] [i_10] [i_10] [i_0 - 2])) - (((((/* implicit */int) arr_1 [i_10])) & (((/* implicit */int) arr_15 [i_10])))));
                            }
                        } 
                    } 
                    var_28 &= ((/* implicit */short) arr_8 [i_0] [i_1] [i_0] [(short)5]);
                }
            }
        } 
    } 
    var_29 &= ((/* implicit */short) (unsigned short)34018);
}
