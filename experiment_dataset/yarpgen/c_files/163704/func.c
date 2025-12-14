/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163704
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
    var_20 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)103))) : (var_17))))), (((/* implicit */long long int) var_7))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */long long int) var_7))))))))));
    var_22 = ((/* implicit */short) (~(var_10)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 2]))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((arr_4 [i_0] [i_1] [i_2 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32753))))), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 3] [i_2 + 2] [i_0])) << (((((/* implicit */int) arr_3 [i_2 - 1])) + (114)))))) : (((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) % (((long long int) arr_2 [i_1]))))));
                    var_24 = ((/* implicit */int) (signed char)127);
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_3 [i_0])))) > ((+(((((/* implicit */_Bool) 3217102545U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (signed char i_7 = 3; i_7 < 7; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~(((/* implicit */int) ((arr_18 [i_4] [i_4 + 1] [i_5] [i_5 + 2] [i_7 + 3] [i_4 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)-8))))))) >= (min((3836442999U), (((/* implicit */unsigned int) (unsigned short)31018))))));
                        }
                    } 
                } 
            } 
            arr_23 [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) arr_0 [i_4 - 1] [i_3]);
            arr_24 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3]))))), ((+(((/* implicit */int) var_16))))))) ? ((-((~(((/* implicit */int) (short)14909)))))) : (((((/* implicit */_Bool) (unsigned short)49011)) ? (((/* implicit */int) (short)5288)) : (((/* implicit */int) var_3))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 3; i_8 < 9; i_8 += 2) 
        {
            var_27 = ((/* implicit */int) arr_19 [i_8] [i_8] [0ULL] [i_8]);
            var_28 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_7)) % (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49011))) : (9004520378472350311ULL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 1) 
            {
                var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) != (var_15))))));
                var_30 ^= ((/* implicit */signed char) (-(arr_28 [i_3] [i_9 + 1])));
            }
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            /* LoopSeq 4 */
            for (int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (signed char i_13 = 1; i_13 < 8; i_13 += 3) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned int) ((short) (~(arr_4 [i_3] [i_10] [i_11]))));
                            var_32 = ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_13] [i_13 - 1] [i_3] [i_3]))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_11]))));
            }
            for (short i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                arr_41 [i_14] [i_10] [i_10] [i_14] = ((/* implicit */long long int) ((1757715657U) < (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                arr_42 [i_14] [i_10] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) (signed char)-69)))));
                arr_43 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_34 [i_3] [i_10] [i_10] [i_14]))));
            }
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                arr_46 [i_3] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 458524296U)) ? (((/* implicit */int) arr_19 [i_3] [i_10] [6LL] [(short)3])) : (((/* implicit */int) arr_22 [i_3] [i_3] [i_10] [i_10] [i_15])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_19))))));
                var_34 = var_19;
                arr_47 [i_3] [i_10] [i_15] = ((/* implicit */unsigned int) arr_33 [i_10]);
            }
            for (short i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                arr_50 [i_3] [i_10] = ((signed char) ((((/* implicit */_Bool) 3204925523U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_10] [i_16] [i_16]))) : (-1LL)));
                var_35 = ((/* implicit */signed char) (unsigned short)16570);
            }
            var_36 ^= arr_12 [i_3] [i_10];
            var_37 |= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_19)) / (((/* implicit */int) (unsigned short)16524))))) * (arr_26 [i_10] [i_10] [i_10])));
        }
        var_38 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_3] [i_3])) << (((((((/* implicit */int) (signed char)-52)) + (79))) - (27)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) : (var_7)))));
        arr_51 [i_3] [i_3] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) arr_29 [i_3] [i_3] [i_3])), (arr_31 [i_3] [i_3]))))), (((min((6928181923955892208ULL), (((/* implicit */unsigned long long int) var_2)))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18)))))))));
    }
    for (long long int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
    {
        arr_54 [i_17] = ((/* implicit */unsigned long long int) (((~(arr_48 [i_17] [i_17]))) <= (((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) == (((/* implicit */int) (signed char)89)))) ? ((-(((/* implicit */int) var_18)))) : (((/* implicit */int) var_16)))))));
        /* LoopSeq 3 */
        for (long long int i_18 = 0; i_18 < 10; i_18 += 2) 
        {
            var_39 = min((((((((/* implicit */_Bool) arr_52 [i_17])) && (((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) ((signed char) 7631832810652665738LL))) : (((/* implicit */int) min((var_16), (var_5)))))), (((/* implicit */int) ((((((/* implicit */int) var_19)) - (((/* implicit */int) var_13)))) == (((/* implicit */int) arr_44 [i_18] [i_17] [i_17] [i_17]))))));
            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_17] [i_17] [i_17] [i_17])) ? (((long long int) var_12)) : ((+(-754037227922538651LL)))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            arr_62 [i_17] [i_19] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_8)));
            var_41 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_17] [i_17] [i_19] [i_19]))));
            arr_63 [i_17] [i_19] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) var_11))), (((((/* implicit */int) (short)-20207)) + (((/* implicit */int) (short)-16384))))));
            /* LoopSeq 3 */
            for (short i_20 = 1; i_20 < 7; i_20 += 2) 
            {
                var_42 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [(signed char)1] [(signed char)1] [(signed char)1]))))), (min((9442223695237201316ULL), (((/* implicit */unsigned long long int) (short)29515))))))));
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    for (long long int i_22 = 2; i_22 < 7; i_22 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_12)))))) < (((arr_64 [i_20 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_20 + 1])))))));
                            arr_72 [i_20] [i_21] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(9442223695237201316ULL)))) ? (((/* implicit */int) ((unsigned char) var_15))) : (((/* implicit */int) var_5))));
                            var_44 = ((/* implicit */short) ((signed char) (signed char)127));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_23 = 1; i_23 < 9; i_23 += 4) 
            {
                var_45 ^= ((/* implicit */unsigned int) arr_14 [i_17] [i_17] [i_17]);
                arr_75 [i_23] [i_23 + 1] [i_17] [i_23] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_12)))) ? (((var_8) % (((/* implicit */long long int) ((/* implicit */int) (signed char)40))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_23 - 1] [i_19] [i_19] [i_19] [i_17])) ? (((/* implicit */int) (short)25223)) : (((/* implicit */int) var_3)))))));
            }
            for (short i_24 = 0; i_24 < 10; i_24 += 4) 
            {
                var_46 = ((/* implicit */signed char) (short)63);
                var_47 = ((/* implicit */unsigned int) 1936417552);
            }
        }
        for (short i_25 = 2; i_25 < 8; i_25 += 2) 
        {
            arr_80 [(unsigned short)2] = ((/* implicit */short) ((long long int) min((((unsigned long long int) 16548734968647466173ULL)), (116725429208073365ULL))));
            /* LoopSeq 3 */
            for (int i_26 = 1; i_26 < 7; i_26 += 2) /* same iter space */
            {
                var_48 += ((/* implicit */signed char) arr_59 [i_26] [i_26] [i_26]);
                /* LoopNest 2 */
                for (int i_27 = 1; i_27 < 8; i_27 += 1) 
                {
                    for (unsigned int i_28 = 1; i_28 < 9; i_28 += 2) 
                    {
                        {
                            var_49 |= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-9900))) != (arr_36 [i_28 + 1] [i_28 + 1] [i_27 - 1] [i_26 + 2] [i_25 + 2])))), (max((arr_36 [i_28] [i_28 + 1] [i_27 + 2] [i_26 + 3] [i_25 - 2]), (arr_36 [i_28 + 1] [i_28 - 1] [i_27 + 2] [i_26 - 1] [i_25 - 2])))));
                            var_50 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_18)), (var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)21468), (((/* implicit */short) var_6)))))) : (((((/* implicit */_Bool) arr_33 [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514))) : (arr_74 [i_17] [i_25 - 1] [i_26 + 3]))))))));
                        }
                    } 
                } 
            }
            for (int i_29 = 1; i_29 < 7; i_29 += 2) /* same iter space */
            {
                arr_92 [i_25] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) var_6))))))) ? (((var_10) / (((/* implicit */int) var_11)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) / ((~(((/* implicit */int) var_2))))))));
                var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((((/* implicit */int) var_19)) & (((/* implicit */int) var_3)))), (((/* implicit */int) max((var_9), (var_16))))))), (max((((/* implicit */long long int) 3912255819U)), (arr_36 [i_17] [(signed char)0] [(signed char)0] [i_17] [i_17]))))))));
                var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (min((((/* implicit */unsigned int) (signed char)119)), (1746192617U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95)))));
            }
            for (int i_30 = 4; i_30 < 7; i_30 += 2) 
            {
                arr_95 [i_25] [(short)4] [(short)4] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)126))));
                var_53 |= ((/* implicit */unsigned char) -5901755519324620484LL);
                var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned int) var_13)), (arr_16 [i_17] [i_17] [i_25 + 1] [i_30]))) : (((/* implicit */unsigned int) ((int) var_18)))))) ? (((/* implicit */int) max(((short)-23934), ((short)255)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_83 [i_30 + 1] [i_30 - 4] [i_25 + 2] [i_30 + 1] [i_30 + 2])))))));
            }
        }
        var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) ((signed char) (short)25086))), (min(((short)18584), ((short)7387)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_17]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_17] [i_17]))))) : (((/* implicit */int) arr_10 [i_17] [i_17]))))) : (((((/* implicit */long long int) var_7)) % (((((/* implicit */_Bool) var_5)) ? (-5901755519324620484LL) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))))));
        var_56 = ((/* implicit */int) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-16989)))));
    }
    for (long long int i_31 = 0; i_31 < 10; i_31 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_32 = 0; i_32 < 10; i_32 += 4) 
        {
            arr_101 [i_32] = ((/* implicit */int) ((unsigned int) var_12));
            arr_102 [i_31] [i_32] = ((/* implicit */unsigned short) var_13);
        }
        for (int i_33 = 0; i_33 < 10; i_33 += 1) 
        {
            var_57 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_56 [i_33] [i_33])) ? (((/* implicit */int) arr_56 [i_31] [i_31])) : (((/* implicit */int) (short)-256)))));
            var_58 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_31] [i_33] [i_33])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (max((((/* implicit */unsigned long long int) arr_19 [i_31] [i_31] [i_33] [i_31])), (4283861898046262792ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_33] [i_31]))))) : ((-(((/* implicit */int) ((((/* implicit */int) arr_52 [i_31])) < (((/* implicit */int) arr_100 [i_33] [i_31])))))))));
            arr_106 [i_33] [i_33] [9] = (((!(((/* implicit */_Bool) arr_17 [i_31] [i_33] [i_31] [i_33] [i_33])))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_52 [i_33])) == (((/* implicit */int) var_11))))) >> (((max((((/* implicit */unsigned int) var_2)), (2221361895U))) - (2221361878U)))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) arr_99 [i_31]))))), (((long long int) arr_68 [i_31] [i_33] [i_33] [i_31] [i_33] [i_31])))));
            var_59 &= min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)8952))) / (var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) : ((~(arr_16 [i_31] [i_31] [i_31] [i_31]))))), (((/* implicit */unsigned int) ((((/* implicit */int) min((var_19), (((/* implicit */short) var_2))))) <= (((/* implicit */int) arr_3 [i_33]))))));
        }
        arr_107 [i_31] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_52 [i_31]))))), (((((/* implicit */_Bool) ((short) var_13))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_88 [i_31] [i_31] [i_31] [i_31] [i_31]))) : (((((/* implicit */_Bool) var_15)) ? (arr_65 [i_31] [i_31] [i_31]) : (((/* implicit */unsigned long long int) 2052617201U))))))));
        var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) : (arr_29 [i_31] [i_31] [4U])))) ? (var_10) : (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [4LL] [4LL])) && (((/* implicit */_Bool) arr_39 [(short)0] [i_31])))))));
        arr_108 [i_31] [i_31] = ((/* implicit */short) ((unsigned long long int) arr_93 [i_31] [i_31] [i_31]));
    }
}
