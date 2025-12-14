/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157934
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((max((var_6), (((/* implicit */unsigned long long int) (-(var_3)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1725207855)) ? (((/* implicit */unsigned int) -1725207881)) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (var_3)))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_16))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_21 -= arr_1 [i_0];
            arr_7 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (short)28222)) ? (((/* implicit */int) var_11)) : (arr_3 [i_0] [i_0]))) : (arr_5 [i_1] [i_1] [i_0])));
            arr_8 [i_0] = (!(((/* implicit */_Bool) arr_0 [i_0])));
            /* LoopSeq 4 */
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_2 - 3])))))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_17))) + ((-(536870904LL)))));
                var_23 = ((/* implicit */short) -1725207855);
            }
            for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                arr_14 [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_3] [i_1])) ? (arr_4 [i_0] [i_1] [i_3]) : (arr_2 [i_0] [i_0]))) >> (((arr_10 [i_0] [(unsigned short)6] [i_1] [(unsigned short)6]) ? (((/* implicit */int) arr_10 [i_3] [i_1] [i_0] [i_0])) : (1725207895)))));
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3] [i_3]))));
                    var_24 = ((/* implicit */long long int) var_11);
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_25 = ((/* implicit */long long int) (-(arr_2 [i_0] [i_3])));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_5] [i_3] [i_1])))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) (~(arr_5 [i_0] [(_Bool)1] [i_0])));
                        arr_23 [i_3] [i_3] [i_3] [1U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((-(arr_1 [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_5] [(unsigned short)11])) | (((/* implicit */int) var_0)))))));
                    }
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_3] [i_3]))))))))));
                }
                for (unsigned short i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    arr_27 [i_0] [i_0] [i_0] [i_7 - 2] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_7 - 2] [i_3] [i_1] [(unsigned short)14])) : (((/* implicit */int) arr_12 [(signed char)9] [i_3] [i_3] [i_3]))))));
                    arr_28 [i_0] [12ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775805LL)) ? (2147483647) : (-1725207895)));
                    arr_29 [i_7] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) arr_20 [(signed char)1] [i_1] [i_3] [i_7]);
                }
                for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (var_15)))) % (1725207881)));
                    var_30 = ((/* implicit */long long int) (-(arr_0 [i_3])));
                }
            }
            for (short i_9 = 2; i_9 < 12; i_9 += 4) 
            {
                arr_35 [0LL] [(unsigned char)6] [i_9] = ((/* implicit */unsigned char) (short)0);
                arr_36 [i_0] = ((/* implicit */_Bool) arr_16 [i_9 + 2] [i_9 + 1] [i_9 - 2]);
            }
            for (short i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                /* LoopSeq 4 */
                for (long long int i_11 = 3; i_11 < 14; i_11 += 1) 
                {
                    arr_44 [i_0] [i_1] [i_10] [i_10] = ((/* implicit */long long int) (+(0U)));
                    var_31 += ((/* implicit */unsigned short) ((arr_30 [i_0] [i_1] [i_10] [i_10] [i_0]) + (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_10] [i_10])) ? (var_10) : (((/* implicit */int) var_17))))));
                    var_32 -= ((/* implicit */unsigned char) 16530547754436517515ULL);
                    arr_45 [i_0] [i_1] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 1])) ? (((/* implicit */int) arr_39 [i_11 - 3] [i_11] [i_11 - 2] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 15530772211286372073ULL)))))));
                }
                for (int i_12 = 4; i_12 < 13; i_12 += 4) 
                {
                    arr_50 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_10] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_1] [i_10])))));
                    var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */_Bool) 1725207886)) ? (1725207908) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_12 - 4] [i_12 + 3]))))));
                    arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(var_3)));
                    arr_52 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_12] [i_1]) : (((/* implicit */int) var_16))));
                }
                for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    var_34 *= ((/* implicit */_Bool) (short)127);
                    var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_0] [i_0])) ? (((((/* implicit */int) arr_49 [i_0] [i_1] [i_13])) % (((/* implicit */int) var_16)))) : (((((/* implicit */int) var_12)) | (((/* implicit */int) var_9))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
                    var_37 = ((/* implicit */_Bool) var_8);
                }
                var_38 = ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [1LL] [i_0])) ? (((/* implicit */long long int) arr_33 [i_0] [i_1] [i_1] [i_10])) : (var_15));
                var_39 = ((/* implicit */long long int) ((unsigned short) arr_16 [i_0] [i_0] [i_10]));
                var_40 = ((((/* implicit */long long int) (+(-1725207882)))) | (((((/* implicit */_Bool) arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (-1LL) : (arr_40 [i_0] [i_1] [i_10] [(unsigned short)13]))));
                var_41 = ((/* implicit */short) ((14U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
            arr_58 [i_1] = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_49 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_49 [i_0] [i_0] [i_0])));
        }
        for (short i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    {
                        arr_65 [i_16] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) <= (6ULL)));
                        var_42 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) 635089918)) ? ((~(6241525208227174695LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)213)))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))) | ((~(arr_42 [i_0] [i_15] [i_15] [i_17])))))) : (((long long int) var_0))));
                        arr_66 [i_16] [i_15] [14] [i_17] = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (min((arr_4 [i_0] [i_15] [i_17]), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((arr_38 [i_0] [i_0] [i_0] [(signed char)9]) - (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)24)))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(-9223372036854775807LL))))));
            var_44 = ((/* implicit */long long int) ((unsigned short) ((short) arr_10 [i_0] [i_0] [8ULL] [(signed char)2])));
            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_40 [i_15] [i_15] [i_0] [i_0]), (((/* implicit */long long int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_15])) && (((/* implicit */_Bool) (signed char)62)))))) : (arr_40 [i_0] [i_0] [i_0] [i_0])));
        }
        arr_67 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_0] [4U] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((arr_4 [(_Bool)1] [i_0] [(signed char)4]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 18446744073709551609ULL)) && (((/* implicit */_Bool) (signed char)-62))))))))));
        var_46 = (-(max((((/* implicit */int) (short)32767)), ((+(((/* implicit */int) arr_49 [i_0] [i_0] [i_0])))))));
    }
}
