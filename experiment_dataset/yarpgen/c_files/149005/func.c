/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149005
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
    var_15 |= (!(((/* implicit */_Bool) var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */short) arr_2 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_17 = 354861924804874923ULL;
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 3; i_2 < 7; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [(unsigned char)4])) : (((/* implicit */int) arr_8 [(unsigned char)1] [i_2 + 3] [i_1]))));
            var_19 = ((/* implicit */unsigned long long int) 0U);
        }
        /* vectorizable */
        for (unsigned char i_3 = 4; i_3 < 9; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_1)) % (((/* implicit */int) (unsigned char)31))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1] [6U] [i_4 - 1] [4LL] [i_4] [i_3 - 1])) ? (arr_18 [i_1] [i_3 - 1] [i_4 - 1] [i_5] [i_5] [i_3 - 1]) : (((/* implicit */unsigned long long int) arr_20 [i_4 + 1] [i_3] [i_4 - 1] [i_4 - 1] [i_3]))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) -988628260)) ? (arr_20 [i_4 - 1] [i_5] [(unsigned char)8] [i_5] [2ULL]) : (((((/* implicit */_Bool) arr_10 [i_1])) ? (988628267) : (988628267))))))));
                    }
                } 
            } 
            var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? ((-(var_10))) : (((/* implicit */unsigned long long int) var_0))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                arr_25 [i_1] [i_3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_6])) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 - 2] [i_3 - 2])))));
                arr_26 [i_1] [(short)4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_3 - 4] [i_3])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)178))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    arr_30 [(unsigned char)7] [i_3] [0] [i_3] [i_7] [4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 2] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 4] [i_3 - 4]))) : (arr_12 [i_7] [i_3 - 2])));
                    arr_31 [i_3] [9U] [i_6] [i_6] = ((/* implicit */_Bool) (~(arr_17 [i_3 - 1] [i_3] [i_3])));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 4; i_8 < 9; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */int) ((((2127132101U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [(unsigned short)2] [(unsigned short)2] [i_8]))))) ? (arr_18 [i_3 - 2] [i_3] [i_6] [i_8 - 4] [i_3 - 2] [i_8 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) var_4)))))));
                        arr_36 [i_8 + 1] [i_7] [i_3] [i_3] [i_3] [i_3 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2313)) ? ((~(var_12))) : (((((/* implicit */_Bool) arr_14 [i_8] [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) 2167835180U))))));
                        var_25 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_13 [0] [(unsigned short)8])) || (var_8))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -8415118338783766467LL))))) : ((((_Bool)1) ? (((/* implicit */int) (short)-19546)) : (((/* implicit */int) (unsigned short)43507))))));
                        arr_37 [i_3] [(unsigned short)6] [i_6] [i_3] [i_8 - 4] [(unsigned char)6] [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-19546)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)2297)) : (((/* implicit */int) (unsigned char)255))))));
                        var_26 = ((/* implicit */int) (+(arr_34 [i_1] [i_1] [(signed char)1] [i_7] [i_8 - 4] [i_6])));
                    }
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2331)) ? (((/* implicit */unsigned int) -1337542732)) : (arr_10 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [i_1]))))) : (7125692339295576875ULL)));
                        var_28 |= ((/* implicit */short) ((((/* implicit */int) (short)2324)) << (((((/* implicit */int) (unsigned short)45286)) - (45278)))));
                        arr_42 [i_3] [i_3] [i_3] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (short)-24467)) * (((/* implicit */int) (signed char)109))));
                    }
                    for (unsigned char i_10 = 2; i_10 < 8; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_19 [i_3] [i_3] [i_10 - 2])) != (arr_28 [i_3] [i_3] [i_10 - 1] [i_10 + 2] [(signed char)7])));
                        arr_47 [i_1] [i_3] [i_6] [i_7] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)171)) | (arr_16 [i_1] [i_6] [i_7])))) ? (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_28 [(signed char)8] [i_3] [9ULL] [i_7] [3ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42164)))));
                    }
                }
            }
            var_30 = (-(((/* implicit */int) (unsigned char)235)));
        }
    }
}
