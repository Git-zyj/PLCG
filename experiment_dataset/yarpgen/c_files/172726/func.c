/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172726
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            var_20 -= ((/* implicit */_Bool) ((arr_0 [i_1 - 1]) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) != (var_1))))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 2] [i_1] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8192))) : (var_19)))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            var_22 = (-(arr_1 [i_2 + 1]));
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_23 = arr_4 [i_0] [i_2];
                var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_3]) < (((/* implicit */int) (short)0)))))) < (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32748))) : (3858682163U)))));
                var_25 = ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [(signed char)8] [i_2] [i_3])))) : (arr_0 [i_2 - 1]));
            }
            for (long long int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
            {
                var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (short)-28667)) : (((/* implicit */int) arr_2 [i_4]))));
                var_27 = ((/* implicit */long long int) var_17);
            }
            for (long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
            {
                var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44341))) : (3858682171U)));
                var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)21204)) ? (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1]) : (6739268371602620954LL)));
                var_30 = ((/* implicit */unsigned short) ((-6511382418076095459LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (signed char)127))));
            }
            for (long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_0]);
                var_33 = arr_14 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1];
                var_34 = ((/* implicit */long long int) arr_17 [i_0] [i_6]);
            }
            var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4701678684324965021LL)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) (unsigned short)37060))))) ? (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)44332))));
        }
        for (int i_7 = 1; i_7 < 15; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                var_36 ^= ((/* implicit */long long int) ((_Bool) arr_10 [i_0]));
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) ((arr_0 [i_8]) >= (((/* implicit */long long int) 608719404))))))))));
                var_38 = ((/* implicit */signed char) arr_8 [i_7] [i_7] [i_7]);
            }
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                for (unsigned int i_10 = 2; i_10 < 15; i_10 += 3) 
                {
                    {
                        var_39 = ((/* implicit */int) arr_1 [i_10]);
                        var_40 = ((/* implicit */_Bool) ((short) max(((signed char)-65), (var_6))));
                        var_41 = ((/* implicit */_Bool) arr_14 [i_7 - 1] [i_10 - 2] [i_7 - 1] [i_10 - 2]);
                    }
                } 
            } 
            var_42 = ((/* implicit */long long int) max((arr_21 [i_0] [i_0] [i_7]), (((((/* implicit */_Bool) arr_9 [i_0] [i_7 - 1] [i_0] [i_7])) ? (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (signed char)120))))));
            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)21204)) < (((((/* implicit */_Bool) arr_22 [i_0] [i_7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_26 [i_0] [i_7 - 1] [i_7]))))))) ^ (((((/* implicit */_Bool) ((-1563594960) + (((/* implicit */int) arr_2 [i_7]))))) ? (((/* implicit */int) ((arr_7 [i_0] [i_0] [i_7]) == (((/* implicit */long long int) -152861015))))) : (arr_22 [i_7 - 1] [i_7 + 1])))));
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 15; i_11 += 3) /* same iter space */
        {
            var_44 ^= ((/* implicit */int) ((((unsigned long long int) arr_32 [i_11])) | (((/* implicit */unsigned long long int) arr_5 [i_0]))));
            var_45 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)(-127 - 1))))));
            var_46 = ((/* implicit */signed char) arr_7 [i_11 - 1] [i_11 - 1] [i_11 + 1]);
            var_47 += ((/* implicit */unsigned short) arr_7 [i_11] [i_11] [i_11]);
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                var_48 = ((/* implicit */long long int) (unsigned char)0);
                var_49 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 2601393071437589429ULL))))));
                var_50 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)34774)) ? (arr_7 [i_0] [i_11] [i_12]) : (((((/* implicit */_Bool) -1)) ? (18014398509481983LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125)))))));
            }
        }
        var_51 = ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) -18014398509481996LL)))))) ? (min((((((/* implicit */_Bool) 3505536888U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))) : (7701262621085908798LL))), (((/* implicit */long long int) ((unsigned int) arr_8 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) -861689143)));
        var_52 = ((/* implicit */int) max((-2006847412223988562LL), (((/* implicit */long long int) arr_10 [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    {
                        var_53 -= ((/* implicit */int) ((short) ((unsigned short) var_4)));
                        var_54 = ((/* implicit */unsigned long long int) ((unsigned char) 0U));
                        var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_16 [i_13] [i_13] [i_13] [i_15]) : (((/* implicit */unsigned long long int) 18014398509482008LL)))))));
                        var_56 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_14])) && (((/* implicit */_Bool) ((signed char) (signed char)-15)))));
                    }
                } 
            } 
            var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7838)) ? (((/* implicit */int) ((unsigned short) 789430415U))) : (((int) arr_20 [i_0])))))));
        }
        for (signed char i_16 = 1; i_16 < 14; i_16 += 1) 
        {
            var_58 = ((/* implicit */unsigned short) (-(arr_35 [i_16])));
            var_59 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((789430415U), (3505536871U)))))))) & (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_0] [i_16 + 1])))))) : (min((arr_38 [i_16]), (((/* implicit */unsigned long long int) 4294967289U))))))));
        }
        /* LoopSeq 1 */
        for (short i_17 = 3; i_17 < 13; i_17 += 1) 
        {
            var_60 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65524)) ? ((+(((/* implicit */int) arr_2 [(signed char)14])))) : (((/* implicit */int) ((arr_38 [i_17]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))))))))), (((unsigned long long int) var_18))));
            /* LoopSeq 1 */
            for (int i_18 = 2; i_18 < 14; i_18 += 1) 
            {
                var_61 = ((/* implicit */unsigned short) max((var_61), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_0] [i_17] [i_18 + 1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_17 [i_0] [i_18])), ((unsigned short)22288)))), (arr_29 [i_0] [(signed char)11] [i_17] [i_18])))) : (max((4294967295ULL), (((/* implicit */unsigned long long int) ((2805668461U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0])))))))))))));
                var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_26 [i_17 - 2] [i_18 - 2] [i_18 - 1]), (((/* implicit */unsigned short) var_13))))))))));
                var_63 ^= ((/* implicit */unsigned short) ((short) max((((var_12) ? (var_18) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0])))));
            }
            var_64 ^= ((/* implicit */unsigned char) max((((unsigned short) max((var_15), (var_14)))), (((/* implicit */unsigned short) var_11))));
        }
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 11; i_19 += 3) 
    {
        var_65 = ((/* implicit */unsigned int) (~(-5657991621832537818LL)));
        var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 922310722))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-382454201000890862LL) : (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)118)))));
        var_67 = ((/* implicit */long long int) (-(3505536871U)));
        /* LoopSeq 1 */
        for (long long int i_20 = 1; i_20 < 10; i_20 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_21 = 0; i_21 < 11; i_21 += 2) 
            {
                var_68 = ((/* implicit */short) (_Bool)1);
                var_69 ^= ((/* implicit */signed char) (short)511);
            }
            for (signed char i_22 = 1; i_22 < 7; i_22 += 3) 
            {
                var_70 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)132)) ? (arr_29 [i_20 + 1] [i_22] [i_22 - 1] [i_22 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_20 + 1] [i_20 - 1] [i_20])))));
                var_71 = var_16;
            }
            var_72 = ((/* implicit */signed char) arr_53 [(short)6] [(short)6]);
        }
    }
    /* vectorizable */
    for (signed char i_23 = 3; i_23 < 15; i_23 += 4) 
    {
        var_73 = ((/* implicit */short) ((((/* implicit */int) ((short) (unsigned short)65534))) / (((/* implicit */int) (unsigned short)35019))));
        var_74 = ((/* implicit */unsigned short) arr_66 [i_23 + 2] [i_23 + 3]);
        var_75 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_23] [i_23])) ? (3692449031455381616LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)(-32767 - 1)))))));
    }
    var_76 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned long long int) ((short) var_0)))));
}
