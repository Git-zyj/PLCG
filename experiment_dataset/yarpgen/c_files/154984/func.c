/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154984
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_14 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)30611))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1130574113U)))) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) arr_6 [i_0]))));
                            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_4] [i_3] [(unsigned char)14] [(unsigned char)14] [i_0]))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) arr_3 [i_3] [i_0]);
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) ((arr_5 [i_0] [i_5] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0])))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3164393210U)) && (((/* implicit */_Bool) (unsigned char)10))));
                            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [(unsigned char)22] [i_2])) && (((/* implicit */_Bool) 1130574113U)))) ? (((unsigned long long int) 201326592ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3164393167U))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_20 [i_0] [17] [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))));
                            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1130574113U)) && (((/* implicit */_Bool) (unsigned short)17371))));
                        }
                        arr_21 [i_0] [i_1] [i_2] [(_Bool)1] |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1])))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_6)) : (var_6)));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))))), (((arr_10 [i_0] [i_0] [i_2] [(unsigned char)18] [i_7]) - (((/* implicit */unsigned long long int) arr_14 [19ULL]))))))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 2; i_8 < 23; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */short) ((1130574087U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3])))));
                            var_23 = ((/* implicit */long long int) var_6);
                        }
                    }
                    /* vectorizable */
                    for (short i_9 = 1; i_9 < 23; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */int) 3164393183U);
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 3; i_10 < 23; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9 - 1] [i_9] [i_0] [i_9 - 1])) && (((/* implicit */_Bool) arr_17 [i_9 + 1] [i_9] [(unsigned short)0] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]))));
                            var_26 = ((/* implicit */short) (-(arr_8 [i_10 + 1] [(signed char)20] [i_0] [i_9 - 1])));
                            var_27 = ((/* implicit */signed char) ((var_13) << (((((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [18U]))))) + (940905623621906729LL)))));
                        }
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_2))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0]))) : (var_8)));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_2] [i_2] [i_0] [i_0]))) : (arr_29 [i_11] [i_0] [i_1] [i_0])));
                    }
                    var_31 = ((/* implicit */int) var_12);
                }
            } 
        } 
    } 
    var_32 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))))) - (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) 1130574113U)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-1))))));
}
