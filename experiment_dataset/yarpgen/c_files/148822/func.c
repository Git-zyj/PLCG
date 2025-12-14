/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148822
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_14 += ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-109))));
                    var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775797LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-9223372036854775794LL)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        var_17 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_9 [i_3 - 1])) ? (arr_9 [i_3 - 1]) : (arr_9 [i_3 - 1]))));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_4] [(unsigned char)12]))) ^ (((long long int) (_Bool)1))))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((unsigned char) ((9223372036854775794LL) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 1] [6U] [i_3 + 1]))))))));
        }
        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_5] [i_5])) : (((/* implicit */int) arr_11 [i_3 - 1] [i_5] [i_3 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_3 + 1])) == (((/* implicit */int) arr_11 [i_3] [i_3 + 1] [i_3 + 1])))))) : ((+(((unsigned int) arr_13 [2U] [2U])))))))));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) arr_14 [i_3 + 1] [i_3])) : (((/* implicit */int) arr_14 [i_3 + 1] [i_5]))))) | (((unsigned int) var_9))))));
        }
        for (int i_6 = 2; i_6 < 19; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) arr_8 [i_3] [i_6 + 2]);
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_23 += ((/* implicit */unsigned char) max((((9223372036854775797LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36083))))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_3] [i_3 - 1])) == (((/* implicit */int) arr_16 [i_6] [(unsigned short)8])))))));
                    var_24 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) (unsigned short)29452)) && (((/* implicit */_Bool) arr_20 [i_3] [i_7] [i_7] [i_8] [i_8])))))) ? (((/* implicit */int) max((arr_10 [i_6 + 1] [i_6] [i_6 - 1]), (arr_10 [i_6 - 1] [i_6] [i_6 + 1])))) : (((/* implicit */int) ((short) arr_16 [(short)16] [i_6])))));
                    var_25 = ((/* implicit */unsigned int) arr_11 [i_3 + 1] [i_3] [i_3]);
                    var_26 += ((/* implicit */long long int) var_3);
                }
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    var_27 = ((/* implicit */short) var_9);
                    var_28 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned char) min(((unsigned short)29452), (((/* implicit */unsigned short) (short)29172)))))), (((long long int) min((9223372036854775807LL), ((-9223372036854775807LL - 1LL)))))));
                    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) ((unsigned char) 4077971552U))) : (var_2))) | (max((var_2), (((/* implicit */int) (unsigned short)29787))))));
                }
                for (unsigned short i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    var_30 = min(((unsigned short)29808), (((unsigned short) var_8)));
                    var_31 *= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_15 [i_6 + 1])) ^ (((/* implicit */int) arr_21 [(unsigned char)14] [(unsigned char)14])))), (((/* implicit */int) ((signed char) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [11U])))))))));
                }
                var_32 = ((((/* implicit */long long int) ((arr_13 [i_3 - 1] [i_3]) & (arr_13 [i_3 - 1] [i_7])))) ^ ((~(-9223372036854775794LL))));
            }
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)11945)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36082))) : (3665100004U)))) / (((((/* implicit */_Bool) arr_17 [i_6 + 1] [i_3 - 1] [i_3])) ? (arr_17 [i_6 + 2] [i_3 + 1] [i_3]) : (((/* implicit */long long int) var_9)))))))));
            var_34 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_1)))) == (((((/* implicit */_Bool) arr_19 [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_6 + 3] [i_6])) : (((/* implicit */int) (short)-11962))))));
            /* LoopSeq 2 */
            for (long long int i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_3 + 1] [i_11] [i_11])) ? (((/* implicit */int) ((unsigned char) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))))))) : (max((((/* implicit */int) ((signed char) arr_10 [i_3] [i_6] [i_11]))), ((~(((/* implicit */int) arr_26 [i_11]))))))));
                var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
            }
            for (unsigned char i_12 = 2; i_12 < 20; i_12 += 1) 
            {
                var_37 = ((/* implicit */unsigned int) ((int) var_9));
                var_38 = ((/* implicit */long long int) ((arr_29 [i_3] [(unsigned short)20] [i_12]) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5))))));
                var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-17941)) : (-667184801)));
            }
        }
        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_3 - 1] [(_Bool)1] [(unsigned short)0])) && (((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_17 [i_3] [i_3] [i_3]))) | (((/* implicit */int) max((arr_10 [i_3] [i_3] [i_3]), (var_8)))))))));
    }
    for (unsigned int i_13 = 2; i_13 < 22; i_13 += 4) 
    {
        var_41 |= ((/* implicit */unsigned int) arr_32 [i_13] [i_13 + 1]);
        var_42 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_34 [i_13 + 1])) & (((/* implicit */int) arr_34 [i_13 + 1])))));
    }
    /* vectorizable */
    for (signed char i_14 = 2; i_14 < 16; i_14 += 3) 
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                {
                    var_43 = ((/* implicit */unsigned char) (-(((int) -6436696803926928035LL))));
                    /* LoopSeq 2 */
                    for (short i_17 = 1; i_17 < 17; i_17 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_18 = 3; i_18 < 18; i_18 += 1) 
                        {
                            var_44 -= ((/* implicit */signed char) (+(arr_6 [i_18 - 2] [(signed char)14] [i_17 + 1] [i_14 + 2])));
                            var_45 = ((int) arr_28 [i_14] [i_14 - 2] [i_14 - 2] [i_17 + 1]);
                            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((arr_17 [i_14 + 2] [i_17 + 1] [i_18 - 2]) & (arr_17 [i_14 + 2] [i_17 + 1] [i_18 - 2]))))));
                            var_47 = ((/* implicit */unsigned short) (signed char)24);
                        }
                        for (long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            var_48 = ((/* implicit */_Bool) (unsigned short)10886);
                            var_49 -= ((/* implicit */unsigned int) ((long long int) arr_47 [i_17 + 2] [i_15] [i_16] [i_15] [i_17 + 1]));
                            var_50 = ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_49 [i_19] [i_19] [i_19] [i_19] [i_19]))))));
                            var_51 = arr_51 [i_14] [i_14] [i_14] [i_17] [i_19];
                            var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) var_2))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_53 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)29429)))) ^ (-131072LL)));
                            var_54 = ((/* implicit */unsigned char) max((var_54), (((unsigned char) arr_13 [i_17 + 2] [i_14 - 1]))));
                            var_55 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)4490))));
                        }
                        var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [(unsigned short)2] [i_17 - 1] [i_17 + 1] [i_17 - 1] [(short)16])) ? (((/* implicit */int) arr_47 [i_15] [i_17 + 1] [i_15] [i_14] [i_17])) : (((/* implicit */int) arr_47 [i_15] [i_17 + 1] [i_15] [i_14] [i_17 + 2]))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 19; i_21 += 4) 
                    {
                        var_57 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (unsigned short)54660)) : (((/* implicit */int) (short)17806)))));
                        var_58 += ((((((/* implicit */_Bool) arr_12 [i_14] [i_15] [(short)15])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) : (-9223372036854775773LL))) & (((/* implicit */long long int) arr_13 [i_14 + 2] [i_14 + 3])));
                        /* LoopSeq 2 */
                        for (unsigned short i_22 = 0; i_22 < 19; i_22 += 3) 
                        {
                            var_59 = ((/* implicit */signed char) ((((unsigned int) (unsigned char)214)) / (arr_29 [i_15] [i_14] [i_14 - 2])));
                            var_60 = ((/* implicit */unsigned char) ((int) arr_43 [i_14 - 2] [i_14] [i_14 + 3] [i_14 - 1]));
                        }
                        for (unsigned char i_23 = 1; i_23 < 16; i_23 += 1) 
                        {
                            var_61 += ((/* implicit */signed char) ((unsigned char) var_11));
                            var_62 &= arr_59 [i_23 - 1] [i_15] [i_14 - 2] [i_14 - 2] [14];
                            var_63 -= ((/* implicit */long long int) arr_46 [i_14] [i_21] [i_23]);
                            var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)32066)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_14] [18U] [i_16] [i_15] [i_23] [i_16] [(unsigned char)1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_23 - 1] [i_23 + 2] [i_23 + 3] [i_23 + 2])))));
                            var_65 = ((/* implicit */unsigned int) ((((unsigned int) (signed char)-107)) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        }
                        var_66 ^= ((/* implicit */unsigned char) arr_6 [i_21] [i_14 + 1] [i_14 + 2] [i_14]);
                    }
                }
            } 
        } 
        var_67 = ((/* implicit */unsigned short) ((unsigned int) (signed char)106));
    }
    /* LoopSeq 1 */
    for (short i_24 = 0; i_24 < 13; i_24 += 1) 
    {
        var_68 = ((/* implicit */_Bool) var_0);
        var_69 &= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)193)) > (var_7))) && (((/* implicit */_Bool) arr_17 [i_24] [i_24] [i_24]))));
        /* LoopSeq 2 */
        for (int i_25 = 1; i_25 < 11; i_25 += 1) 
        {
            var_70 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)20089)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)18))))));
            var_71 = ((/* implicit */unsigned int) min((var_71), (((/* implicit */unsigned int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_24] [i_25 + 1] [i_25])) ? (((/* implicit */int) var_8)) : (var_2)))))))));
        }
        for (unsigned char i_26 = 0; i_26 < 13; i_26 += 3) 
        {
            var_72 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)301)) * (((/* implicit */int) (signed char)-60)))));
            var_73 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) arr_56 [i_24] [i_24] [i_26] [i_26])));
        }
        var_74 |= arr_24 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24];
    }
}
