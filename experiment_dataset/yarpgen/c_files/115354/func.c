/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115354
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
    for (short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_0 [i_0])));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_15 &= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_1 [i_0 - 4] [i_1]))) : (((/* implicit */long long int) max((var_10), (((/* implicit */int) arr_0 [i_1]))))));
            var_16 = ((/* implicit */unsigned int) ((min((arr_3 [i_0 - 4] [i_0 - 2] [i_0 - 3]), (arr_3 [i_0 - 4] [i_0 - 2] [i_0 - 3]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 2] [i_0 - 3])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
            var_17 &= ((/* implicit */int) ((max((arr_1 [i_0 + 1] [i_1]), (arr_1 [i_0 + 1] [i_1]))) ^ (min((arr_1 [i_1] [i_0 - 3]), (((/* implicit */long long int) arr_2 [i_0 + 1]))))));
            arr_6 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) min((arr_4 [i_0 - 4] [i_0 + 1] [i_0 + 1]), (arr_4 [i_0 - 4] [i_0] [i_0 + 1]))))));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_1]))))));
        }
        for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            var_18 = ((/* implicit */_Bool) ((((arr_1 [i_0 - 4] [i_0 - 4]) > (arr_1 [i_0 - 2] [(short)6]))) ? (min((((/* implicit */int) min((var_11), (arr_11 [i_0])))), (min((var_10), (((/* implicit */int) arr_11 [i_2])))))) : (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_2 - 1])) : (arr_1 [i_2 - 2] [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((arr_4 [i_0 - 3] [i_0] [i_0 - 2]), (((/* implicit */short) arr_5 [i_0] [i_2 - 1])))))))));
            var_19 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0] [i_0 - 4])), (arr_9 [i_0] [i_0] [i_2])))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_20 *= ((/* implicit */unsigned short) var_12);
                            var_21 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) var_12)) >= (((arr_10 [i_4] [i_2] [i_0]) - (((/* implicit */int) arr_3 [i_3] [i_3 - 1] [i_3]))))))), (arr_13 [i_4 + 1] [i_2] [i_4 + 1] [i_4 + 1])));
                            var_22 = ((/* implicit */unsigned char) ((arr_1 [i_3 + 2] [i_3]) / (((/* implicit */long long int) max((var_10), (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_15 [2U] [i_0] [i_0] [i_2])))))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_5 [i_0] [i_4 - 1])), (var_9)))) ? (((/* implicit */int) max((arr_5 [i_0] [i_4 + 1]), (((/* implicit */unsigned char) arr_3 [i_5] [i_4 - 1] [i_2]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_4 - 1])) ? (((/* implicit */int) arr_3 [2ULL] [i_4 + 1] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_4 - 1]))))));
                            arr_21 [i_0] [i_5] [i_0] [i_4] [(signed char)3] [i_4 - 1] [i_3 + 1] = ((/* implicit */_Bool) min((((arr_13 [i_3 + 2] [i_0] [i_4 - 1] [i_3 + 2]) - (arr_13 [i_3 - 1] [i_0] [i_4 - 1] [i_0]))), (min((arr_13 [i_3 + 1] [i_0] [i_4 + 1] [i_4]), (arr_13 [i_3 + 2] [i_0] [i_4 + 1] [9])))));
                        }
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(short)1] [(unsigned char)12] [i_0] [i_2 - 1] [i_0] [i_2])) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_2] [i_2])) : (var_8)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [3ULL] [i_0] [i_4 + 1])) ? (((/* implicit */int) var_7)) : (var_6)))) ? (arr_8 [i_0] [i_0]) : (arr_12 [i_3 + 2] [i_3] [i_4] [(short)6]))) : (((/* implicit */unsigned long long int) var_5))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_24 ^= ((/* implicit */unsigned char) arr_9 [i_0] [i_6] [i_0 + 1]);
            arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (arr_9 [i_0] [i_0] [i_0 + 1])));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 4) 
        {
            for (unsigned short i_8 = 2; i_8 < 13; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    {
                        arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) (+(min((arr_2 [i_7 - 2]), (arr_2 [i_7 - 3])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            var_25 *= ((/* implicit */unsigned char) arr_19 [i_0] [i_10] [i_7] [i_9]);
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0 - 2])) ? (arr_25 [i_7 - 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_7 - 2]))))))));
                        }
                        for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) (-(min((((/* implicit */int) arr_3 [i_7 + 1] [i_0] [i_0 - 4])), (arr_27 [i_7 - 3])))));
                            var_28 = ((/* implicit */_Bool) min((arr_23 [i_0]), (((/* implicit */int) max((((/* implicit */short) arr_26 [i_0 - 3] [i_7 - 1])), (arr_18 [4ULL] [i_0] [i_0] [i_8 + 1] [i_0] [i_11 - 1]))))));
                            var_29 = ((/* implicit */int) max((((/* implicit */unsigned short) min((arr_38 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]), (var_13)))), (arr_32 [i_0 - 4] [i_7] [i_8] [0U])));
                            arr_40 [i_11 - 2] [i_11 - 3] [i_11] [i_11] [i_11] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_3 [i_0] [i_9] [i_11])) : (((/* implicit */int) arr_17 [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */long long int) var_11)), (arr_25 [i_7]))))) * (((/* implicit */long long int) ((arr_3 [i_7] [i_8 + 2] [i_11 + 1]) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_9])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_9])))))));
                            var_30 |= ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_22 [i_11 - 4])), (var_3))), (((/* implicit */int) arr_29 [i_7] [i_7] [i_11 - 2]))));
                        }
                        for (long long int i_12 = 2; i_12 < 12; i_12 += 1) 
                        {
                            arr_45 [6] [i_7] [i_8] [i_0] [i_7] [i_9] [i_8] = ((/* implicit */unsigned char) arr_27 [i_0 - 2]);
                            var_31 -= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_19 [i_9] [i_8] [i_0] [i_0])), (var_1))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9])))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_13 = 3; i_13 < 13; i_13 += 1) 
    {
        var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_16 [i_13] [i_13] [(_Bool)1] [i_13 - 3]) / (((/* implicit */unsigned long long int) arr_48 [i_13 - 2]))))) ? (arr_16 [8] [i_13 - 2] [6LL] [i_13 - 2]) : (min((((/* implicit */unsigned long long int) arr_48 [i_13 + 2])), (arr_16 [i_13] [i_13 + 1] [8LL] [i_13 + 1])))));
        var_33 = ((/* implicit */long long int) ((min((min((((/* implicit */unsigned int) arr_19 [i_13] [i_13 - 1] [i_13 + 2] [i_13])), (arr_37 [i_13] [(short)4] [i_13]))), (((/* implicit */unsigned int) arr_30 [i_13 - 3] [i_13 - 3] [i_13] [i_13 - 3] [i_13] [i_13])))) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
        {
            var_34 &= ((/* implicit */unsigned char) arr_14 [i_13] [i_13] [i_13]);
            arr_53 [i_13] [i_14] [i_13] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_13 - 2])) ? (var_8) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_0)) ? (var_3) : (var_10))) : (((/* implicit */int) arr_28 [i_13] [i_13] [i_13 + 2])))), (((/* implicit */int) arr_41 [i_13] [(unsigned char)3] [i_13] [i_13] [(unsigned short)0])));
            arr_54 [i_13] = ((/* implicit */unsigned long long int) max((min((arr_51 [i_13] [i_13 + 1]), (arr_51 [i_13] [i_13 - 1]))), (((((/* implicit */_Bool) arr_51 [i_13] [i_13 - 1])) ? (arr_51 [i_13] [i_13 - 3]) : (((/* implicit */int) var_7))))));
            /* LoopSeq 3 */
            for (unsigned char i_15 = 1; i_15 < 13; i_15 += 1) 
            {
                var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_17 [i_14]), (((/* implicit */short) arr_38 [i_13] [i_14] [(short)11] [(short)11] [i_15 + 1] [(short)11] [(short)11]))))) ? (min((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_1))), (((/* implicit */unsigned long long int) min((arr_27 [i_15]), (arr_57 [i_13] [i_14] [i_15 - 1] [i_13])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) | (arr_25 [i_13]))) - (arr_25 [i_13]))))));
                var_36 &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_42 [i_13] [i_14] [i_14] [i_13] [i_13 + 1] [i_15 + 2] [i_15])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_37 [i_13] [i_14] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
            }
            /* vectorizable */
            for (long long int i_16 = 2; i_16 < 13; i_16 += 1) 
            {
                arr_62 [i_13] = ((/* implicit */unsigned char) ((arr_19 [4ULL] [(_Bool)1] [i_14] [i_16]) ^ (((/* implicit */int) arr_17 [i_16 - 1]))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (short i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) ((arr_59 [i_16 + 2] [i_16 + 1] [(unsigned char)2] [i_16 - 1]) ? (((arr_23 [i_18]) << (((/* implicit */int) var_4)))) : (((((/* implicit */int) var_4)) | (((/* implicit */int) arr_4 [i_17] [i_17] [3]))))));
                            var_38 = ((/* implicit */unsigned char) (~(arr_42 [i_16 + 2] [i_16] [i_16] [i_14] [i_14] [i_14] [i_13 - 1])));
                            var_39 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_13 - 3] [i_13] [9] [i_13 - 3])) ? (arr_57 [8] [i_13] [i_13] [i_13 - 1]) : (((/* implicit */int) arr_14 [i_13] [i_13 - 2] [i_13]))));
                            var_40 = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_19 = 4; i_19 < 12; i_19 += 3) 
                {
                    for (short i_20 = 3; i_20 < 11; i_20 += 1) 
                    {
                        {
                            arr_72 [i_13] [i_19 + 2] [i_16 - 1] [i_13] [i_13] [i_13] = arr_41 [i_20] [i_20 + 1] [i_20] [i_20] [i_20 + 3];
                            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) arr_4 [i_13] [i_13] [i_19 + 3]))));
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_13 - 3] [i_14] [i_16 + 2] [i_13 - 3] [i_20 + 1]))) : (arr_48 [i_13]))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_21 = 1; i_21 < 14; i_21 += 2) 
            {
                var_43 = ((/* implicit */unsigned long long int) arr_55 [i_13]);
                var_44 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_64 [i_21 - 1])), (((arr_41 [0] [i_13 - 2] [i_14] [i_21] [i_21]) ? (((/* implicit */unsigned int) arr_63 [i_13] [i_14] [i_21 + 1] [i_21 + 1])) : (arr_70 [i_13] [i_13] [i_14] [i_14] [i_21] [i_21 + 1]))))), (((/* implicit */unsigned int) var_13))));
            }
            /* LoopNest 2 */
            for (unsigned short i_22 = 1; i_22 < 13; i_22 += 2) 
            {
                for (unsigned char i_23 = 1; i_23 < 13; i_23 += 3) 
                {
                    {
                        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) var_10)) ^ (arr_76 [i_14] [i_14] [(_Bool)1] [i_22 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_76 [i_14] [i_14] [i_13 - 2] [i_23 + 1]))))))))));
                        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) var_8))));
                        arr_81 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_15 [i_23 - 1] [i_13] [i_22] [i_23 - 1])) : (((/* implicit */int) arr_15 [i_22 + 1] [i_13] [i_22] [i_23]))))) ? (max((arr_16 [i_13 - 2] [i_13 - 2] [i_13] [i_23 - 1]), (((/* implicit */unsigned long long int) var_12)))) : (min((((/* implicit */unsigned long long int) arr_33 [i_13] [(_Bool)1] [i_22] [i_22] [i_23])), (arr_77 [i_13])))));
                        var_47 = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_18 [i_13 - 1] [i_13] [0] [i_13] [i_13] [0])), (arr_60 [i_22 - 1]))), (((/* implicit */int) arr_11 [i_23]))));
                    }
                } 
            } 
        }
        for (short i_24 = 0; i_24 < 15; i_24 += 4) /* same iter space */
        {
            var_48 |= ((/* implicit */unsigned int) arr_27 [i_13]);
            var_49 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_75 [i_24]), (((/* implicit */unsigned char) arr_41 [i_13 + 2] [i_13] [i_24] [i_24] [i_24]))))) ? (((((/* implicit */int) arr_73 [i_13 - 3] [i_13 - 1] [14U] [i_24])) * (((/* implicit */int) var_11)))) : (((((/* implicit */int) arr_75 [i_24])) + (((/* implicit */int) arr_73 [i_13 - 3] [i_13] [i_13] [i_13 - 1]))))));
        }
    }
    for (long long int i_25 = 1; i_25 < 12; i_25 += 1) 
    {
        var_50 = ((/* implicit */_Bool) ((((arr_74 [i_25 - 1] [i_25 + 3]) > (((/* implicit */int) var_7)))) ? (max((((/* implicit */unsigned long long int) arr_74 [i_25 + 2] [i_25])), (arr_50 [i_25 + 3] [i_25 + 3] [i_25 + 2]))) : (arr_50 [i_25 + 2] [(_Bool)1] [i_25])));
        /* LoopNest 3 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            for (int i_27 = 4; i_27 < 14; i_27 += 3) 
            {
                for (unsigned char i_28 = 1; i_28 < 13; i_28 += 2) 
                {
                    {
                        var_51 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(arr_14 [i_28] [(short)13] [i_28]))) && (((/* implicit */_Bool) arr_77 [(_Bool)0])))))) & (min((((((/* implicit */_Bool) arr_1 [i_26] [i_28])) ? (((/* implicit */unsigned long long int) arr_65 [i_25 + 2] [i_26] [i_27 - 3] [i_28] [i_25 + 2])) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_25 + 2] [i_26] [10ULL] [i_25 + 2] [(signed char)0] [i_28 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [12LL] [i_26])))))))));
                        var_52 |= ((/* implicit */unsigned long long int) arr_3 [i_25] [i_25 - 1] [i_25]);
                    }
                } 
            } 
        } 
    }
    var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) var_4))));
}
