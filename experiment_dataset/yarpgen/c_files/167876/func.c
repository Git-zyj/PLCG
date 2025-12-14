/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167876
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(unsigned short)16] &= ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_3 [i_1] [(unsigned char)0] [i_1]), (var_1)))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0] [(short)1])))) : (((arr_0 [i_0] [i_1]) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))) < (((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1] [i_1])))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_4 [i_1])))))) % (arr_4 [i_0]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1)))))));
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_13)) < ((+(((/* implicit */int) var_16)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 7; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2] [i_3 - 1] [i_4])) | (((/* implicit */int) arr_1 [(unsigned short)19]))))) & ((~(arr_2 [i_4])))));
                        arr_17 [i_5] [i_5] [i_4 - 1] [i_5] [i_2] = (~(((arr_9 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2] [(unsigned char)1] [i_3] [i_2] [i_5 + 4]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            arr_21 [i_6] [i_3 - 1] [i_3 - 1] [i_6] = ((/* implicit */unsigned int) var_1);
                            arr_22 [i_2] [i_3] [i_6] [(short)0] [(short)0] [i_2] [i_4] = ((/* implicit */long long int) var_7);
                            arr_23 [i_2] [i_3] [i_4] [(_Bool)1] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((arr_0 [i_4 - 1] [i_5 + 2]) ? (arr_2 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4 - 1] [i_4] [i_5 - 3] [i_3 - 1] [i_4])))));
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2])) && (((/* implicit */_Bool) arr_4 [i_9]))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2] [(_Bool)1] [i_8])) ? (((/* implicit */int) arr_26 [i_2] [i_8] [i_2])) : (((/* implicit */int) arr_26 [(short)8] [(short)8] [i_2]))));
                        var_25 = ((/* implicit */_Bool) arr_15 [i_2] [i_7] [i_7] [i_8] [i_9] [i_9]);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 1; i_10 < 8; i_10 += 2) 
                        {
                            arr_32 [(unsigned short)4] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_10 - 1]))));
                            var_26 = ((/* implicit */_Bool) var_9);
                            var_27 -= ((/* implicit */_Bool) ((unsigned char) var_11));
                        }
                        var_28 &= ((/* implicit */long long int) (-((-(arr_9 [i_7])))));
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_29 &= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) == (arr_25 [i_2]))) ? (-638038574) : (((/* implicit */int) ((unsigned char) arr_15 [i_2] [6U] [(short)9] [i_7] [i_2] [i_8])))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_11] [i_7] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_8 [i_2] [i_2] [i_2]))))));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (~(((/* implicit */int) arr_24 [i_11] [i_11] [i_11])))))));
                    }
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (short)-1)))));
                        arr_38 [i_12] [(signed char)7] [i_8] = ((/* implicit */_Bool) arr_25 [i_8]);
                        var_33 = ((/* implicit */int) max((var_33), ((~(((/* implicit */int) arr_18 [(short)9] [i_7] [i_8] [5LL] [i_2] [(short)9]))))));
                    }
                    var_34 = ((/* implicit */unsigned char) (~(((var_2) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1254)))))));
                }
            } 
        } 
    }
}
