/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164598
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) var_4)) >= (var_3))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    var_12 |= ((/* implicit */unsigned int) max(((unsigned char)88), ((unsigned char)88)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */short) ((max((arr_7 [i_3 + 1] [i_0 - 1] [i_0]), (((/* implicit */unsigned int) arr_6 [i_0 + 1])))) > (max((arr_9 [i_2] [i_3 - 1] [(unsigned char)7] [i_3]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))) | (((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_3] [i_3 - 2])) ? (arr_3 [i_0 + 1] [9U] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 3])))))));
                            arr_14 [1ULL] [i_3] [i_2] [i_3] [0U] [i_4] [i_3] = ((/* implicit */short) arr_1 [5U] [i_1]);
                            var_15 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                            var_16 = ((/* implicit */short) max((max((((/* implicit */unsigned int) arr_12 [i_2] [i_3] [i_3] [i_0])), (arr_7 [i_0 - 1] [i_3 - 3] [i_3 - 1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_4] [i_3] [i_3] [i_0])))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_0 + 3] [i_1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_3] [i_5])), (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                            var_17 ^= ((/* implicit */unsigned long long int) (short)8649);
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 4; i_6 < 7; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 15728640U)) && (((/* implicit */_Bool) arr_6 [i_0 + 1]))))))));
                            var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_6 + 3] [i_3 + 1]))));
                            arr_21 [i_0 + 2] [i_0 + 1] [i_2] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_3] [i_0])) < (((/* implicit */int) arr_12 [(unsigned char)4] [i_1] [i_2] [i_1]))));
                            arr_22 [i_0] [i_3] [i_2] [i_2] [i_6] [(short)3] [i_1] = ((/* implicit */short) (((-(((/* implicit */int) var_2)))) + ((+(((/* implicit */int) (unsigned char)255))))));
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_26 [(unsigned char)8] [i_2] [(unsigned char)1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0]))) ^ (var_4)))) ? (((((/* implicit */int) arr_1 [i_0] [i_1])) * (((/* implicit */int) arr_4 [i_7] [i_2])))) : (((/* implicit */int) max((arr_12 [i_0] [i_3] [i_3] [i_0]), (((/* implicit */short) var_1))))))) : ((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_3 - 1]))))));
                            var_20 = ((/* implicit */unsigned long long int) var_7);
                        }
                    }
                    var_21 *= (+(((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_1] [i_1] [i_1])) ? (max((var_7), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [(short)4]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_8 = 3; i_8 < 19; i_8 += 2) 
    {
        arr_29 [i_8] = var_7;
        /* LoopNest 3 */
        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            var_22 = arr_37 [(unsigned char)17] [i_9] [i_8] [(unsigned char)10] [i_12];
                            var_23 = ((/* implicit */unsigned int) (short)384);
                            arr_40 [i_8] [i_8] = (i_8 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */int) arr_35 [i_12] [i_12] [i_12] [i_12] [i_12])) << (((((/* implicit */int) arr_37 [(short)9] [(short)9] [i_8] [i_11] [i_11])) - (213))))) / (((/* implicit */int) arr_27 [i_8 + 2]))))) : (((/* implicit */short) ((((((/* implicit */int) arr_35 [i_12] [i_12] [i_12] [i_12] [i_12])) << (((((((((/* implicit */int) arr_37 [(short)9] [(short)9] [i_8] [i_11] [i_11])) - (213))) + (76))) - (23))))) / (((/* implicit */int) arr_27 [i_8 + 2])))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            arr_44 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_32 [i_8]), (((/* implicit */short) arr_41 [i_8] [(unsigned char)17] [i_8]))))) ? ((~(arr_36 [i_8] [i_9] [i_8] [i_8]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_8])) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) (unsigned char)79)))))))) ? (((/* implicit */int) arr_41 [i_8] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) ((unsigned char) max((arr_35 [i_11] [i_11] [i_10] [i_11] [i_13]), (arr_42 [i_11] [i_11] [i_8] [0U] [(short)9] [i_9] [4U])))))));
                            arr_45 [i_8] [i_13] [(short)6] [3U] [i_8] = ((/* implicit */unsigned char) min((((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), ((!((!(((/* implicit */_Bool) arr_30 [i_8] [i_8]))))))));
                        }
                        var_24 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_9 - 1])) ? (((/* implicit */int) arr_39 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [(short)8])) : (((/* implicit */int) arr_33 [i_8 + 4]))))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) arr_39 [i_8] [i_10] [i_9] [i_8] [i_8]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_8] [i_8] [i_10] [12U] [i_8])) * (((/* implicit */int) (unsigned char)142))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [9U]))) : (arr_36 [10ULL] [10ULL] [i_8] [i_11])))))));
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_28 [i_10])) ? (((/* implicit */int) arr_27 [i_8 - 3])) : (((/* implicit */int) arr_27 [i_8 - 2])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_9])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                for (unsigned int i_16 = 3; i_16 < 22; i_16 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            arr_56 [(unsigned char)5] [i_8] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (var_9)));
                        }
                        for (short i_18 = 0; i_18 < 23; i_18 += 4) 
                        {
                            var_27 += var_5;
                            arr_60 [i_8] [18U] [(unsigned char)7] [18U] [i_8] = ((((max((var_4), (((/* implicit */unsigned int) arr_30 [i_8] [i_8])))) << (((var_4) - (3845100001U))))) & (max((1396835853U), (((/* implicit */unsigned int) (short)4092)))));
                            var_28 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((min((arr_32 [(unsigned char)4]), (((/* implicit */short) (unsigned char)27)))), (((/* implicit */short) max(((unsigned char)41), ((unsigned char)228)))))))) ^ (max((min((((/* implicit */unsigned long long int) (short)6597)), (8465453031425114880ULL))), (((/* implicit */unsigned long long int) arr_30 [2U] [i_16])))));
                            var_29 ^= ((/* implicit */unsigned long long int) arr_59 [i_8] [i_14] [(unsigned char)3] [i_16] [(unsigned char)3] [0ULL]);
                        }
                        for (unsigned char i_19 = 2; i_19 < 19; i_19 += 3) 
                        {
                            arr_65 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_8] [i_14] [i_14]))) + (((((/* implicit */_Bool) 8465453031425114855ULL)) ? (var_4) : ((~(arr_36 [i_8] [i_8] [i_8] [(short)13])))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_8] [i_8 + 4] [i_19 - 2])) ? ((-(arr_52 [i_8] [(unsigned char)11] [(unsigned char)16] [i_16 - 2] [i_19] [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_36 [i_8] [i_8] [i_8] [i_8])))) || (((/* implicit */_Bool) (unsigned char)255))))))));
                        }
                        arr_66 [11U] [2U] [11U] [2U] [i_8] [i_8] = ((/* implicit */unsigned char) arr_33 [i_8]);
                        /* LoopSeq 2 */
                        for (unsigned int i_20 = 2; i_20 < 22; i_20 += 4) 
                        {
                            arr_69 [i_8] [i_8] [i_8] [(unsigned char)10] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((arr_58 [(unsigned char)4] [i_14] [(unsigned char)4] [(unsigned char)14] [(unsigned char)4] [(unsigned char)9]) <= (((/* implicit */unsigned long long int) var_5))))), (arr_52 [i_8] [i_14] [i_14] [2U] [i_16 - 1] [i_8 + 2]))) < (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_7))));
                            arr_70 [i_8] = ((/* implicit */unsigned char) arr_64 [i_8] [i_8] [i_15] [i_16] [1U] [i_16] [i_15]);
                            var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_67 [i_8] [(short)17] [(short)17])) ? ((-(arr_67 [i_8] [i_14] [i_14]))) : (((/* implicit */unsigned long long int) ((((var_7) - (var_9))) - (((unsigned int) (unsigned char)235)))))));
                            var_33 = ((/* implicit */unsigned char) var_7);
                        }
                        for (unsigned int i_21 = 4; i_21 < 20; i_21 += 3) 
                        {
                            arr_73 [i_8] [i_21] [i_16] [i_16] [i_15] [(short)10] [i_8] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [14U] [22U] [i_8] [i_16] [i_21 + 2] [i_21 + 2] [i_15])) ? (((/* implicit */unsigned long long int) var_4)) : (var_3)))) ? (arr_31 [i_16] [i_16]) : (((/* implicit */unsigned long long int) 3U))))));
                            arr_74 [i_8] [i_8] [i_16 - 1] [i_15] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)252)) ? (4279238650U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)119), ((unsigned char)63)))) ? ((+(((/* implicit */int) arr_62 [i_15] [i_8] [i_8 - 2] [i_8] [i_15])))) : (((((/* implicit */_Bool) arr_62 [i_15] [i_14] [i_8 - 2] [i_8] [i_15])) ? (((/* implicit */int) arr_62 [i_15] [4U] [i_8 + 3] [i_8] [i_15])) : (((/* implicit */int) arr_62 [i_15] [i_8] [i_8 + 2] [i_8] [i_15])))))))));
                        }
                        var_35 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) arr_31 [i_8 - 1] [i_16 - 2]))), (min((arr_31 [i_8 - 3] [i_16 + 1]), (arr_31 [i_8 + 2] [i_16 - 2])))));
                    }
                } 
            } 
        } 
        arr_75 [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) max((var_4), (((/* implicit */unsigned int) arr_46 [i_8 + 1] [i_8 - 3])))));
        arr_76 [i_8] = max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_51 [i_8]))))) ? (arr_43 [i_8]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_72 [i_8] [11U] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (short)-14950)) : (((/* implicit */int) arr_49 [(unsigned char)19] [4U] [0U] [(unsigned char)12]))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_41 [i_8] [i_8] [i_8 + 2]))))));
    }
    /* LoopSeq 2 */
    for (short i_22 = 0; i_22 < 20; i_22 += 2) 
    {
        arr_79 [i_22] = ((unsigned char) min((max((arr_43 [i_22]), (((/* implicit */unsigned int) var_0)))), (((arr_57 [i_22]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_22] [i_22] [(unsigned char)14])))))));
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)249)) && (((/* implicit */_Bool) arr_50 [i_22])))))) : (var_5)));
        arr_80 [i_22] [15U] = ((/* implicit */unsigned int) arr_72 [i_22] [i_22] [(unsigned char)16] [i_22] [i_22]);
        arr_81 [(short)4] = ((/* implicit */short) arr_48 [i_22] [i_22] [i_22]);
    }
    for (unsigned char i_23 = 1; i_23 < 20; i_23 += 3) 
    {
        arr_84 [i_23] [i_23] = ((/* implicit */unsigned int) arr_61 [18U] [(short)8] [18U] [(unsigned char)16] [i_23]);
        arr_85 [(short)5] = ((/* implicit */unsigned long long int) arr_51 [i_23]);
        var_37 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(var_10))))))));
        var_38 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) (unsigned char)244)))) ? ((~(arr_67 [15U] [i_23] [i_23]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_23] [i_23] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_23 - 1] [i_23 - 1] [16U] [i_23] [i_23 + 1]))))))));
    }
}
