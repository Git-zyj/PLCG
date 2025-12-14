/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100403
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
    var_14 = min(((-(((((/* implicit */_Bool) var_2)) ? (var_4) : (var_4))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : ((+(var_0))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 += ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_0 [8U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] = ((unsigned int) (~(((unsigned int) arr_3 [i_0] [i_1]))));
            arr_5 [i_0] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)11] [i_0]))) : (arr_3 [i_0] [i_0])));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */_Bool) arr_6 [i_2]);
        var_16 = ((/* implicit */unsigned int) min((var_16), ((~(arr_7 [i_2])))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_5] = arr_18 [i_3];
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_3] [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_6]))))))) < ((-(arr_18 [i_5]))))))));
                            var_18 = (+(((unsigned long long int) arr_10 [i_3])));
                        }
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned char) 511ULL)))));
                        var_20 ^= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_14 [11U] [i_4] [i_5] [i_6]))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_21 -= ((/* implicit */unsigned int) arr_11 [i_8] [i_8]);
                        arr_26 [i_3] [6ULL] = var_10;
                    }
                    for (unsigned char i_9 = 3; i_9 < 15; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) 14438004542855446022ULL)) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))) ? (min((((((/* implicit */_Bool) 850251748U)) ? (var_2) : (((/* implicit */unsigned long long int) arr_7 [i_9])))), (((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_3] [i_3] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (4294967295U))))) < (max((18446744056529682432ULL), (((/* implicit */unsigned long long int) arr_22 [i_3] [i_4] [i_5]))))))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_13))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_12))));
                        var_25 ^= ((/* implicit */unsigned char) (~(var_8)));
                        var_26 = max((((unsigned long long int) var_13)), (max((((var_7) / (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_27 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_3] [i_4] [i_5] [(_Bool)1] [i_11])) | (((/* implicit */int) (_Bool)1))))), ((+(18446744073709551614ULL)))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_7 [i_3]))) : (arr_7 [i_5]));
                                var_28 *= ((/* implicit */unsigned long long int) (unsigned char)29);
                                var_29 = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_25 [i_3] [i_4] [i_5] [i_10] [i_11])), (var_8))));
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_31 [i_3] [i_3] [i_3] [i_3]))));
                            }
                        } 
                    } 
                    arr_35 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_33 [i_3] [i_4] [i_5] [i_5] [i_3]))))) - ((+(arr_10 [(_Bool)1])))))) + (min((1943672688410146680ULL), ((+(var_0)))))));
                    var_31 = (((!(((/* implicit */_Bool) arr_10 [i_3])))) ? (max((arr_13 [i_3] [(_Bool)1]), (arr_16 [i_3] [i_3] [i_4] [i_4] [i_5]))) : (((unsigned long long int) (-(((/* implicit */int) var_12))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 2; i_13 < 17; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) (-(arr_27 [i_3] [i_12] [i_13] [i_14])));
                        var_33 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_13])))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_48 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((arr_28 [i_15] [i_15] [i_15] [0ULL]) / (6872266098609896222ULL))) > (((/* implicit */unsigned long long int) arr_31 [i_15] [i_15] [i_15] [13ULL]))));
        arr_49 [1ULL] [i_15] = ((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_15] [i_15]));
    }
}
