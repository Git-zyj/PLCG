/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122000
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
    var_11 = ((/* implicit */unsigned short) (-(var_0)));
    var_12 = ((/* implicit */short) (((~(((/* implicit */int) min(((unsigned short)14730), ((unsigned short)2847)))))) / (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((((/* implicit */int) var_9)) / (arr_0 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) (~(arr_4 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))) : (((((/* implicit */unsigned long long int) var_7)) / (arr_4 [i_1] [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) (unsigned short)2828)) : (((/* implicit */int) (short)-32741))));
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 20; i_4 += 4) 
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3] [i_4 - 1])) == (((/* implicit */int) arr_8 [i_3] [i_4 - 2])))))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        arr_19 [i_1] [i_1] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */short) arr_14 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_5 + 1]);
                        arr_20 [i_1] [i_4] [i_1] [(unsigned short)15] [12LL] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_4 - 1] [i_5 + 2])) * (((/* implicit */int) arr_9 [i_4 - 2] [i_5 - 1]))));
                        arr_21 [(_Bool)1] [i_4] [(short)15] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_4 + 2] [(_Bool)1]))) - (arr_4 [i_1] [i_1])));
                        var_16 *= ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_4 + 2] [i_5 - 1] [(_Bool)1] [(unsigned char)11])) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_1] [i_2])) : (((/* implicit */int) (signed char)-1))))));
                    }
                    for (int i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        arr_24 [i_6] [i_4] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6]))) | (arr_23 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6] [i_6])));
                        arr_25 [i_1] [i_1] [i_1] [(short)15] [i_4] [i_1] = ((/* implicit */long long int) ((short) arr_22 [i_1] [i_1] [i_4] [i_1]));
                        arr_26 [i_1] [i_4] [i_3] [(unsigned char)8] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 815987768)) ? (8659012502765537542LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))));
                        arr_27 [i_4] [i_4 - 2] [(unsigned char)17] = ((/* implicit */unsigned short) arr_14 [i_4 - 3] [i_4] [(short)19] [i_4 + 1] [(unsigned char)18]);
                        arr_28 [(short)3] [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) arr_17 [i_4] [i_2]);
                    }
                    arr_29 [i_1] [i_4] [i_1] [(short)13] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [1LL]) ? (((/* implicit */unsigned int) arr_5 [i_1])) : (var_3)))) ? (((unsigned int) arr_23 [i_1] [i_2] [i_2] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */unsigned int) ((arr_11 [i_1]) ? (arr_5 [i_1]) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])))))));
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_4])) / (arr_4 [i_3] [(short)10]))))));
                    arr_30 [i_1] [(short)0] [i_1] [i_4] = ((/* implicit */unsigned int) ((unsigned char) arr_10 [(_Bool)1] [21]));
                }
                arr_31 [(unsigned char)19] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
            }
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_17 [i_7] [i_2])) : (((/* implicit */int) ((arr_16 [(unsigned short)4] [i_2] [i_7]) && (((/* implicit */_Bool) (short)-14127)))))));
                    arr_37 [i_1] [i_1] [i_7] [i_7] [i_7] = ((((/* implicit */int) arr_16 [(short)15] [i_2] [i_2])) & (((/* implicit */int) arr_16 [i_1] [i_1] [i_8])));
                    var_19 ^= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                }
                arr_38 [i_1] [i_7] [i_1] = ((((/* implicit */_Bool) arr_18 [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) arr_18 [i_1])));
            }
            arr_39 [i_2] = (!(((/* implicit */_Bool) arr_10 [i_1] [i_1])));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)50806)))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_9 = 4; i_9 < 19; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_46 [i_9] [i_10] = ((/* implicit */signed char) min((((/* implicit */int) arr_11 [i_9 - 1])), ((-(((/* implicit */int) var_2))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-31710)) ? (((/* implicit */int) (unsigned short)2847)) : (((/* implicit */int) (_Bool)1)))) / ((~(((/* implicit */int) var_8))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9 - 4] [i_9 - 1] [i_1] [i_9]))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_3))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (short i_12 = 3; i_12 < 21; i_12 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((int) arr_32 [i_12] [i_1]));
                                arr_51 [i_9] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */short) ((long long int) ((unsigned short) arr_36 [i_12] [(_Bool)1] [(_Bool)1] [i_12] [i_12] [i_12 - 3])));
                                arr_52 [i_9] [i_9 + 3] [i_9] [i_9] [i_9 + 2] = ((/* implicit */short) (-((~(((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_9] [i_1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_9] [i_9] [i_11] [i_9 - 4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_23 = ((/* implicit */int) var_4);
}
