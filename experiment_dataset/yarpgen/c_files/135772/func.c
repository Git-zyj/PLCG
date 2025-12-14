/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135772
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
    var_20 = ((/* implicit */int) ((unsigned char) ((unsigned int) (_Bool)1)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_21 -= ((/* implicit */long long int) (((~(min((((/* implicit */unsigned long long int) var_14)), (arr_4 [i_0] [i_1] [i_2] [i_1]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        arr_10 [i_3] [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 1]))) - (arr_1 [i_3 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3])) < (((/* implicit */int) (unsigned char)63))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))), (((((/* implicit */_Bool) max((-34850650), (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) : (var_17)))) : (((((/* implicit */_Bool) arr_9 [i_0] [6LL] [i_0] [1ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))))));
                        var_22 -= ((/* implicit */unsigned long long int) arr_7 [i_0] [9]);
                        var_23 -= ((((/* implicit */_Bool) max((((int) (signed char)52)), (((/* implicit */int) (!(var_6))))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_9 [(short)0] [i_2 - 1] [i_1] [i_2 - 1])))) : ((-(((/* implicit */int) (!((_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    var_25 = ((/* implicit */long long int) var_5);
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [(signed char)8] [i_5] [i_4] [i_0])) << (((15693935122490869338ULL) - (15693935122490869337ULL))))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
                            arr_23 [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (-((-((-(((/* implicit */int) (unsigned short)53111))))))));
                            arr_24 [i_0] [(unsigned char)7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [i_4] [i_5] [(unsigned short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)209))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [(unsigned char)2] [i_0] [i_0]))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((_Bool) arr_21 [i_0] [i_0] [12LL] [i_6] [3LL] [i_0])))))) : (((arr_11 [i_7]) ^ (((/* implicit */unsigned long long int) (~(-1494221958))))))));
                        }
                        arr_25 [i_0] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_1 [i_6])), ((~(arr_11 [i_0]))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                        var_28 = ((/* implicit */short) (~(1705054866892254949ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)7168)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)106))) : (arr_2 [i_0])));
                            var_30 -= ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
                            arr_28 [i_0] [i_4] [i_4] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_8])) ? (arr_1 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)19286))))));
                            var_31 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) arr_16 [i_0] [(signed char)1] [i_5] [i_8])) : (var_2)))) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_8])))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_0] [7ULL] [i_4] [7ULL] [i_6] [7ULL])))))));
                            arr_33 [i_0] [i_0] [i_5] [i_6] [i_6] = ((/* implicit */short) (~(((((/* implicit */int) arr_12 [i_4])) & (((/* implicit */int) var_6))))));
                            arr_34 [i_0] [i_0] [i_4] [i_5] [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_15 [i_0]))))))) <= (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-90))))), (max((((/* implicit */unsigned long long int) (unsigned char)97)), (12464725618826153633ULL)))))));
                            var_33 += ((((/* implicit */_Bool) (~(((var_10) & (0)))))) ? (((((((/* implicit */int) var_12)) + (2147483647))) >> (((arr_17 [i_9] [i_4] [i_5] [i_9]) + (1303835612))))) : (max((((((/* implicit */int) (short)12288)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)55596)))));
                        }
                    }
                    var_34 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)3840)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)220))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                        {
                            arr_40 [i_0] [i_4] [i_0] [i_10] [i_11 + 3] [0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_21 [i_0] [i_10] [i_11 + 1] [12] [i_10 - 2] [i_5]))));
                            arr_41 [i_11 - 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) (unsigned char)17)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_5] [6ULL]))))))));
                        }
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            arr_44 [i_0] [i_0] [i_0] [1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_4] [i_5] [i_5] [i_0] [i_4]))) & (((((arr_13 [i_0] [i_5]) + (9223372036854775807LL))) << (((3986561300U) - (3986561300U)))))));
                            arr_45 [0ULL] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                            var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) (signed char)-121))))));
                            var_36 = ((/* implicit */unsigned int) (signed char)3);
                        }
                        for (unsigned long long int i_13 = 4; i_13 < 11; i_13 += 4) 
                        {
                            var_37 = (-(((/* implicit */int) var_4)));
                            arr_50 [i_0] [i_13 - 2] [i_13] [i_13] [i_13] [i_13 + 1] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_13 - 2] [i_0] [i_0] [i_10 - 1])) < (((/* implicit */int) ((var_10) <= (((/* implicit */int) (unsigned short)36414)))))));
                        }
                        for (int i_14 = 3; i_14 < 10; i_14 += 4) 
                        {
                            var_38 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_29 [i_14 - 3] [i_14 - 3]))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_0] [i_4] [5LL] [i_10 + 1] [i_0])) ? (((((/* implicit */int) (unsigned char)0)) << (((1048575LL) - (1048544LL))))) : (((/* implicit */int) (unsigned char)105))));
                            arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)26759))));
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_14 - 3] [(short)7])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_13 [i_14 - 3] [i_14])));
                            arr_55 [i_14 - 2] [i_14 - 2] [i_4] [i_10] [i_10] [i_0] &= ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) var_1)));
                        }
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_10] [13] [i_10 - 1] [i_10 - 2])) ? (((/* implicit */int) arr_20 [i_10 + 1] [i_10 + 2] [i_10] [i_10 + 2] [i_10 + 2])) : (((/* implicit */int) ((arr_27 [i_0] [i_4] [i_4] [i_0] [i_0] [i_0] [i_4]) <= (((/* implicit */int) arr_19 [(signed char)2] [i_5] [i_4] [i_0]))))))))));
                    }
                    for (unsigned short i_15 = 1; i_15 < 12; i_15 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_30 [i_0] [0] [(unsigned char)1] [i_0]), (((/* implicit */long long int) 4294967287U))))) || ((!(((/* implicit */_Bool) arr_27 [i_0] [i_4] [i_4] [i_5] [i_4] [i_15 + 1] [i_4]))))))), (max((((/* implicit */unsigned char) arr_49 [i_0] [i_4] [i_5] [i_4] [i_15 - 1])), ((unsigned char)105))))))));
                    }
                    for (unsigned short i_16 = 1; i_16 < 12; i_16 += 4) /* same iter space */
                    {
                        arr_61 [i_0] [i_4] [i_5] [i_16 + 2] [i_16] = ((/* implicit */signed char) arr_59 [i_0] [i_0] [i_0]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 14; i_17 += 2) 
                        {
                            var_44 = ((/* implicit */short) (~((-(arr_59 [i_0] [i_0] [i_5])))));
                            arr_64 [i_0] [i_16 + 1] [i_5] [i_16 + 1] [i_17] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_32 [i_5])) ? (arr_11 [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150)))))));
                            arr_65 [i_17] [i_0] [i_5] [i_0] [12ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)46898)) ? (arr_52 [i_16] [i_16 + 2] [i_16 - 1] [(short)0] [i_0]) : (arr_52 [i_16] [i_16 + 2] [i_16 + 1] [(unsigned char)2] [i_0])));
                        }
                        for (long long int i_18 = 0; i_18 < 14; i_18 += 3) 
                        {
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_0] [i_4] [i_5] [i_16] [i_16 + 2] [i_18] [i_0]))))) ? (((((/* implicit */long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_12))))) * (min((((/* implicit */long long int) var_6)), (1013845270790193928LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)113))))) ? (((1024) & (-2118824938))) : (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (signed char)-93)))))))));
                            var_46 = ((/* implicit */int) max((var_46), (((((/* implicit */_Bool) min((var_9), ((-(((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_16] [i_18]))))))) ? (((/* implicit */int) min((((/* implicit */short) var_1)), (((short) arr_3 [i_0] [i_4] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                            var_47 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) (signed char)95)) >= (1705670005)))))), ((+(258048)))));
                            arr_68 [i_0] [i_0] [i_0] [i_0] [(short)3] [i_0] [i_16] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)21401))))));
                        }
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) arr_18 [i_0] [i_4] [i_5] [i_16])) : (((((((/* implicit */int) (signed char)22)) << (((/* implicit */int) (_Bool)1)))) ^ ((+(((/* implicit */int) var_13))))))));
                        var_49 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 6107074881112864966LL)) * (min((((((/* implicit */_Bool) (short)21033)) ? (8420832449219489352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))))), (((/* implicit */unsigned long long int) (unsigned short)25224))))));
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (-((~(((((/* implicit */_Bool) arr_36 [(signed char)2] [i_4] [13LL] [13LL])) ? (((/* implicit */int) var_4)) : (-24))))))))));
                    }
                }
            } 
        } 
    }
}
