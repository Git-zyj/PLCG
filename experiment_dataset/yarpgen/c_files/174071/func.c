/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174071
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
    var_12 = ((/* implicit */unsigned char) var_10);
    var_13 = ((/* implicit */unsigned short) var_5);
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_7))))))));
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) var_2)) + (var_0)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned short) ((arr_0 [i_0 - 1]) << (((arr_0 [i_0 + 1]) - (1758551004)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 + 1])) - (((((/* implicit */_Bool) arr_2 [(unsigned short)4])) ? (((/* implicit */int) var_3)) : (arr_0 [i_0]))))))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_18 = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((/* implicit */int) arr_8 [i_0 + 2] [i_3] [i_3]))))) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_2 - 1] [i_2])))))));
                    arr_12 [i_0] [i_0] [i_1] [18ULL] [i_3] &= arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1];
                }
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_6))));
                arr_13 [i_1] [i_1] [(unsigned short)3] [i_1] = ((/* implicit */unsigned char) ((arr_7 [i_0 + 2]) & (arr_7 [i_0 + 2])));
                var_21 |= ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (18446744073709551609ULL))))) % (((((/* implicit */_Bool) arr_9 [i_0] [6LL] [i_0] [i_2 + 1] [i_2 + 1] [i_2])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_1] [i_2] [i_0] [i_2] [16ULL])))));
            }
        }
        /* LoopSeq 3 */
        for (int i_4 = 2; i_4 < 20; i_4 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_23 |= ((unsigned char) 1825052090U);
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-69)) || (((/* implicit */_Bool) var_4)))))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) ((_Bool) 18446744073709551601ULL))) : (((/* implicit */int) (unsigned char)183))));
                arr_21 [i_0] [i_0] [i_4] [i_5] = ((unsigned int) (_Bool)0);
            }
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (2482493568U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_6])) | (((/* implicit */int) (unsigned char)186)))))));
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 + 1])) ? (arr_7 [i_4 + 1]) : (arr_7 [i_4 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 3; i_7 < 20; i_7 += 1) 
                {
                    var_28 |= ((/* implicit */unsigned short) 11ULL);
                    arr_26 [i_0] [i_0] [9ULL] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_4]) >= (((/* implicit */int) (unsigned char)246)))))) % (arr_22 [i_0 + 2] [(unsigned short)21])));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)183)))))) : (arr_1 [i_0 + 3])));
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_30 [i_0] = ((/* implicit */unsigned short) arr_3 [i_4 - 2] [i_0 + 1]);
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_2 [i_4]))));
            }
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                /* LoopSeq 4 */
                for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((unsigned char) arr_7 [i_0])))));
                    var_32 = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (((var_11) - (var_0))));
                    var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_18 [i_0] [i_4 - 1] [i_9] [i_10]))))));
                }
                for (unsigned int i_11 = 1; i_11 < 18; i_11 += 1) 
                {
                    arr_39 [i_0] [i_4] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((unsigned short) arr_20 [i_4] [i_4 - 1] [i_4] [i_4 - 2])))));
                }
                for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((arr_25 [i_4 - 2] [(unsigned short)13] [i_4 - 2] [i_0 + 2]) / (arr_25 [i_4 - 2] [i_4] [i_9] [i_0 + 2]))))));
                    var_36 += ((/* implicit */int) (unsigned char)122);
                }
                for (short i_13 = 2; i_13 < 20; i_13 += 3) 
                {
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) arr_10 [i_0] [i_4] [i_0] [i_9] [i_13]))));
                    arr_45 [12U] [i_0 + 3] [i_0] [i_4] [(short)7] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) | (arr_18 [i_13] [i_9] [i_4] [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9))))));
                    var_38 = ((/* implicit */short) ((14ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_13] [i_13 - 2])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 4; i_14 < 21; i_14 += 4) 
                    {
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((var_6) % (2469915221U))))));
                        var_40 = ((/* implicit */unsigned int) (unsigned short)51384);
                        var_41 = ((/* implicit */short) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                }
                arr_50 [i_9] [i_4 - 2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) arr_23 [i_0])));
            }
            arr_51 [i_0] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)60)) | (((/* implicit */int) (unsigned char)0))))));
            var_42 ^= ((/* implicit */unsigned long long int) ((1217919182U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0 - 1] [2ULL] [i_0])))));
        }
        for (signed char i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            var_43 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14149))) & (1825052070U)));
            /* LoopSeq 4 */
            for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                arr_56 [i_15] [i_16] = ((/* implicit */short) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0 + 3] [i_0 - 1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 2; i_17 < 19; i_17 += 2) 
                {
                    for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        {
                            arr_62 [i_0] [i_15] [i_16] [i_16] [i_18] [i_16] &= ((/* implicit */short) (unsigned char)249);
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((unsigned short) arr_7 [i_0 + 3])))));
                            var_45 = ((/* implicit */unsigned char) ((unsigned int) 148584392));
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned int) max((var_46), ((~(var_0)))));
            }
            for (long long int i_19 = 1; i_19 < 19; i_19 += 2) 
            {
                var_47 = ((/* implicit */int) var_4);
                arr_65 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0 + 2] [i_19] [i_19 + 1] [i_19])) ? (((/* implicit */long long int) arr_2 [(short)20])) : (arr_32 [i_0 + 1] [i_19] [i_19 + 3] [i_19])));
            }
            for (unsigned long long int i_20 = 4; i_20 < 21; i_20 += 4) 
            {
                arr_68 [i_0] [i_15] = ((/* implicit */unsigned int) ((arr_52 [i_20] [i_20 - 3] [i_20 - 4]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 1825052100U)) ? (((/* implicit */int) var_7)) : (arr_7 [i_15]))))));
                var_48 += arr_42 [i_0] [(short)15] [i_0] [(short)15];
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_49 = ((/* implicit */unsigned short) arr_1 [i_20 - 2]);
                    arr_71 [17] [i_21] [i_20] [i_21] [i_21] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_0 + 2] [i_15] [i_20] [i_20 + 1] [i_21])) ? (((/* implicit */unsigned long long int) 1217919182U)) : (arr_60 [i_0] [i_15] [i_20 - 3] [i_20 - 4] [i_20 - 4])));
                }
            }
            for (int i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) << (((1825052090U) - (1825052074U))))))));
                var_51 = ((/* implicit */unsigned char) (-(arr_37 [i_0] [i_15])));
                var_52 *= var_6;
                var_53 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2]))));
            }
            var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 13414887U)) : (5459736316158031887ULL))))))));
        }
        for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 4) 
        {
            arr_76 [i_0] [(unsigned char)19] = ((/* implicit */unsigned char) arr_61 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 3]);
            arr_77 [i_0] = ((/* implicit */short) (!(((((/* implicit */int) (unsigned short)14159)) > (((/* implicit */int) (signed char)10))))));
        }
        var_55 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 + 3]))) : (12987007757551519728ULL)));
    }
    for (unsigned char i_24 = 1; i_24 < 19; i_24 += 1) /* same iter space */
    {
        var_56 += ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_11 [i_24 + 1] [i_24 + 1] [i_24] [i_24 + 1] [i_24 + 3] [i_24])))));
        var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2469915205U)))) ? (((((/* implicit */_Bool) 16921135131431632747ULL)) ? (((/* implicit */int) arr_64 [i_24] [i_24] [(unsigned char)12])) : (((/* implicit */int) arr_19 [i_24] [i_24] [i_24])))) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_64 [i_24] [(unsigned char)15] [i_24]))))) : (((long long int) arr_4 [i_24])))))));
        var_58 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((arr_28 [i_24 + 3]), (arr_28 [i_24 + 2])))), (min((((/* implicit */unsigned int) arr_28 [i_24 + 3])), (var_11)))));
        var_59 ^= ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_47 [i_24] [(unsigned short)3] [i_24 - 1] [i_24] [(signed char)14])))));
    }
    for (unsigned char i_25 = 1; i_25 < 19; i_25 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_26 = 1; i_26 < 20; i_26 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_27 = 0; i_27 < 22; i_27 += 3) 
            {
                var_60 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_26 + 1])) && (((/* implicit */_Bool) (signed char)-11)))) && (((/* implicit */_Bool) arr_4 [i_26 + 2]))));
                arr_91 [i_25] [14ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)8445)) || (((7361337021923532186ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -4327721524253874578LL))))))));
                /* LoopSeq 1 */
                for (unsigned char i_28 = 0; i_28 < 22; i_28 += 4) 
                {
                    arr_95 [i_25] [i_25] = max((((((/* implicit */_Bool) ((2469915207U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_26] [i_27])))))) ? (arr_5 [i_25] [i_25] [i_28]) : (((/* implicit */unsigned long long int) max((arr_22 [i_25] [i_28]), (((/* implicit */unsigned int) arr_70 [i_27]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_28]))) : ((+(2469915205U)))))));
                    var_61 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_20 [i_25] [i_25] [i_25 + 2] [i_25]))) || (((((/* implicit */_Bool) arr_92 [i_28] [i_26 + 2] [i_27] [i_28] [i_27] [i_27])) && (((/* implicit */_Bool) (signed char)-28))))));
                    arr_96 [i_26] [i_26] [i_28] [8] [i_26] &= ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)14169)))) ^ (((/* implicit */int) (unsigned char)24))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-8448)) + (2147483647))) << (((3540587891U) - (3540587891U)))))) ? (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (5459736316158031884ULL))) : (((/* implicit */unsigned long long int) arr_37 [i_25 - 1] [i_25])))) : (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) (signed char)27))))) : (max((arr_94 [i_25] [i_26] [i_25] [i_26] [i_27] [i_28]), (((/* implicit */unsigned long long int) var_0))))))));
                    arr_97 [i_25] [i_26] [i_26] [i_25] [i_28] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (unsigned short)61440)), (max((var_0), (((/* implicit */unsigned int) arr_67 [i_25] [(unsigned char)1] [i_28])))))) != (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 1825052076U)) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_87 [i_25] [i_28])) : (((/* implicit */int) var_1)))))))));
                }
            }
            arr_98 [i_25] [i_26 + 2] = (~((~(1073741824U))));
            arr_99 [i_26] [i_25] [i_26] = ((unsigned int) ((((/* implicit */int) (signed char)7)) % (max((arr_6 [i_25]), (((/* implicit */int) arr_93 [i_25] [i_25] [i_25] [12ULL] [12ULL] [i_25]))))));
        }
        arr_100 [i_25] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) - (((unsigned long long int) arr_46 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])))));
    }
}
