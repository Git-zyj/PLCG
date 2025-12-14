/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142940
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
    var_14 = ((/* implicit */short) 4111135687732706013ULL);
    var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) ((short) (+(((/* implicit */int) var_9))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [(unsigned char)21] [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_12))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
                    var_19 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_20 = ((unsigned char) (short)26809);
        var_21 = ((/* implicit */short) ((((/* implicit */int) var_9)) * ((-(((/* implicit */int) arr_14 [i_4] [(signed char)10]))))));
        arr_15 [0ULL] [0ULL] |= ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_4]))));
        arr_16 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-8)) + (((/* implicit */int) (short)24284))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_3 [(short)21]))))) : (arr_9 [(signed char)3] [(signed char)3] [i_4]));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) arr_7 [i_5] [5ULL]);
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    var_23 = (short)-16504;
                    arr_26 [(short)2] = ((arr_24 [i_5] [i_6] [i_5 - 4] [(signed char)5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-18)) != (((/* implicit */int) (signed char)8)))))));
                    var_24 = ((/* implicit */short) min((var_24), (((short) (short)-5332))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (short i_9 = 2; i_9 < 14; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 16; i_11 += 1) 
                        {
                            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [(signed char)8] [i_11] [i_11 + 1] [i_11])) ? (((/* implicit */int) arr_37 [i_8] [i_9 + 2] [15ULL] [15ULL] [(short)15])) : (((/* implicit */int) arr_22 [i_10] [i_10] [i_9 - 2]))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)206)) * (((/* implicit */int) arr_37 [i_11] [i_11] [i_9 + 3] [i_10] [i_11 - 1])))))));
                            arr_39 [12ULL] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_8] [(short)8] [(signed char)5])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [(short)8]))))) ? (((/* implicit */int) arr_3 [i_10])) : (((/* implicit */int) ((unsigned char) var_8)))));
                            arr_40 [3ULL] [8ULL] [i_11] [i_11] [(signed char)13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_1 [i_11] [i_5])))));
                            arr_41 [(short)15] [(signed char)13] [(short)7] [i_11] [(unsigned char)14] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_2))))) / (((((/* implicit */_Bool) 549722259456ULL)) ? (((/* implicit */int) (short)-30111)) : (((/* implicit */int) (signed char)-9))))));
                        }
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (unsigned char)244))));
                        arr_42 [(signed char)16] [(unsigned char)15] [i_9] [(signed char)4] [(unsigned char)15] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_10]))));
                    }
                } 
            } 
        } 
        var_28 *= ((/* implicit */short) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) arr_2 [(signed char)16]))));
        var_29 &= ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_5 - 4] [i_5 - 4]))));
    }
}
