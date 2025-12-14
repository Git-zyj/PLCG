/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102623
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
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)60903))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_2 - 2]);
                    var_14 = ((unsigned char) arr_8 [i_0 - 1]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_9 [i_2])))) >= ((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_2])))))))));
                        var_16 = ((/* implicit */unsigned long long int) ((int) arr_7 [i_3 + 1]));
                        arr_11 [i_1] [i_1] [i_2] [(short)11] = ((/* implicit */unsigned long long int) var_4);
                        var_17 |= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 2] [i_3]))) / (var_8))));
                        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_10 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_2] [8LL] [i_2])))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) arr_8 [i_0 - 1]);
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5265511752588480029LL))));
                    var_21 = ((/* implicit */signed char) var_6);
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) arr_4 [8LL] [i_0 - 1] [i_0])));
        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))));
        arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 2] [i_0 - 1] [11])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2]))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        var_23 = ((/* implicit */long long int) ((unsigned short) arr_5 [i_6]));
        var_24 = ((/* implicit */signed char) var_5);
        arr_21 [i_6] = ((/* implicit */long long int) ((((arr_0 [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_6])))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (unsigned int i_10 = 3; i_10 < 10; i_10 += 1) 
                {
                    {
                        var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_10 - 1] [i_10] [i_10] [i_10 - 2] [i_10 - 3])) ? (arr_10 [i_10 - 1] [i_10] [i_10] [i_10] [i_10 - 1]) : (arr_10 [i_10 + 2] [i_10] [i_10] [i_10] [i_10 - 1])));
                        arr_32 [i_7] [i_7] [i_7] [9LL] = ((/* implicit */unsigned int) var_10);
                        var_26 = ((/* implicit */_Bool) arr_30 [i_7] [i_10] [8] [(signed char)8] [i_10 + 2]);
                        /* LoopSeq 3 */
                        for (int i_11 = 1; i_11 < 10; i_11 += 3) /* same iter space */
                        {
                            arr_36 [i_10] [i_7] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))))));
                            arr_37 [i_7] [i_8] [8U] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) arr_20 [i_9] [i_10]);
                        }
                        for (int i_12 = 1; i_12 < 10; i_12 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) (-(arr_33 [i_10 - 2] [i_12 - 1] [i_8] [i_10 - 2] [i_12 + 1] [i_12 - 1] [i_12])));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_38 [i_7] [i_7] [i_9] [i_8] [i_12 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_9] [i_10] [i_10 - 1] [i_10 - 2])))));
                        }
                        for (unsigned long long int i_13 = 3; i_13 < 8; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_34 [4ULL] [4ULL] [4ULL] [4ULL] [4ULL]))) / ((+(((/* implicit */int) (unsigned char)255))))));
                            arr_43 [i_7] = ((/* implicit */_Bool) arr_22 [i_8] [i_9]);
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (arr_40 [i_7] [i_8] [i_9] [i_10 - 1] [i_13 + 3] [(signed char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_7] [i_7] [i_8])))))) ? (arr_41 [i_13] [i_13] [i_13 + 1] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_9] [i_10 - 2])))))))))));
                        }
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_10))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                {
                    arr_49 [i_7] = ((((/* implicit */int) arr_9 [i_7])) | (((/* implicit */int) arr_9 [i_7])));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 2; i_16 < 11; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 16977532239863869702ULL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (signed char)15)))));
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13486689831877735461ULL)) ? (((/* implicit */int) (unsigned short)32760)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) arr_28 [i_7] [2U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_0 [i_15]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_7] [i_14] [i_15] [i_16] [i_15])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_55 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60908)) ? ((-(((/* implicit */int) (unsigned short)46953)))) : (((/* implicit */int) (_Bool)1))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_7] [11] [i_7] [i_7] [10LL])) ^ (((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) arr_47 [(_Bool)1]))))))));
        arr_56 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (2147483647) : (((/* implicit */int) (_Bool)1))));
    }
}
