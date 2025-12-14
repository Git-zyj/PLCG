/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104988
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_18 += ((short) arr_0 [i_0 + 2]);
        arr_3 [i_0] = ((/* implicit */signed char) (~(arr_2 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((arr_2 [(short)4] [i_0]) << (((arr_1 [i_0 - 2] [(signed char)8]) + (3566911540925084861LL)))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((int) ((short) arr_5 [i_1])));
        arr_8 [(signed char)5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)252))))))) - (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_11 [(_Bool)1] [i_2] [(unsigned short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64969)) ? (((/* implicit */int) (short)-29727)) : (((/* implicit */int) arr_9 [i_2]))))) : (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) (signed char)82);
                        arr_16 [(short)15] [i_2] [4LL] [4LL] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */long long int) 1157332983U)) - (-4443381525277420056LL)))));
                    }
                } 
            } 
            var_20 -= ((/* implicit */unsigned char) arr_10 [i_1]);
            /* LoopSeq 2 */
            for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                arr_19 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)242))))) ? ((~(var_14))) : (arr_17 [i_5 - 1] [i_5 + 2] [11U])));
                arr_20 [(unsigned short)15] [i_1] [6ULL] [i_2] = ((/* implicit */long long int) ((_Bool) arr_6 [i_1]));
            }
            for (short i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                arr_23 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [(unsigned short)17] [i_6] [i_6])) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)1])))));
                arr_24 [(_Bool)1] [i_2] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [(unsigned char)10] [i_2] [(unsigned char)10]))));
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) ((signed char) arr_14 [i_6] [i_6]))) : (((/* implicit */int) arr_9 [i_1]))));
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_22 [i_6] [i_2] [i_1])) + (2147483647))) << (((((var_1) + (6057763117650934151LL))) - (15LL)))));
            }
        }
        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_23 &= ((/* implicit */unsigned short) var_5);
            arr_28 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (short)-32655);
            var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))), (((long long int) 8LL))))) ? ((~((-(((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) ((_Bool) max((18446744073709551594ULL), (((/* implicit */unsigned long long int) -6997045112778741978LL))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    {
                        arr_35 [i_1] [(unsigned char)17] [2LL] [i_8] [(signed char)7] = max((min((arr_33 [3ULL] [(unsigned short)11] [i_8 + 1] [i_8]), (var_7))), (((/* implicit */unsigned int) ((unsigned short) ((long long int) arr_21 [i_8] [i_7] [16LL] [i_7])))));
                        var_25 = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_14 [i_1] [i_1])), (arr_31 [i_1] [(unsigned char)17] [i_8 + 1] [(unsigned short)8]))) - (((/* implicit */long long int) arr_32 [6LL] [i_7] [i_9]))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [12LL] [5U] [12LL] [5U] [12LL] [7LL]))))), ((~(min((var_8), (((/* implicit */unsigned long long int) arr_14 [i_8] [i_9])))))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (+(1157332983U))))))) ? (((/* implicit */unsigned int) ((((arr_14 [(unsigned short)12] [i_7]) < (((/* implicit */int) var_15)))) ? (((((/* implicit */int) (short)1)) | (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) (short)-19)) ? (134217728) : (((/* implicit */int) (short)-11318))))))) : (var_9)));
                        var_28 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_29 [(unsigned short)11] [14LL] [i_8 - 3] [7U])) && (((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_8 + 3] [6U])))) ? (max((arr_21 [i_1] [i_8 - 3] [i_9] [i_9]), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_21 [(unsigned short)14] [i_8 - 1] [i_9] [i_9]))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */int) max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_33 [i_1] [i_1] [i_1] [15U])))), (((/* implicit */unsigned long long int) min((-5511365968277110015LL), (((/* implicit */long long int) arr_33 [i_1] [i_1] [3] [(_Bool)1])))))));
        }
    }
    for (unsigned char i_10 = 1; i_10 < 18; i_10 += 4) 
    {
        var_30 = ((/* implicit */unsigned short) (unsigned char)0);
        arr_40 [(unsigned short)0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)2))));
        var_31 -= ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((var_1) < (((/* implicit */long long int) arr_38 [i_10] [i_10]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_11 = 2; i_11 < 18; i_11 += 3) 
        {
            var_32 = ((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_10 + 1] [i_11 - 1])) << (((((/* implicit */int) arr_39 [i_10 - 1] [i_11 - 2])) - (19674)))));
            arr_43 [(unsigned char)2] |= ((/* implicit */unsigned short) (short)32758);
            var_33 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << (((3137634313U) - (3137634294U)))))) ? (arr_41 [i_10] [i_10 + 1]) : (((((/* implicit */_Bool) var_7)) ? (arr_37 [i_11] [i_10]) : (((/* implicit */unsigned long long int) arr_38 [i_10] [i_10])))));
        }
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) 1157332991U)) : (((unsigned long long int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_16)))) : (var_7)));
    }
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        for (short i_13 = 1; i_13 < 19; i_13 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        {
                            arr_56 [15LL] [i_14] [i_15] = ((signed char) (~(482956904U)));
                            arr_57 [(short)17] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3137634304U)))) - (((var_11) ? (((/* implicit */unsigned long long int) -10LL)) : (arr_37 [i_12] [i_13])))))));
                            /* LoopSeq 1 */
                            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                            {
                                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) arr_55 [(short)10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_16] [i_13 - 1]))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_58 [i_13] [19ULL]))))))))));
                                var_36 = ((/* implicit */unsigned int) arr_55 [i_12]);
                                arr_61 [i_14] [(signed char)17] [i_14] [i_13] [i_12] = ((/* implicit */unsigned char) max((((var_8) < (((/* implicit */unsigned long long int) arr_36 [i_15] [i_13 + 1])))), (arr_59 [i_16] [i_14] [i_12])));
                                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_39 [(unsigned char)4] [i_13 - 1]), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (arr_44 [3LL]))))))) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1157332991U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1177)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)53717))) / (arr_48 [i_14] [i_14])))) : (((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */unsigned long long int) 3541804694U)) : (arr_41 [i_15] [i_14])))))));
                            }
                            var_38 = ((/* implicit */long long int) ((((unsigned int) min((7590777360498938289LL), (9223372036854775807LL)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_49 [i_13 + 1] [i_13 + 1] [i_13]))))));
                        }
                    } 
                } 
                arr_62 [i_12] = ((/* implicit */unsigned short) ((_Bool) ((var_8) << (((/* implicit */int) arr_44 [i_13 - 1])))));
                arr_63 [i_12] [(short)10] [(short)10] = ((/* implicit */unsigned short) arr_47 [i_13]);
            }
        } 
    } 
}
