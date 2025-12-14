/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136376
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
    var_14 &= ((/* implicit */unsigned long long int) var_3);
    var_15 = ((/* implicit */unsigned int) 3838445941574378562LL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((10142267549145327909ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [(signed char)12])))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_3 - 2])))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32757))));
                        arr_13 [(signed char)16] [i_1] [i_2] [i_3] [i_3 - 1] [i_3] = ((/* implicit */signed char) ((((18446744073709551602ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [(signed char)14] [i_0] [i_0 + 1]))))) - (((/* implicit */unsigned long long int) ((int) -735541564)))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */_Bool) var_11);
        arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0 + 1]))))) ? (((unsigned long long int) 9223372036854775807LL)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)112)) / (((/* implicit */int) arr_5 [i_0 - 1])))))));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_20 [i_4] [(signed char)10] = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) arr_19 [i_4])))))) || ((!((!(((/* implicit */_Bool) arr_9 [(signed char)14] [i_4])))))));
        /* LoopNest 2 */
        for (long long int i_5 = 4; i_5 < 12; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    arr_26 [i_4] [(unsigned char)10] [i_5] [i_6] = ((/* implicit */unsigned short) (~((~(((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (9223372036854775807LL)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        arr_29 [i_6] [i_6] [i_6] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_7 + 4]))));
                        arr_30 [i_4] [i_4] [i_6] [i_6] [i_7 + 2] [i_7] = ((/* implicit */short) ((((((long long int) arr_21 [i_7 + 2] [i_7 + 4] [i_6 + 1])) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_11 [i_7] [i_7 + 1] [i_7 + 2] [i_6 + 1])) : (((/* implicit */int) arr_21 [10U] [i_7 - 2] [i_6 + 1])))) - (20084)))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) 
                    {
                        arr_33 [i_6] [i_6] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5 + 1])) ? (((/* implicit */int) arr_5 [i_5 - 4])) : (((/* implicit */int) arr_19 [i_5 - 2]))))) || (((((/* implicit */_Bool) 3838445941574378562LL)) || (((/* implicit */_Bool) -1386776472))))));
                        arr_34 [i_4] [i_8] [i_5] [(unsigned char)2] [i_6 + 1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8]))) ^ (max((3838445941574378556LL), (((/* implicit */long long int) (unsigned char)17))))))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4]))) & (arr_4 [13ULL] [i_8])))) ? (((((/* implicit */unsigned long long int) 2147483647)) | (arr_31 [i_5] [i_5] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)33656)) | (-1386776472))))))));
                        arr_35 [i_6] = ((/* implicit */_Bool) max((max((max((-581666038), (arr_16 [i_5]))), (((((arr_16 [i_5]) + (2147483647))) << (((((/* implicit */int) arr_17 [9U] [i_4])) - (8920))))))), (max((((/* implicit */int) var_13)), (arr_23 [i_8 + 2] [i_6 + 1] [i_5 + 1] [5ULL])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        arr_38 [i_5] [8U] [i_5] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_17 [i_4] [i_4])))));
                        arr_39 [i_4] [i_5] [i_6] [(unsigned short)2] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4])) ? (arr_36 [i_4] [i_5 - 4] [i_5]) : (((/* implicit */int) arr_27 [8]))));
                        arr_40 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483647)) - (arr_4 [i_9] [(unsigned short)14])))) ? (((/* implicit */unsigned int) 1926342589)) : (((unsigned int) (short)21379))));
                        arr_41 [i_4] [i_9] [i_6 + 1] [i_4] [4ULL] [i_6] = ((/* implicit */short) (((~(((/* implicit */int) (signed char)38)))) ^ (((/* implicit */int) arr_28 [i_6] [i_6] [i_6 + 1] [i_6]))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            arr_45 [i_9] [i_10] [i_6] [(unsigned char)10] [i_6] [i_5 - 2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15918367245086035218ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19733))) : (4294967294U)));
                            arr_46 [i_6] [i_6] [i_6] [i_5] [(short)6] = ((/* implicit */unsigned long long int) arr_17 [i_5 - 3] [i_5]);
                            arr_47 [(unsigned short)6] [i_9] [i_5] [(unsigned short)6] [(unsigned short)0] = ((/* implicit */signed char) (-2147483647 - 1));
                            arr_48 [i_5] [i_9] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1358210957))));
                            arr_49 [i_5] = ((/* implicit */unsigned int) arr_23 [i_9] [i_6] [(signed char)5] [i_4]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            arr_56 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32745)) ? (((/* implicit */int) var_8)) : (arr_23 [(signed char)9] [i_5] [i_6] [i_12 - 2])))) ^ (arr_22 [9] [i_4])));
                            arr_57 [i_5 - 2] [i_6] [i_5] [i_5 - 2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))) & (var_4))));
                            arr_58 [i_6] = ((/* implicit */int) (~(((arr_52 [i_4] [i_5] [i_6] [i_6] [i_12]) << (((((/* implicit */int) var_5)) + (12714)))))));
                        }
                        for (short i_13 = 2; i_13 < 10; i_13 += 3) 
                        {
                            arr_61 [i_4] [i_4] [i_4] [i_11 - 1] [i_13] [i_11] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) arr_11 [11U] [(unsigned short)0] [11U] [(unsigned char)7])) ? (((/* implicit */int) (short)-13976)) : (((/* implicit */int) (unsigned short)53844)))) : (581666035)));
                            arr_62 [i_4] [(signed char)12] [i_6] [i_6] [(signed char)12] = ((/* implicit */unsigned long long int) (~(arr_51 [i_4] [i_6] [i_11 - 3] [i_6])));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            arr_65 [i_14] [i_5 + 1] [i_5] [i_5 + 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) >> (((-581666036) + (581666098)))))) ? (((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-80)))))) : ((~(arr_53 [i_5])))));
                            arr_66 [6ULL] [i_5] [i_5] [i_6] [i_11] [(unsigned char)8] = ((/* implicit */short) ((unsigned char) arr_53 [i_5]));
                            arr_67 [i_4] [(unsigned short)6] [i_6] [i_4] [i_4] = ((/* implicit */unsigned char) ((long long int) arr_19 [i_5]));
                        }
                        arr_68 [i_5] [i_11 - 2] [i_6] [i_11] [(short)10] [i_11 - 2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)61)) ^ (128394069)));
                        arr_69 [i_6] = ((/* implicit */unsigned short) -1040196924);
                    }
                }
            } 
        } 
        arr_70 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_11 [i_4] [i_4] [i_4] [i_4]))) ? (arr_31 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_4] [4U] [i_4] [i_4] [i_4])))));
    }
    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
    {
        arr_73 [8] = ((/* implicit */signed char) ((max((arr_71 [(unsigned short)4]), (arr_71 [(signed char)8]))) * ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))))));
        arr_74 [(signed char)8] &= (((~(((/* implicit */int) arr_6 [i_15] [i_15])))) >> (((-2070443819) + (2070443838))));
        arr_75 [(short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_72 [10ULL]))) || (((/* implicit */_Bool) arr_7 [(unsigned char)5] [i_15] [i_15] [i_15]))));
        arr_76 [(signed char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_15])))), (max((((/* implicit */int) var_6)), (arr_72 [(short)2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) : ((-(((long long int) arr_0 [i_15] [i_15]))))));
        arr_77 [(short)6] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_8 [i_15])) + (((/* implicit */int) arr_8 [i_15])))));
    }
}
