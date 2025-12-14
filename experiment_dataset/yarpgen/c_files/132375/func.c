/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132375
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
    var_13 = (-((-(var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_0 [i_3]))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) arr_1 [i_0])))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)195));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_4] [(unsigned short)6] [i_5] = (((+(((/* implicit */int) arr_11 [i_4] [(unsigned short)12])))) * (((((/* implicit */_Bool) arr_6 [i_4] [i_5] [i_5] [(unsigned short)0])) ? (((/* implicit */int) arr_3 [i_4] [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_4] [i_5] [i_5])))));
            arr_18 [i_4] [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) 4294967291U);
                        var_17 ^= ((/* implicit */_Bool) ((arr_20 [i_4] [i_6] [i_7]) % (((/* implicit */int) arr_0 [i_4]))));
                        arr_26 [(short)2] [i_5] [i_6] [(unsigned short)5] = ((/* implicit */_Bool) (~(arr_6 [i_4] [i_5] [i_6] [i_7])));
                        arr_27 [i_4] [i_5] = ((/* implicit */signed char) var_4);
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_31 [i_4] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_29 [8U] [i_5] [i_6] [i_7] [i_8] [i_4] [i_4]) % (arr_29 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7] [i_8])))) ? (arr_6 [i_4] [i_5] [i_7] [i_7]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_4] [(unsigned short)2] [i_6] [i_7] [i_8])))))));
                            arr_32 [i_4] [i_5] [(short)3] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_6])) ? (((/* implicit */int) arr_7 [i_4] [i_5] [i_6] [i_7])) : (((/* implicit */int) arr_16 [i_8] [i_4]))));
                        }
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4]))) < (arr_10 [i_5] [i_5] [i_5] [i_5] [i_4])));
            var_19 += ((/* implicit */unsigned int) ((arr_24 [i_4] [i_5] [i_4] [13] [i_5] [i_4]) & ((-(((/* implicit */int) (unsigned char)59))))));
        }
        for (short i_9 = 1; i_9 < 14; i_9 += 3) 
        {
            arr_37 [i_4] [i_9 + 1] = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)7673)) ^ (((/* implicit */int) arr_13 [i_9])))) / (((/* implicit */int) (unsigned short)957))));
            arr_38 [i_9] [i_4] = ((/* implicit */unsigned char) arr_21 [i_4] [i_4] [i_9 + 2] [i_9]);
            arr_39 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_10 [i_4] [i_4] [i_4] [i_4] [(short)4])))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [i_9] [i_9 + 1]))) : (arr_30 [i_4] [i_4] [i_9] [i_9 + 2] [i_9 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14148)))));
            arr_40 [i_4] [i_9] [i_9] = ((/* implicit */signed char) arr_3 [i_9 - 1] [i_9 + 2] [i_9 + 1]);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_10] [i_10] [i_10])) && (((/* implicit */_Bool) 18446744073709551615ULL))))));
            arr_43 [(unsigned short)2] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_1 [(_Bool)1]);
            arr_44 [i_10] [15] = (((+(4294967295U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)3]))));
        }
        var_21 += ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        arr_47 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */int) (unsigned short)53313)) : (((/* implicit */int) arr_25 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [3U]))));
        arr_48 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_11] [i_11 + 1])) ? (((/* implicit */int) arr_19 [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) arr_33 [i_11]))));
    }
}
