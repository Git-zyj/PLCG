/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108962
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) >= (-5578691632536308601LL)));
        arr_4 [i_0] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)0))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) 17177772032ULL)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)65535)))) == (((/* implicit */int) (signed char)31))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                var_16 = ((/* implicit */long long int) var_7);
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)46))));
                    var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_6 [i_3])))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_1])), (-4903451514792619987LL))))));
                }
            }
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((16777215ULL), (((/* implicit */unsigned long long int) (signed char)46)))))));
            arr_18 [i_2] = ((((/* implicit */_Bool) min((min((10383125721120801762ULL), (18446744073709551601ULL))), (((((/* implicit */_Bool) (short)32767)) ? (1464023317522599629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))) ? ((~(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((3253188289491509278ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
        }
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((37ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_1])), (arr_15 [i_1] [i_1] [i_1] [i_1])))) : (((long long int) arr_11 [i_1]))));
        arr_19 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((7950731665866360173ULL), (15ULL)))) ? (((/* implicit */unsigned long long int) -3531609800168389464LL)) : (4806801638296905158ULL)))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (((+(((/* implicit */int) arr_8 [i_5] [i_5])))) >= (((((/* implicit */_Bool) (short)13446)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-32761)))))))));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 70368744177663ULL))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            arr_26 [i_6 + 1] &= ((/* implicit */long long int) (((-(arr_13 [i_6 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) <= (((unsigned long long int) arr_13 [i_6 + 1] [i_5] [i_5 - 1] [i_5]))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 1; i_9 < 17; i_9 += 3) 
                        {
                            arr_36 [i_9] [i_5] [i_8] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-47)), (1432628053U)))) ? ((~(var_1))) : (((((/* implicit */_Bool) (signed char)-64)) ? (1685724000785238764ULL) : (18446744073709551615ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (60877002) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_31 [i_5 - 1] [i_8] [i_9 - 1] [i_8])) : (((((/* implicit */_Bool) (short)22033)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)46310)))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) 71987225293750272LL)) <= (17767613332501116627ULL))))));
                            arr_37 [i_8] = (i_8 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (11109383071674678682ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_6 + 1] [i_5]))) : (((((/* implicit */_Bool) 10890632258125499205ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)46))) : (-5083302657473360138LL)))))) ? (((/* implicit */unsigned long long int) ((((min((-5210929489141496746LL), (arr_20 [i_6]))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_31 [i_5 - 1] [i_8] [i_5 - 1] [i_5 - 1])) + (55)))))) : (min((((/* implicit */unsigned long long int) -2883874781600917341LL)), (10890632258125499205ULL)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (11109383071674678682ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_6 + 1] [i_5]))) : (((((/* implicit */_Bool) 10890632258125499205ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)46))) : (-5083302657473360138LL)))))) ? (((/* implicit */unsigned long long int) ((((min((-5210929489141496746LL), (arr_20 [i_6]))) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_31 [i_5 - 1] [i_8] [i_5 - 1] [i_5 - 1])) + (55))) + (42)))))) : (min((((/* implicit */unsigned long long int) -2883874781600917341LL)), (10890632258125499205ULL))))));
                        }
                        var_21 ^= ((/* implicit */unsigned char) (+((~(((/* implicit */int) (signed char)-17))))));
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 2; i_10 < 15; i_10 += 1) 
        {
            arr_40 [i_5] [i_10] [i_10] = ((/* implicit */unsigned int) (~(((unsigned long long int) 2900294407595271876ULL))));
            var_22 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (min((((/* implicit */int) (_Bool)1)), (arr_28 [i_10 - 1])))));
        }
    }
    for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        arr_44 [i_11] = ((/* implicit */short) (signed char)31);
        arr_45 [i_11] [i_11] = ((/* implicit */long long int) ((signed char) min(((short)-20065), (var_3))));
        /* LoopSeq 2 */
        for (signed char i_12 = 1; i_12 < 14; i_12 += 3) 
        {
            arr_49 [i_11] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 4907848670137162777LL))));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 4; i_13 < 16; i_13 += 2) 
            {
                arr_52 [i_11] [i_12] [i_13] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)20065)))), (((/* implicit */int) (signed char)-32))));
                arr_53 [i_11] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32765)) ? (arr_41 [i_12 + 1] [i_12 + 1]) : (arr_41 [i_12 + 1] [i_12 + 1])))) ? (((/* implicit */unsigned long long int) ((arr_41 [i_12 + 1] [i_12 + 1]) >> (((arr_41 [i_12 + 1] [i_12 + 1]) - (5770457982663623989LL)))))) : (((unsigned long long int) arr_41 [i_12 + 1] [i_12 + 1]))));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_56 [i_11] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_11] [i_11]))) < (((((/* implicit */_Bool) (short)-20065)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13526836008941630987ULL))))))) / (min(((-(var_1))), ((((_Bool)1) ? (549755813887ULL) : (arr_51 [i_11] [i_11] [i_11])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 2; i_15 < 16; i_15 += 2) 
            {
                arr_60 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) (-(arr_54 [i_11] [i_14] [i_14]))));
                arr_61 [i_11] [i_11] [i_11] [i_11] = ((((/* implicit */_Bool) (~(12494462091311955436ULL)))) ? (arr_13 [i_15 - 1] [i_14] [i_15 + 1] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))));
            }
            arr_62 [i_11] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_14])) ? (((((/* implicit */_Bool) arr_15 [i_11] [i_11] [i_11] [i_11])) ? (arr_15 [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */int) (signed char)42)))) : (arr_7 [i_11] [i_11])));
        }
        arr_63 [i_11] [i_11] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_29 [i_11])), (4294967290U))) % (((((((/* implicit */_Bool) arr_25 [i_11] [i_11])) ? (arr_34 [i_11] [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_11] [i_11]))))) + (((/* implicit */unsigned int) var_4))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_67 [i_16] [i_16] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 72057456598974464ULL)) ? (((/* implicit */unsigned long long int) -1480910940)) : (14ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4828))) : (((((/* implicit */_Bool) -4766423570223361640LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446743523953737712ULL))))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (4294967295U) : (2006602456U)))), (((4611686018427256832ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20065)))))))));
        arr_68 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (arr_64 [i_16] [i_16])))) ? (arr_66 [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 915110401U)) && (((/* implicit */_Bool) 17062374160038177941ULL))))))));
        arr_69 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_64 [i_16] [i_16])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_16] [i_16])) ? (((/* implicit */unsigned int) 1795878434)) : (4194303U)))) : (max((arr_66 [i_16]), (((/* implicit */unsigned long long int) arr_65 [i_16]))))));
    }
    for (signed char i_17 = 3; i_17 < 24; i_17 += 2) 
    {
        var_23 = ((/* implicit */long long int) ((arr_71 [i_17]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)119)), (arr_70 [i_17 - 1] [i_17])))) ? (arr_70 [i_17] [i_17 - 1]) : (((/* implicit */int) ((((/* implicit */int) (short)-31942)) < (((/* implicit */int) (short)-28060))))))))));
        var_24 = ((/* implicit */unsigned long long int) ((long long int) var_3));
    }
    var_25 ^= ((/* implicit */long long int) ((unsigned short) (~(min((((/* implicit */unsigned long long int) 4294967270U)), (var_5))))));
}
