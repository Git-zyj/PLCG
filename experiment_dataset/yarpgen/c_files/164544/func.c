/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164544
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
    var_11 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        var_12 = ((/* implicit */int) arr_0 [i_3]);
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2473))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 + 1]))) : (((max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_3 - 1])), (arr_0 [i_1 + 1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)6])))))));
                        var_14 = (+(((((/* implicit */int) arr_7 [i_3] [i_3 + 1])) + (((/* implicit */int) arr_7 [i_3] [i_3 - 1])))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) min((8187233355964638584ULL), (((/* implicit */unsigned long long int) (short)5580))));
                        var_16 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 1] [i_1] [i_1] [i_1]);
                        arr_13 [i_1] [i_4] [i_4] [i_1] [(unsigned char)1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_7 [i_0] [i_4 + 1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_2] [i_1] [i_4 + 1] [i_1])))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_4] [i_2] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1] [i_1] [i_1] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_10 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0])), (arr_0 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_1])) != (((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_0] [(short)12]))))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_5])) ? (((/* implicit */int) (unsigned short)51043)) : (((/* implicit */int) (_Bool)1))))));
                                var_18 ^= ((/* implicit */_Bool) max((max((min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_2])), (arr_17 [(unsigned short)6] [(unsigned short)6]))), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1])))), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] [i_0] = (~(((/* implicit */int) max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned short) arr_14 [i_1] [i_1 - 1] [i_1] [i_1]))))));
                    arr_20 [i_0] [i_1 - 1] [i_1] [i_2] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))) ? (((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) arr_11 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0])))) : (((/* implicit */int) min(((signed char)107), (((/* implicit */signed char) (_Bool)1)))))))), ((-(max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 12; i_7 += 4) 
    {
        for (int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        arr_32 [i_7] [i_10] [(_Bool)1] [i_10 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_8 + 1])) ? ((~(arr_29 [i_7 - 1]))) : (max((arr_2 [i_9]), (((/* implicit */unsigned long long int) arr_18 [i_10] [i_7 - 2] [i_8 + 1] [i_9] [i_9] [i_10 + 2]))))));
                        arr_33 [i_10] [i_9] [i_8 + 1] [i_8] [i_10] = ((/* implicit */unsigned char) max((arr_22 [i_9]), (((max((((/* implicit */unsigned long long int) arr_6 [i_9] [i_8])), (arr_0 [i_7]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [0] [i_10])) ^ (((/* implicit */int) arr_5 [i_7] [i_10])))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        arr_36 [i_9] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_11])) ? (arr_35 [i_11]) : (arr_35 [i_11])));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((arr_16 [i_9] [5U]) ? (((/* implicit */int) arr_31 [i_7] [i_9] [i_9] [i_11])) : (((/* implicit */int) arr_4 [i_7])))) - (((/* implicit */int) arr_9 [i_11 + 1] [i_7] [i_7] [i_7])))))));
                        arr_37 [i_7 - 1] [i_7] [i_7] [i_11] [i_7 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7] [i_8 - 1] [i_7] [i_11])) ? (((/* implicit */unsigned long long int) arr_28 [i_9] [i_9] [i_7] [i_7])) : (arr_12 [i_11] [i_8] [i_8] [i_8]))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_7 + 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_7] [i_7 - 2])), (arr_4 [i_7 - 2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_7] [i_7 - 1])), (arr_4 [i_7 + 1]))))));
                        arr_40 [i_7] = ((/* implicit */int) arr_1 [2U]);
                        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9] [i_12]))) ^ (arr_35 [i_12])));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_39 [3ULL] [i_9] [i_8] [i_7 - 1])), (arr_7 [i_7] [10])))) ? (((/* implicit */int) arr_1 [i_9])) : ((~(((/* implicit */int) arr_39 [i_12] [i_9] [i_8 - 1] [i_7]))))))))))));
                        arr_41 [i_7] [i_7] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((arr_24 [i_7 - 2] [i_8 + 1]) < (((((/* implicit */_Bool) arr_26 [i_9] [i_7])) ? (((/* implicit */int) arr_10 [i_12] [i_9] [i_8 + 1] [i_7])) : (((/* implicit */int) arr_1 [i_9])))))) ? (min((((((/* implicit */_Bool) arr_4 [i_8])) ? (arr_12 [i_7] [(_Bool)1] [(_Bool)1] [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [i_12]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_7 + 1] [i_7] [4] [i_7] [i_9] [i_12])) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) arr_34 [i_7] [i_8 - 1] [7] [i_12]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10368164398444686304ULL)) ? (((/* implicit */int) (unsigned char)216)) : (-442442559))))));
                    }
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 2) 
                        {
                            {
                                var_23 ^= ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_14 + 2] [i_9] [i_8])) << (((arr_45 [(signed char)6] [i_8 - 1] [(short)8] [i_8 - 1] [i_9] [i_13] [i_14]) - (8361784134707335807ULL)))))), (min((arr_0 [i_7]), (arr_38 [i_7] [i_8] [i_8]))))) >> ((((~(((((/* implicit */int) arr_11 [i_9] [i_13] [i_9] [i_9] [i_8] [i_7])) | (arr_24 [i_13] [2U]))))) - (2090181605)))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -733297553)) ? (((/* implicit */int) (short)1183)) : (((/* implicit */int) (_Bool)0)))))));
                                arr_46 [i_14 - 1] [i_14] [i_9] [i_14] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_14] [i_8])) ? (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_15 [i_14] [i_14] [i_14] [i_7])), (arr_18 [i_14] [i_14] [(unsigned char)2] [i_9] [i_8 + 1] [i_14])))))) : (((((((/* implicit */_Bool) (unsigned short)9217)) ? (12030001912266511460ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (arr_2 [i_7])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_2);
}
