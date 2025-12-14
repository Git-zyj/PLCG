/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132129
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
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */long long int) 16383U)), (((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (signed char)-90))))) ? (((/* implicit */long long int) ((int) var_8))) : (((((/* implicit */_Bool) 1750478461164395645ULL)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    var_13 &= ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89)))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))) - (1750478461164395645ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_9))))))));
    var_14 |= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((unsigned char) (unsigned short)38836))), (((((/* implicit */_Bool) var_4)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) && (((16383U) != (var_1)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [6ULL] = ((((/* implicit */_Bool) ((unsigned short) var_3))) && ((!(((/* implicit */_Bool) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((int) arr_0 [i_0]));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) var_5);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
            {
                arr_9 [11LL] [11LL] [i_2] [i_0] = ((/* implicit */long long int) ((4294950912U) + (arr_5 [i_1 + 2] [i_2])));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    arr_12 [i_2] [i_2] [i_2] |= (+(((/* implicit */int) var_9)));
                    arr_13 [i_2] [i_0] [i_2] = ((/* implicit */signed char) (unsigned char)3);
                    arr_14 [i_2] [i_2] [6ULL] [i_1] = ((/* implicit */int) arr_4 [i_1 - 1] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */unsigned long long int) arr_8 [i_1 - 3]);
                        arr_18 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((unsigned int) 1071644672U));
                    }
                    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_3] [12U] [i_2] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_1 - 3] [i_2] [i_1 - 3] [(unsigned short)10] [(unsigned short)10] [i_2])) << (((arr_5 [i_5] [i_1 - 2]) - (1331725824U)))));
                        arr_23 [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) ((_Bool) arr_16 [i_5] [i_3] [(unsigned short)14] [i_2] [(unsigned short)14] [i_0] [i_0]))) : ((~(((/* implicit */int) (short)14428))))));
                        arr_24 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_1 + 1])) ? (arr_20 [i_0] [i_1 - 1]) : (arr_20 [i_0] [i_1 - 1])));
                        arr_25 [i_1] [i_0] = ((/* implicit */_Bool) (~(arr_15 [i_0] [i_1 - 2] [i_1] [i_1 - 1] [i_1])));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_6 = 3; i_6 < 12; i_6 += 4) 
                {
                    arr_30 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_1)) != (arr_15 [(short)3] [i_6] [i_6 - 1] [i_6] [i_6])));
                    arr_31 [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) arr_15 [i_2] [i_2] [1ULL] [i_6] [i_0]);
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_29 [i_6 - 3] [i_6 - 3] [i_6] [i_6] [i_6] [(_Bool)1]);
                }
            }
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
            {
                arr_36 [i_0] = ((/* implicit */_Bool) ((signed char) arr_28 [i_1 + 2] [i_1 + 2] [i_7] [i_1] [i_7] [i_7]));
                arr_37 [i_0] = (((+(((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) arr_8 [i_1 - 2])));
            }
            arr_38 [8U] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)173)) || (((/* implicit */_Bool) (signed char)106)))) && (((/* implicit */_Bool) arr_20 [i_1] [i_1]))));
            arr_39 [4LL] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]);
        }
        for (short i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            arr_43 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_19 [i_0] [i_0] [(signed char)10] [i_0] [i_8])));
            arr_44 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0])) ? (((/* implicit */int) arr_40 [i_8])) : (((/* implicit */int) arr_40 [i_0]))));
            arr_45 [(short)14] [i_0] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 468694530))));
            arr_46 [i_0] [i_0] = ((/* implicit */short) var_9);
        }
        for (short i_9 = 2; i_9 < 13; i_9 += 2) 
        {
            arr_49 [i_0] [i_9] = ((/* implicit */signed char) arr_34 [i_0] [i_9]);
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                arr_53 [i_0] = ((/* implicit */unsigned short) arr_40 [i_0]);
                /* LoopSeq 2 */
                for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                {
                    arr_57 [i_9] [i_9] [i_10] [i_11] |= ((/* implicit */_Bool) 2611375396U);
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 1; i_12 < 11; i_12 += 1) 
                    {
                        arr_60 [i_10] [i_12 + 2] [i_0] = ((/* implicit */signed char) (unsigned short)38836);
                        arr_61 [i_0] [i_9] [i_10] [i_0] [i_0] = ((/* implicit */unsigned short) arr_40 [i_0]);
                    }
                    for (int i_13 = 0; i_13 < 15; i_13 += 1) /* same iter space */
                    {
                        arr_64 [i_0] [i_9] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1683591887U)) || (((/* implicit */_Bool) var_3))));
                        arr_65 [i_0] [i_0] [i_9] [i_9] [i_0] [(_Bool)1] [i_13] = ((/* implicit */unsigned short) ((var_1) ^ (16383U)));
                    }
                    for (int i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
                    {
                        arr_69 [(short)10] [14U] [i_10] [i_10] [i_9] = ((/* implicit */_Bool) (+(((4294950912U) >> (((((/* implicit */int) var_7)) - (58)))))));
                        arr_70 [i_11] [i_11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_66 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                }
                for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
                {
                    arr_73 [i_10] [i_10] [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_42 [i_15] [i_9 - 2] [i_10]));
                    arr_74 [i_0] [i_10] [i_15] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1683591899U))));
                }
                arr_75 [i_0] = (-(2611375396U));
            }
            arr_76 [i_0] = ((unsigned long long int) (!(((/* implicit */_Bool) arr_62 [i_0] [i_0] [i_0]))));
        }
    }
}
