/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187225
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1)))))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_11 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * ((+(var_4)))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) min((var_12), ((~(((/* implicit */int) arr_2 [(unsigned char)10] [i_0]))))));
            /* LoopSeq 4 */
            for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_1))));
                var_15 = ((/* implicit */unsigned int) var_2);
            }
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_16 = ((/* implicit */_Bool) var_0);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_17 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)116)) * (((/* implicit */int) (unsigned short)4553))))) & ((-(var_4))));
                        var_18 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) < (arr_15 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 3] [i_1] [i_1 + 2] [i_1 - 2]))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    var_19 ^= ((((/* implicit */int) var_6)) >> (((arr_16 [i_0] [i_1 + 1] [i_3]) - (2499019991U))));
                    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_1 - 1] [i_3]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_7]);
                        var_22 ^= ((/* implicit */_Bool) arr_18 [i_1]);
                        arr_21 [i_0 - 1] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)250)) && (((/* implicit */_Bool) (signed char)-32))))) : (((/* implicit */int) var_6)));
                    }
                    for (int i_8 = 2; i_8 < 19; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 4])) & (((/* implicit */int) var_8))));
                        var_24 = ((/* implicit */signed char) arr_13 [i_0 + 3] [(short)5] [i_1 - 1] [(short)5] [(short)5] [i_6] [i_1 - 1]);
                        var_25 = ((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [i_6] [i_6]);
                        var_26 += (+((~(((/* implicit */int) arr_13 [i_0] [i_0] [i_1 + 1] [i_3] [i_3] [i_6] [i_6])))));
                    }
                    var_27 = arr_9 [i_1] [i_1] [4];
                }
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */short) (~(((arr_4 [i_0] [i_0] [i_0]) & (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2] [i_0] [i_1 - 2])) && (((/* implicit */_Bool) var_6)))))))));
                    var_29 = ((/* implicit */unsigned long long int) var_5);
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [(signed char)2]))))))));
                        var_31 = var_0;
                    }
                    /* vectorizable */
                    for (short i_11 = 4; i_11 < 19; i_11 += 1) 
                    {
                        var_32 |= ((/* implicit */short) var_8);
                        var_33 |= arr_25 [i_0 + 2] [i_11 - 3] [i_0 + 2] [i_0 + 2];
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_9))));
                    }
                }
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 17; i_12 += 2) 
                {
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4)))))));
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_7))));
                    var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0))))))))));
                }
                var_38 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [3]))) != (var_4)))) != (((/* implicit */int) var_2))));
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 17; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        {
                            arr_41 [5] = ((/* implicit */unsigned char) var_6);
                            var_39 = ((/* implicit */unsigned char) var_1);
                        }
                    } 
                } 
                arr_42 [0U] [i_0] [i_0] &= ((/* implicit */unsigned int) var_9);
                arr_43 [i_0] [i_0] [9ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))))))));
                var_40 = ((/* implicit */unsigned char) (~(var_5)));
                var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_13 + 1] [i_0])))))));
            }
            for (unsigned int i_16 = 2; i_16 < 19; i_16 += 2) 
            {
                arr_47 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))) : ((~(18446744073709551612ULL)))));
                var_42 = ((/* implicit */short) ((((((arr_19 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 2]) + (arr_35 [i_1] [i_1] [i_1 - 2] [(signed char)14]))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_32 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_31 [(signed char)12] [i_1] [i_16 + 1] [i_1])))));
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_35 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3])) | (var_4))) >> (((((/* implicit */int) var_0)) - (2844)))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_8))));
                var_44 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_34 [i_1] [i_16 + 1])))) / (((/* implicit */int) var_2)))) >> (((((/* implicit */int) var_3)) - (59201)))));
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) * (3ULL)));
            }
        }
        for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
        {
            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) | (((((/* implicit */_Bool) arr_22 [i_0 + 1] [i_0 + 1] [16])) ? ((~(((/* implicit */int) var_6)))) : ((-(((/* implicit */int) arr_2 [i_0] [(_Bool)1])))))))))));
            /* LoopSeq 1 */
            for (short i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                var_47 = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_2))))));
                arr_54 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_8))))) != (((/* implicit */int) arr_38 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_17] [i_18] [i_18]))));
                var_48 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_1))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
                {
                    var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) var_0))));
                    arr_57 [i_0] [i_0] [i_18] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (var_4)));
                    var_50 += ((/* implicit */unsigned int) arr_28 [i_19] [i_18]);
                }
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
                {
                    var_51 = ((/* implicit */unsigned long long int) max((var_51), (((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned char)63)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) var_7)) - (26642)))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_46 [8ULL] [8ULL] [(_Bool)1])))))))));
                    arr_60 [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 3] = ((/* implicit */int) var_3);
                }
                for (unsigned short i_21 = 0; i_21 < 20; i_21 += 4) /* same iter space */
                {
                    arr_65 [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_39 [i_0 + 4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) << (((((/* implicit */int) var_3)) - (59205))))) == ((+(((((/* implicit */_Bool) arr_55 [i_0] [12] [i_0] [18U] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_56 [10] [i_17] [i_18] [i_21] [i_21]))))))));
                    var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (((arr_23 [i_21] [i_21] [i_18] [i_0] [i_0]) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65531)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 0; i_22 < 20; i_22 += 2) 
                    {
                        var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((+((-(((/* implicit */int) var_7)))))) : ((~(((/* implicit */int) (unsigned short)52556))))));
                        var_54 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))))));
                        var_55 = ((/* implicit */int) ((arr_40 [i_0] [i_18]) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        arr_70 [i_18] [i_22] = ((/* implicit */int) var_7);
                    }
                    var_56 = ((/* implicit */unsigned char) var_0);
                    arr_71 [i_0 - 1] [3U] [i_18] [i_21] = var_1;
                }
            }
            var_57 = ((/* implicit */unsigned short) (+(((18446744073709551613ULL) << (((-7) + (65)))))));
            var_58 = ((/* implicit */unsigned short) var_6);
        }
        /* LoopSeq 2 */
        for (unsigned short i_23 = 1; i_23 < 17; i_23 += 1) 
        {
            var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) var_5))));
            var_60 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_23]))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [(signed char)16] [i_23] [i_23 - 1] [17]))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_45 [i_0] [i_23] [i_23])))))));
        }
        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_25 = 0; i_25 < 20; i_25 += 2) 
            {
                arr_79 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((arr_73 [i_25] [(signed char)10] [i_25]) < (((/* implicit */int) arr_27 [i_25])))))));
                var_61 = ((/* implicit */short) var_7);
                var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) var_8))));
                /* LoopSeq 3 */
                for (unsigned char i_26 = 4; i_26 < 18; i_26 += 4) /* same iter space */
                {
                    var_63 += ((/* implicit */short) arr_8 [i_0] [i_0] [i_26 - 4]);
                    var_64 = ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)));
                }
                for (unsigned char i_27 = 4; i_27 < 18; i_27 += 4) /* same iter space */
                {
                    arr_84 [i_0] [i_0] = ((/* implicit */int) var_8);
                    var_65 = ((/* implicit */unsigned char) max((var_65), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_24] [i_24])) < (((/* implicit */int) var_2))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_0)))))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (var_5)))))))))));
                }
                /* vectorizable */
                for (unsigned char i_28 = 4; i_28 < 18; i_28 += 4) /* same iter space */
                {
                    arr_87 [i_28 - 4] [i_28 + 1] [i_25] [(unsigned char)8] [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_24])) << (((((((/* implicit */_Bool) (unsigned short)32760)) ? (((/* implicit */unsigned int) 2147483634)) : (2493615079U))) - (2147483627U)))));
                    var_66 = ((/* implicit */unsigned int) arr_45 [i_0 - 1] [i_25] [i_28 + 2]);
                    arr_88 [(unsigned short)15] [i_24] [i_24] [i_28] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_0 [i_25])) ? (arr_12 [i_0 + 2] [i_0 + 2]) : (((/* implicit */int) var_7)))));
                }
                var_67 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_82 [i_0 + 4] [i_0 + 4] [i_25]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(signed char)12] [(signed char)12] [i_25]))) : (arr_17 [i_0 + 4] [i_0 + 4] [i_0 + 4]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) == (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            }
            /* vectorizable */
            for (int i_29 = 4; i_29 < 16; i_29 += 4) 
            {
                var_68 = ((/* implicit */signed char) max((var_68), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-11738))))) ? (((((/* implicit */_Bool) -2147483634)) ? (8928087262206147795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32753))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                var_69 = var_1;
                /* LoopSeq 2 */
                for (long long int i_30 = 0; i_30 < 20; i_30 += 4) 
                {
                    var_70 = ((/* implicit */int) max((var_70), (((((/* implicit */_Bool) arr_64 [i_0] [i_0] [i_29 - 2] [i_0])) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                    var_71 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_93 [(signed char)10] [(unsigned char)15] [(signed char)10]))))) >= (((((/* implicit */int) arr_9 [i_0] [i_0 + 4] [i_0])) >> (((((/* implicit */int) var_2)) + (40)))))));
                    var_72 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_6))));
                }
                for (unsigned short i_31 = 1; i_31 < 16; i_31 += 4) 
                {
                    var_73 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) var_5))));
                    var_74 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                }
                arr_98 [i_0] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) var_7);
            }
            var_75 = ((/* implicit */unsigned int) min((var_75), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) / (((/* implicit */int) var_9)))))))));
        }
    }
    for (unsigned char i_32 = 0; i_32 < 20; i_32 += 2) 
    {
        arr_101 [i_32] [i_32] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
        var_76 += ((/* implicit */int) arr_44 [i_32] [14ULL] [14ULL]);
    }
}
