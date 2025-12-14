/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101816
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((_Bool) var_4))), (((unsigned int) 2044ULL)))) | (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((2044ULL) < (18446744073709549551ULL)));
                                arr_13 [i_2] [i_1] = ((/* implicit */long long int) (~(2044ULL)));
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((min((arr_12 [i_2] [i_2] [i_2] [i_2] [(unsigned short)6] [i_4 + 1]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (2070ULL)))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (max((arr_4 [7] [i_4]), (var_9))))))));
                                arr_15 [i_2] = ((/* implicit */unsigned int) ((2045ULL) ^ (((/* implicit */unsigned long long int) 1734954809))));
                                arr_16 [i_3] [i_3] [i_1] [i_1] [i_3] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_2] [3U])))) + ((+(((/* implicit */int) arr_11 [i_4 - 4] [i_4 + 4] [i_2 + 1] [i_3] [i_2 - 1] [i_2 + 1] [i_0 + 2]))))));
                            }
                        } 
                    } 
                    var_13 ^= (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [(unsigned short)4]), (arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2])))) || (((/* implicit */_Bool) arr_1 [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (2972330951U))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) arr_6 [i_1] [i_0] [i_2 + 1])) == (((/* implicit */int) ((signed char) (signed char)115))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_7] [i_7] &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) % (((/* implicit */int) arr_17 [i_0] [i_0])))) ^ ((~(((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_1] [i_0]))))));
                        arr_24 [i_2] [i_1] = ((((/* implicit */int) var_1)) < (((/* implicit */int) var_8)));
                        arr_25 [i_2] [(unsigned short)6] [i_2] = ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_7] [i_0 - 2] [i_2])));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_8 = 3; i_8 < 12; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            var_16 += ((/* implicit */signed char) (+(((((/* implicit */int) arr_3 [i_0 + 2])) | (((/* implicit */int) arr_3 [i_0 - 1]))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_0 - 2] [i_0 - 2])) + (1065353216)))), (arr_35 [5U] [5U] [5U] [i_10] [5U] [i_11] [12U]))))));
                        }
                        arr_36 [i_8] [i_8 - 1] [i_9] [(unsigned short)4] = ((/* implicit */int) arr_29 [i_0 + 1] [i_8 - 1] [(_Bool)1] [i_0 + 1]);
                        var_18 += ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_8 - 2]))) / (arr_1 [i_0 + 2]))) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_17 [i_0] [i_8 + 1]), (arr_17 [i_0] [i_8 - 2])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_12 = 1; i_12 < 11; i_12 += 2) 
                        {
                            arr_39 [i_8] [i_8 + 1] [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) (_Bool)0);
                            var_19 &= ((/* implicit */int) (+(var_3)));
                        }
                        for (int i_13 = 0; i_13 < 13; i_13 += 2) 
                        {
                            var_20 -= ((/* implicit */short) min(((-(max((var_10), (var_3))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_2)))))))));
                            arr_44 [(unsigned short)0] [i_8 - 3] [7LL] [i_9] [i_8] [i_13] [i_9] = ((/* implicit */unsigned short) ((((arr_43 [i_0] [i_8 + 1] [i_9] [i_8]) >= (arr_43 [i_0] [i_8 - 2] [i_8 - 2] [i_8]))) ? (((/* implicit */int) arr_26 [i_10] [i_9])) : (((/* implicit */int) var_1))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                arr_49 [i_8] [i_8] [i_8] = ((/* implicit */signed char) (~(((2630061538U) / (1664905779U)))));
                arr_50 [i_0] [3] [i_8] [i_8] = var_0;
                arr_51 [i_0] [i_8] [i_8] [(unsigned char)7] = ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_0] [i_8 - 2] [i_0 + 1] [i_8 - 2])) > (((/* implicit */int) arr_29 [i_0] [i_8 - 2] [i_0 - 1] [i_8 - 1]))));
            }
            arr_52 [i_8] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_0)))) * ((+((+(((/* implicit */int) (_Bool)1))))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_15 = 2; i_15 < 11; i_15 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
            arr_56 [i_0 - 1] [i_15 - 2] = ((/* implicit */signed char) min((arr_20 [i_0] [i_0] [10ULL] [i_0] [i_0 + 1]), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 11; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 1; i_17 < 12; i_17 += 4) 
            {
                for (int i_18 = 1; i_18 < 12; i_18 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_37 [i_19] [i_17] [i_17] [i_17 + 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            var_23 |= ((/* implicit */short) var_5);
                        }
                        arr_67 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))) < (var_5))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (arr_28 [i_0])))));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) arr_29 [i_16 + 1] [i_16 + 1] [i_0 + 2] [i_0 - 1]);
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) arr_26 [i_0 - 2] [i_0 + 1]))));
        }
    }
    var_26 = (+(var_10));
    var_27 = ((/* implicit */_Bool) min((((/* implicit */int) var_1)), ((~((~(((/* implicit */int) var_0))))))));
    var_28 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-122)));
    var_29 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_3)) && (var_4))) ? (((((/* implicit */_Bool) 735747748)) ? (var_10) : (var_3))) : (min((var_10), (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) var_1)))))));
}
