/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163237
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [i_3] [i_3] [7U] [i_3] [i_3] [i_1 + 2] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (min((((/* implicit */long long int) var_11)), (arr_8 [i_0 - 1] [i_1] [i_1] [i_2] [i_3]))))) & (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (18446744073709551600ULL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (var_10))))))))));
                        arr_11 [i_0] [18U] [i_0 + 1] [i_0 + 1] [13ULL] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(arr_6 [(unsigned char)1] [i_1]))) ? (arr_8 [i_0] [i_0] [10] [i_0 - 1] [i_0]) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)-8)), (var_0))))))) ? (((/* implicit */long long int) max((arr_5 [i_0 + 1]), (arr_5 [i_0 - 1])))) : (((((/* implicit */_Bool) 4109794738U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 2] [i_3])))))) : (((long long int) (_Bool)1))))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((max((17065642073888615789ULL), (((/* implicit */unsigned long long int) (unsigned short)65515)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)2086)) : (var_0)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_9 [(signed char)5] [i_1])) : (((/* implicit */int) var_4)))) < (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_2))))))))))))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_17 = (~((~(((/* implicit */int) arr_12 [12ULL] [i_1 + 1] [i_1 + 1] [i_1])))));
                        var_18 = ((/* implicit */signed char) min((var_18), ((signed char)-112)));
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) 2199023124480ULL);
                        arr_16 [i_0 + 1] [(signed char)3] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 - 1])), (arr_1 [i_2])))) ? (max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (unsigned short)51179)) ? (((/* implicit */unsigned long long int) 1132895895)) : (14138206763757842745ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)247)), (var_7)))) ? ((-(var_0))) : (((/* implicit */int) (unsigned char)249)))))));
                    }
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1])) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)111)) : (arr_5 [i_2])))))) ? (var_7) : (2147483647))))));
                    var_20 = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_2] [i_5] [i_5] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((max((min((var_5), (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */int) arr_19 [(short)14] [i_5] [(short)14] [i_1] [i_1] [i_0])) | (var_5))))) + (1371574290))) - (1)))));
                                arr_24 [4U] [4U] [i_6] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (983040U)))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */_Bool) -4983204328738751452LL);
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned long long int) (unsigned char)20);
}
