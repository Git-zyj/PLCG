/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1644
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
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_10 [i_1] [i_0] [i_3] = ((/* implicit */int) var_6);
                            var_12 -= max((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0])))) * (((/* implicit */int) arr_3 [i_2] [i_0 + 2] [i_2])))), ((-(((/* implicit */int) (signed char)-103)))));
                            var_13 *= ((/* implicit */signed char) min((max((((((/* implicit */long long int) var_5)) - (arr_1 [i_3] [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_4 [i_0 + 2] [i_1] [6] [i_3]))))))), (((/* implicit */long long int) max((arr_8 [i_2] [i_0 + 2] [i_0 + 1] [i_2]), (arr_8 [i_2] [i_0 + 2] [i_0 - 1] [i_2]))))));
                            arr_11 [i_0] [i_1] [1ULL] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (signed char)102)))));
                            var_14 = ((/* implicit */long long int) arr_2 [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_5 - 1] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_6])) > (((/* implicit */int) (signed char)-110))))) < (((/* implicit */int) (signed char)0))));
                                arr_22 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_1] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((unsigned long long int) arr_1 [i_0 + 1] [i_0 + 1])), (((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */int) arr_13 [i_0])))))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        arr_27 [i_7 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [12ULL] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_34 [i_9] [i_8] [i_8] [i_7] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_3 [i_7 - 1] [i_7 - 1] [i_8]))))));
                    var_15 -= ((/* implicit */_Bool) max((arr_6 [(short)0] [(short)0] [(short)0] [i_9]), (((/* implicit */unsigned int) var_2))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) arr_24 [i_7 - 1]);
        arr_35 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) min((var_7), (arr_2 [i_7 - 1])))) != (((long long int) arr_8 [i_7 - 1] [i_7] [i_7] [10LL]))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        var_17 ^= ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_10] [i_10] [(signed char)10])) ? (((arr_1 [i_10] [9LL]) | (((/* implicit */long long int) var_5)))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
        var_18 = ((/* implicit */unsigned char) var_7);
        var_19 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_10])))) : ((+(var_5))))), ((+(((/* implicit */int) arr_38 [(unsigned char)6]))))));
    }
    for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_43 [i_11] [i_11] [5] = ((/* implicit */short) (signed char)-1);
            var_20 &= ((/* implicit */long long int) (+(arr_2 [i_11])));
            arr_44 [i_11] [i_12] = (~(((/* implicit */int) (_Bool)0)));
            var_21 = ((/* implicit */signed char) ((_Bool) ((arr_6 [i_11] [i_11] [i_11] [i_11]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11]))))));
        }
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_11] [i_11] [i_11] [i_11])) + (((/* implicit */int) arr_4 [i_11] [i_11] [i_11] [i_11]))))) ? (max((arr_6 [i_11] [i_11] [i_11] [i_11]), (arr_6 [i_11] [i_11] [i_11] [i_11]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_11] [i_11] [i_11] [i_11])))));
        /* LoopSeq 2 */
        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-6))));
            var_24 = ((/* implicit */unsigned int) (_Bool)1);
            arr_48 [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) (((~(min((var_7), (((/* implicit */unsigned int) arr_37 [i_11])))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_11])))))));
            arr_49 [i_11] = ((/* implicit */unsigned int) (((-(((var_3) / (((/* implicit */int) arr_24 [4LL])))))) | (((/* implicit */int) arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
            arr_50 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (((~(arr_39 [i_11]))) != ((~(arr_39 [i_11])))));
        }
        for (signed char i_14 = 4; i_14 < 11; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                for (int i_16 = 1; i_16 < 11; i_16 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11] [i_11] [i_14] [i_11]))) * (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_57 [i_16] [i_11] [i_14 + 2] [i_11] [i_11])) > (((/* implicit */int) (signed char)-100))))), (arr_56 [i_11] [i_14 - 1] [i_11] [i_15] [i_14 - 1] [i_16 + 2])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            arr_60 [i_11] = ((/* implicit */unsigned long long int) (-(-604752091)));
                            arr_61 [i_11] [10U] [2U] [i_16 - 1] [i_11] [i_17] [i_16] = ((/* implicit */unsigned int) (~(arr_0 [i_14 - 3])));
                            var_26 ^= ((/* implicit */signed char) (+(arr_55 [(signed char)2] [i_14 - 4])));
                        }
                        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned short) var_6);
                            var_28 += ((/* implicit */_Bool) arr_5 [i_11] [i_11] [i_15] [i_11]);
                        }
                        arr_65 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) max((((/* implicit */int) (signed char)6)), (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) arr_7 [i_11] [i_11] [i_14 - 4] [i_14])))))));
                    }
                } 
            } 
            arr_66 [i_11] [i_11] [i_14] &= ((/* implicit */unsigned int) arr_55 [i_14 - 2] [i_11]);
        }
        var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-((+(var_10)))))), (((arr_0 [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_11] [i_11] [i_11] [i_11])))))));
        arr_67 [i_11] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-53)) || (((/* implicit */_Bool) arr_25 [i_11]))))), (arr_19 [i_11] [i_11] [i_11]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_11] [i_11])))));
    }
    for (unsigned long long int i_19 = 2; i_19 < 17; i_19 += 2) 
    {
        arr_71 [i_19] [3U] &= (signed char)-67;
        var_30 = ((/* implicit */short) ((max((((/* implicit */long long int) ((808861623U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [15ULL] [15ULL])))))), (max((arr_68 [i_19]), (-543617767305515917LL))))) << (((((unsigned long long int) arr_70 [i_19 - 1])) - (296940297ULL)))));
        /* LoopNest 2 */
        for (long long int i_20 = 4; i_20 < 17; i_20 += 2) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) 
            {
                {
                    var_31 |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    for (long long int i_22 = 0; i_22 < 19; i_22 += 2) 
                    {
                        var_32 *= ((/* implicit */unsigned long long int) ((signed char) ((var_7) | (((((/* implicit */unsigned int) var_3)) ^ (808861610U))))));
                        arr_79 [i_20] [i_21] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) var_11)), (arr_68 [i_20]))))), (3486105672U)));
                    }
                    var_33 ^= ((/* implicit */_Bool) ((int) var_11));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 19; i_23 += 4) 
    {
        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
        {
            for (long long int i_25 = 4; i_25 < 18; i_25 += 3) 
            {
                {
                    arr_86 [i_23] [i_23] [i_23] [i_25] = ((/* implicit */_Bool) ((((_Bool) (~(((/* implicit */int) var_11))))) ? (3030821028U) : (((/* implicit */unsigned int) var_3))));
                    var_34 = ((/* implicit */short) arr_69 [i_23] [i_24]);
                }
            } 
        } 
    } 
}
