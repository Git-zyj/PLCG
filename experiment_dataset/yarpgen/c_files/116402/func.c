/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116402
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
    var_15 = ((/* implicit */unsigned int) ((long long int) var_1));
    var_16 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((unsigned char)240), (((/* implicit */unsigned char) (signed char)-74))))), (var_14)))), (var_0)));
    var_17 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */long long int) var_1))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [13] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_2] [i_0]) / (arr_3 [i_0] [i_1])));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_6 [2ULL] [0ULL] [i_1] [2ULL]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [(signed char)9] [i_0] = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_1] [i_3]) - (arr_4 [i_0] [i_1] [i_2])));
                        arr_14 [i_0] [5] [i_2] = (~(((/* implicit */int) arr_10 [i_1])));
                    }
                    for (unsigned int i_4 = 3; i_4 < 12; i_4 += 1) 
                    {
                        arr_17 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+((-(var_0)))));
                        arr_18 [i_0] [i_2] [(_Bool)1] = ((/* implicit */_Bool) (~(arr_0 [i_4 + 2])));
                        arr_19 [i_4] = ((/* implicit */signed char) (+(var_0)));
                        arr_20 [4U] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_15 [i_4 + 2] [11U] [i_4 - 3] [i_4 + 1] [i_4 + 2]) : (arr_15 [i_4 - 2] [i_4] [i_4] [i_4 - 1] [i_4 - 1])));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) & (arr_2 [i_0])))) ? ((+(arr_1 [(_Bool)1] [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(signed char)3] [i_5])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) (short)-9589))))));
                        arr_24 [i_0] [i_2] [i_5] = ((/* implicit */signed char) (~(((int) arr_3 [i_0] [i_0]))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        arr_31 [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_6] [(_Bool)1] [i_0]))) <= (((((/* implicit */_Bool) arr_2 [i_7])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_32 [i_6] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [i_6]))));
                        arr_33 [i_0] [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(_Bool)0] [(_Bool)0])) ? (arr_26 [i_8] [i_6] [i_7]) : (arr_30 [i_6] [i_0] [i_0] [i_0] [i_6]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        arr_38 [i_9] [i_9] |= ((/* implicit */unsigned char) arr_0 [i_9]);
        arr_39 [i_9] = arr_30 [i_9] [i_9] [i_9] [i_9] [4ULL];
        arr_40 [i_9] [i_9] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)241))))), (-1506665978497465094LL)))));
        arr_41 [i_9] [i_9] = ((/* implicit */_Bool) arr_1 [i_9] [i_9]);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_44 [12ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((arr_43 [14]) && (((/* implicit */_Bool) arr_42 [0ULL])))) ? (((/* implicit */int) (!(arr_43 [i_10])))) : (((/* implicit */int) arr_43 [i_10])))) : (((arr_43 [i_10]) ? (arr_42 [(_Bool)1]) : (((/* implicit */int) arr_43 [i_10]))))));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_48 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((arr_46 [i_11] [i_10]) ^ (arr_45 [(_Bool)1] [i_10])))) ? (((/* implicit */int) min((arr_47 [i_10]), (arr_43 [i_10])))) : (((/* implicit */int) var_6)))), (arr_42 [i_10])));
            arr_49 [10ULL] [i_11] [i_11] &= ((/* implicit */unsigned long long int) max((arr_46 [10ULL] [(signed char)7]), (arr_45 [i_10] [i_10])));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 1) 
    {
        arr_53 [i_12] = ((/* implicit */unsigned long long int) (!(var_6)));
        /* LoopNest 2 */
        for (signed char i_13 = 2; i_13 < 12; i_13 += 2) 
        {
            for (int i_14 = 1; i_14 < 9; i_14 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_60 [i_13] [i_12] [i_13] [i_13 - 1] = ((/* implicit */unsigned long long int) arr_25 [i_12] [i_14 + 1] [i_15]);
                        arr_61 [i_13] [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_26 [i_12] [i_13] [i_14])))));
                        arr_62 [i_12 + 3] [i_13] = ((/* implicit */_Bool) arr_7 [i_15] [i_13] [i_12 + 2]);
                        arr_63 [i_12] [i_12] [i_15] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_12 + 1]))) < (arr_12 [i_15])));
                    }
                    arr_64 [i_12] [i_13 + 1] [i_12] [i_13 - 1] = ((/* implicit */int) ((((long long int) arr_57 [i_12 + 3] [(_Bool)1] [i_14 - 1])) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_14]))) - (arr_3 [i_12] [i_12]))))));
                }
            } 
        } 
        arr_65 [i_12] = ((long long int) arr_30 [i_12 - 3] [i_12 - 1] [i_12] [7] [i_12]);
        arr_66 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_52 [i_12])) ? (arr_21 [i_12] [3U] [i_12 - 1] [i_12] [i_12] [i_12 - 3]) : (((/* implicit */unsigned long long int) var_1))));
        /* LoopNest 2 */
        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
        {
            for (signed char i_17 = 2; i_17 < 12; i_17 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 13; i_19 += 4) 
                        {
                            arr_80 [i_18] [i_16] [i_17] [i_18] [2LL] = ((/* implicit */unsigned int) arr_75 [i_12] [i_12] [6U] [i_19]);
                            arr_81 [i_12] [i_12] [i_12 + 1] [i_12] [i_12 - 1] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_12] [i_12] [i_12 + 1] [i_12] [i_12] [i_12])) ? (arr_12 [i_16]) : (((/* implicit */unsigned long long int) arr_25 [(_Bool)1] [12] [12]))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_12 - 1] [i_12 - 1] [i_17 - 2])))));
                            arr_82 [i_12] [i_12] [i_12] [i_12] [i_12 - 3] = ((/* implicit */signed char) (+(arr_0 [i_12 - 2])));
                        }
                        for (int i_20 = 0; i_20 < 13; i_20 += 4) 
                        {
                            arr_87 [i_20] [i_12 + 2] [i_20] [i_12 - 3] [i_12 - 3] = ((/* implicit */long long int) arr_57 [i_12] [i_18] [i_17]);
                            arr_88 [i_20] [i_20] |= ((/* implicit */signed char) arr_69 [i_18] [12LL]);
                            arr_89 [i_12] [i_12] [12LL] [i_20] [i_20] = ((/* implicit */unsigned long long int) (-(arr_35 [i_17 + 1])));
                            arr_90 [i_12] [(signed char)10] [i_18] [4ULL] [(_Bool)1] [i_12] = ((/* implicit */unsigned long long int) (~(arr_0 [i_12 - 2])));
                        }
                        arr_91 [i_12] [i_16] [i_18] [12U] = ((/* implicit */unsigned short) ((arr_76 [i_17 - 2] [i_18]) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_79 [0U] [i_16] [i_16] [6LL] [8U] [i_18]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                        {
                            arr_96 [i_12] [i_12] [i_17 + 1] [i_18] [i_21] = ((/* implicit */unsigned long long int) (-(398772997U)));
                            arr_97 [i_12 + 3] [i_12 - 1] [i_18] [i_12 + 2] = ((/* implicit */signed char) (-(arr_11 [i_12 + 3] [i_12 - 2] [i_17 - 2] [i_17 - 1])));
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                        {
                            arr_101 [i_12 + 3] [i_12 + 3] [i_12 + 3] [i_12 + 3] [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_17] [i_17 - 2])) ? (arr_36 [i_17 + 1] [i_17 - 1]) : (arr_36 [i_17 - 2] [i_17 + 1])));
                            arr_102 [(_Bool)1] [(unsigned char)11] [i_18] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_23 = 0; i_23 < 13; i_23 += 1) 
                    {
                        arr_106 [9U] [i_17 + 1] [i_12] [i_16] [i_12] = ((/* implicit */signed char) arr_78 [i_12] [i_17 + 1] [i_12]);
                        arr_107 [i_12] [i_12 - 1] [2LL] [i_12] [i_12 - 1] [i_12 - 2] |= ((/* implicit */signed char) arr_7 [i_12] [i_12 - 2] [1]);
                    }
                }
            } 
        } 
    }
}
