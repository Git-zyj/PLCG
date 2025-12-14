/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107926
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        var_18 = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0 - 1]) << (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) - (165)))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) ((min((arr_5 [i_1 - 2]), (((/* implicit */unsigned int) arr_4 [i_1 + 1])))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1 - 3])), (arr_6 [i_1] [i_1])))) ? (((/* implicit */int) ((arr_6 [i_1] [i_1 + 2]) >= (arr_6 [i_1] [i_1 + 2])))) : (((/* implicit */int) arr_3 [i_1 + 2])))))));
        var_19 = ((/* implicit */unsigned int) min(((unsigned char)33), (((/* implicit */unsigned char) (signed char)-63))));
    }
    for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned char) min((min((((arr_6 [i_2] [i_3]) % (((/* implicit */unsigned long long int) arr_11 [i_2] [i_3])))), (((arr_6 [i_2 - 2] [i_3]) - (((/* implicit */unsigned long long int) arr_11 [i_2] [i_3])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_11 [i_2] [i_3])) / (arr_6 [i_2] [i_3]))) != (((/* implicit */unsigned long long int) min((arr_11 [i_2] [i_2]), (((/* implicit */unsigned int) arr_8 [i_2] [i_3]))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_6 - 2] [i_6] [i_6 - 2] [i_4])) & (((/* implicit */int) arr_16 [i_6 + 2] [i_6] [i_6] [i_4]))));
                            arr_20 [i_2] [i_2] [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [(unsigned char)7] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1]))) : (arr_15 [i_2] [i_2 + 1] [i_2 + 2] [i_6 - 1] [i_6] [i_6 - 1])));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_6 + 2])) && (((/* implicit */_Bool) arr_5 [i_6 - 2]))));
                            arr_21 [i_2 + 1] [i_2 + 1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_4]))) % (arr_9 [i_4] [i_6 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_5])) << (((arr_10 [i_4]) - (937304373U)))))) : (arr_6 [i_5] [i_6 + 2])));
                        }
                    } 
                } 
                arr_22 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_13 [i_2 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_2] [4] [i_4] [i_3] [i_2 + 2] [i_3])) + (((/* implicit */int) arr_18 [i_2 - 3] [i_3] [i_3] [i_2 - 3] [i_4] [i_2 - 3])))))));
                arr_23 [i_4] [i_3] = ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_4])) ^ (((/* implicit */int) arr_16 [i_2] [i_3] [i_2] [i_4])))) >= (((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_3] [i_3] [i_4] [i_3] [i_2])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_4 [i_2]))))));
                arr_24 [i_2] [i_2 - 3] [i_4] [i_4] = ((/* implicit */_Bool) ((arr_9 [i_2 + 2] [i_3]) ^ (arr_9 [i_2 - 2] [7LL])));
                var_22 = arr_19 [i_2] [i_2] [i_3] [i_3] [i_4] [i_4] [i_4];
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    for (unsigned int i_9 = 3; i_9 < 17; i_9 += 2) 
                    {
                        {
                            arr_33 [i_2] [i_3] [i_7] [i_7] [i_9 + 3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [(short)10] [0U] [i_7] [7U])) ? (((/* implicit */int) arr_19 [i_2 - 1] [i_3] [i_7] [i_8] [i_7] [i_3] [i_8 + 2])) : (((/* implicit */int) arr_31 [i_2] [i_3] [i_7] [i_3]))));
                            var_23 = ((/* implicit */short) ((((arr_9 [i_3] [i_7]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_2] [i_3] [i_7] [i_7]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_2] [i_3] [i_7] [i_9])) || (((/* implicit */_Bool) arr_17 [i_8 - 1] [i_8 - 1] [i_7] [i_7]))))))));
                            arr_34 [i_2] [i_3] [i_7] [i_8 + 2] [i_9] [i_3] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_2] [i_2 - 2] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_26 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2 - 2]))));
                        }
                    } 
                } 
                arr_35 [i_2] [i_3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_2 + 1] [i_2] [i_2 + 2] [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7]))) > (arr_15 [i_2] [i_3] [12U] [i_3] [i_7] [i_7])))) : (((/* implicit */int) arr_3 [i_3]))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 1) 
                {
                    for (long long int i_11 = 4; i_11 < 16; i_11 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_3] [i_3])) < (((/* implicit */int) arr_17 [i_2 - 4] [i_11 - 2] [i_7] [i_10]))));
                            arr_43 [i_10] [i_3] [i_7] [i_10 + 1] [i_11] = ((/* implicit */unsigned int) arr_13 [i_11]);
                            arr_44 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 48415813U)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned char)64))));
                            arr_45 [i_2] [i_3] [i_3] [i_2] [i_10] = ((/* implicit */unsigned char) ((arr_13 [i_10 + 1]) >> (((arr_13 [i_10 - 2]) - (4036054554196855377ULL)))));
                            arr_46 [i_2] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 1]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40416))) ^ (3ULL)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_2 + 1] [i_2 - 2] [i_3] [i_3])) ? (((/* implicit */int) arr_26 [i_2] [i_2 - 2] [i_7] [i_2])) : (((/* implicit */int) arr_26 [i_3] [i_2 - 2] [i_7] [i_2 - 3]))));
            }
            var_26 = ((/* implicit */unsigned short) ((((arr_9 [i_2 + 2] [i_3]) % (arr_9 [i_2 - 1] [i_3]))) / (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)58290), (((/* implicit */unsigned short) (_Bool)1))))))));
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 17; i_12 += 3) 
        {
            arr_50 [i_2 - 1] = ((/* implicit */_Bool) ((arr_14 [i_2] [i_2 - 3] [i_12 - 1] [i_12 - 1]) >> (((((/* implicit */int) arr_16 [i_2 - 3] [i_12 - 1] [i_12] [(unsigned char)10])) / (((/* implicit */int) arr_18 [i_2 + 2] [i_12] [i_12] [i_2 - 1] [i_2] [i_12]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                for (signed char i_14 = 2; i_14 < 17; i_14 += 2) 
                {
                    {
                        arr_57 [i_2] [i_12 + 1] [i_13] [i_13] [i_14 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_12 + 3] [i_12] [i_14 + 3])) > (((/* implicit */int) arr_25 [i_12 + 3] [i_12] [i_14 + 2]))));
                        arr_58 [i_14 + 2] [i_14 + 2] [i_13] [i_12 - 3] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_6 [i_2 - 3] [i_2 - 3]) != (((/* implicit */unsigned long long int) arr_47 [i_12]))))) % (((((/* implicit */_Bool) arr_26 [i_2] [i_12] [i_13] [i_14])) ? (arr_49 [i_12] [i_13] [i_14]) : (((/* implicit */int) arr_37 [3LL] [3LL] [i_12] [i_13] [i_14] [i_14]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 4; i_15 < 18; i_15 += 3) 
                        {
                            arr_62 [i_2] [i_12] [i_12] [i_13] [(unsigned char)1] [i_15] = ((((/* implicit */_Bool) arr_19 [i_2 + 2] [i_2 - 1] [i_13] [i_14 + 3] [i_14] [i_2 + 2] [i_14])) && (((/* implicit */_Bool) arr_3 [i_2 + 2])));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_2 - 4])) ? (((/* implicit */int) arr_56 [i_2 + 1] [i_2 + 2] [i_15 - 2])) : (((/* implicit */int) arr_56 [i_2] [i_2 - 1] [i_15 + 2]))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_14 + 1])) ? (arr_6 [i_2 - 4] [i_14 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_2] [i_2 - 2] [i_12 + 2] [i_13] [i_15 - 4] [i_15 - 3])))));
                        }
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_2])) % (((/* implicit */int) arr_16 [i_2] [i_2 - 1] [i_2 + 2] [4U]))))) ? (((arr_47 [i_2]) ^ (((/* implicit */int) arr_17 [i_2 - 2] [i_2 + 1] [i_2 + 1] [(unsigned char)0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_32 [i_2 + 2] [13] [i_2 + 2] [i_2] [i_2] [i_2 - 1] [i_2]))))))) >> (((((arr_11 [i_2] [i_2 + 1]) + (arr_11 [i_2] [i_2 + 1]))) - (3876100707U)))));
    }
    var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_8)), (var_2))) - (var_17)))) * (((var_15) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_14))))))))));
}
