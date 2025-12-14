/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153316
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
    var_18 = ((/* implicit */_Bool) 1073479680);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [(_Bool)1]);
                var_20 += ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (112U))) + (max((var_14), (((/* implicit */unsigned int) arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) arr_3 [i_2] [i_2] [i_2]);
        arr_7 [i_2] = ((/* implicit */unsigned short) (-(-1LL)));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(3717977263U))))));
        var_23 *= ((/* implicit */unsigned int) ((min((-1073479679), (((/* implicit */int) (unsigned short)15)))) == (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65517)) ? (-1073479680) : (arr_3 [17U] [i_2] [i_2]))) >= ((~(((/* implicit */int) var_13)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) (unsigned short)37505)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U));
            /* LoopSeq 3 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16)) && (((/* implicit */_Bool) -1073479680)))))));
                var_25 += ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171)))))), (((/* implicit */long long int) ((unsigned int) arr_9 [i_4] [i_4])))));
                var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)224)) || (((/* implicit */_Bool) ((long long int) (unsigned short)65508)))));
                arr_14 [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((4036607348U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))))))))) & (max(((+(var_15))), (((/* implicit */unsigned int) var_12)))));
            }
            for (short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 3; i_6 < 8; i_6 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((((((/* implicit */_Bool) 9223372036854775792LL)) ? (6166231637917031164LL) : (-9223372036854775783LL))) >= (((/* implicit */long long int) (~(min((-1073479681), (((/* implicit */int) arr_4 [i_3] [i_6 + 2])))))))))));
                    var_28 = ((/* implicit */int) ((unsigned int) ((unsigned char) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11)))))));
                    arr_22 [i_2] = ((/* implicit */unsigned short) max(((((_Bool)1) ? (((long long int) arr_4 [i_2] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))), (((/* implicit */long long int) ((arr_18 [(_Bool)1] [(_Bool)1] [i_3] [i_2] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))))))));
                    var_29 = ((/* implicit */short) ((unsigned int) max((9534959576513442045ULL), (((/* implicit */unsigned long long int) arr_17 [i_2] [2ULL] [i_6 - 2] [i_6])))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 3; i_8 < 7; i_8 += 2) 
                    {
                        var_30 -= ((/* implicit */unsigned short) ((2) - (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (arr_27 [i_7] [i_5] [i_3] [i_2])))), ((unsigned short)17362))))));
                        var_31 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_8 + 2] [i_7 - 1] [i_2] [i_7 - 1])) ? (((/* implicit */int) arr_17 [i_2] [i_7 - 1] [i_7 - 1] [i_2])) : (((/* implicit */int) arr_17 [i_2] [i_7 - 1] [i_7 - 1] [i_2]))))), (max((arr_26 [i_2] [i_2] [i_7 - 1] [i_7 - 1] [i_2] [i_7 - 1]), (((/* implicit */long long int) arr_17 [i_2] [i_7 - 1] [i_7 - 1] [i_2]))))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_25 [i_3] [i_8]), ((unsigned char)130)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15))))) : ((-(2147483648U)))))) ? (((((/* implicit */_Bool) arr_0 [i_7 - 1])) ? (arr_8 [i_8 + 1] [i_8] [i_8 + 1]) : (arr_18 [i_2] [i_8] [i_8 + 3] [i_3] [i_2]))) : (1090065518U)));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((unsigned short) ((unsigned int) 4194048))))));
                    }
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        arr_31 [i_2] [i_2] [i_2] [i_5] [i_2] [i_7] [i_2] = ((/* implicit */unsigned long long int) var_11);
                        var_34 |= ((/* implicit */_Bool) (((+(1771146550))) << (max(((-(((/* implicit */int) (unsigned short)62777)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))) >= (8388607U))))))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 2) 
                    {
                        arr_36 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */short) min((max(((+(((/* implicit */int) (short)24139)))), (((/* implicit */int) arr_17 [i_2] [i_10 + 1] [i_10 - 1] [i_2])))), (((/* implicit */int) max(((unsigned short)32766), ((unsigned short)39842))))));
                        var_35 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)1))))))) > (((((/* implicit */_Bool) arr_23 [i_10 + 1] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) / (((/* implicit */int) var_5))))) : (667391060U)))));
                        arr_37 [(unsigned char)7] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) arr_27 [i_2] [i_2] [i_2] [i_2]);
                        var_36 = ((/* implicit */unsigned int) var_9);
                    }
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_32 [i_5] [i_5] [i_7] [i_7 - 1] [i_7 - 1]), (arr_32 [i_3] [i_7] [i_3] [i_7 - 1] [i_7 - 1])))))))));
                }
                arr_38 [i_5] [i_3] [i_2] [i_5] = ((/* implicit */unsigned short) var_11);
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 7; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        {
                            arr_44 [i_3] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [i_12] [i_12]))))), (min((8911784497196109571ULL), (((/* implicit */unsigned long long int) (unsigned char)32)))))), (((/* implicit */unsigned long long int) ((arr_8 [i_2] [i_3] [i_5]) * (((((/* implicit */_Bool) arr_43 [i_3] [i_3] [i_3] [i_3] [i_3] [4U] [i_3])) ? (var_15) : (arr_19 [i_2] [i_2] [i_12]))))))));
                            arr_45 [3LL] [i_2] [i_5] [i_5] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) min((min((arr_32 [i_2] [i_11 - 1] [i_5] [i_3] [i_2]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1073479680)) < (arr_18 [i_2] [i_3] [i_5] [i_2] [i_2])))))), (((/* implicit */unsigned char) arr_33 [i_3] [i_5] [i_5]))));
                            arr_46 [i_3] [i_11 + 2] [(short)2] [i_11] [i_12] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                            arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_32 [i_2] [i_3] [i_3] [(unsigned short)9] [i_3])) <= (((/* implicit */int) max(((unsigned short)16671), ((unsigned short)65520)))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_2] [i_3] [i_2])) * (((/* implicit */int) arr_12 [i_14] [i_13] [i_2] [i_2]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (arr_30 [(unsigned short)4] [i_3] [i_2])))));
                    var_39 = ((/* implicit */unsigned char) 2062709251U);
                    arr_53 [i_14] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])) - (((/* implicit */int) arr_15 [i_14] [i_13] [i_13]))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24605)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255)))))));
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_2] [i_15])) < ((-(((/* implicit */int) (_Bool)0))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    for (unsigned int i_17 = 1; i_17 < 6; i_17 += 2) 
                    {
                        {
                            arr_62 [i_17 + 3] [i_16] [i_2] [i_3] [i_2] = ((/* implicit */int) ((unsigned char) arr_18 [i_2] [i_17 + 3] [i_17 + 1] [i_17 + 1] [i_2]));
                            arr_63 [i_2] [i_3] [i_13] [i_2] [i_2] = ((/* implicit */unsigned short) var_17);
                            arr_64 [i_2] [i_2] [i_2] [i_16] [i_2] = ((long long int) ((unsigned int) (unsigned short)39859));
                            arr_65 [i_2] [i_3] [i_2] [i_13] [i_3] [i_16] [i_17] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
                            var_42 = ((/* implicit */unsigned int) ((unsigned char) 4609434218613702656ULL));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 1; i_19 < 8; i_19 += 2) 
                {
                    for (unsigned short i_20 = 2; i_20 < 7; i_20 += 1) 
                    {
                        {
                            arr_74 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(min((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_18])) && (((/* implicit */_Bool) var_4))))), ((~(var_2)))))));
                            var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 5378326871274212314LL)), (13837309855095848964ULL))))))))))));
                            var_44 = ((/* implicit */_Bool) (~(((arr_48 [i_19 - 1] [i_19 - 1] [i_20 - 2]) + (arr_48 [i_19 - 1] [i_3] [i_20 + 3])))));
                            var_45 = ((((/* implicit */_Bool) arr_48 [i_18] [i_3] [i_2])) ? (var_2) : (((/* implicit */int) (unsigned char)184)));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_21 = 1; i_21 < 21; i_21 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_22 = 3; i_22 < 22; i_22 += 3) /* same iter space */
        {
            arr_79 [i_21] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)216)))) & (((((/* implicit */_Bool) arr_0 [i_21 + 1])) ? (((((/* implicit */_Bool) arr_75 [i_21] [i_21])) ? (((/* implicit */int) arr_2 [i_21] [i_22])) : (((/* implicit */int) (unsigned short)38247)))) : (((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (unsigned short)2759)) : (((/* implicit */int) (_Bool)1))))))));
            var_46 = min((((arr_3 [i_21 - 1] [i_22 + 1] [i_21 + 2]) / (arr_3 [i_21] [i_22 - 2] [i_21 + 1]))), (max((arr_3 [i_21] [i_22 - 3] [i_21 + 2]), (((/* implicit */int) var_3)))));
        }
        for (unsigned int i_23 = 3; i_23 < 22; i_23 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_24 = 2; i_24 < 21; i_24 += 1) 
            {
                arr_87 [i_21] [i_23 + 1] [i_24] = (unsigned char)225;
                /* LoopNest 2 */
                for (unsigned char i_25 = 2; i_25 < 21; i_25 += 2) 
                {
                    for (long long int i_26 = 0; i_26 < 23; i_26 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned long long int) min((var_47), (((18147322431628872273ULL) << (((max((((/* implicit */unsigned long long int) (unsigned short)65517)), (4194343499266056801ULL))) - (4194343499266056779ULL)))))));
                            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65517), (((/* implicit */unsigned short) (short)-6636)))))) - (((((/* implicit */_Bool) (unsigned short)65512)) ? (1379648769041727517LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (2131902515719539055ULL))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
            }
            arr_94 [i_23] [i_23 - 2] [i_21] = ((/* implicit */unsigned char) ((arr_92 [i_21] [i_21] [i_21] [i_21 - 1] [i_23]) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-25566)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)32763)))))))));
            arr_95 [i_23 - 1] [i_21] = arr_93 [i_21] [11LL] [i_21] [i_21 + 1] [i_21];
        }
        for (unsigned int i_27 = 3; i_27 < 22; i_27 += 3) /* same iter space */
        {
            var_49 = ((/* implicit */unsigned short) (+(min((max((-7921257241064274824LL), (((/* implicit */long long int) (unsigned char)220)))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1))))))));
            /* LoopNest 2 */
            for (long long int i_28 = 0; i_28 < 23; i_28 += 2) 
            {
                for (unsigned int i_29 = 0; i_29 < 23; i_29 += 1) 
                {
                    {
                        arr_104 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) (unsigned short)24);
                        var_50 = ((/* implicit */unsigned char) (+(402073985U)));
                    }
                } 
            } 
        }
        arr_105 [i_21] [i_21] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_100 [i_21] [i_21 + 2]))))), (((unsigned long long int) arr_82 [i_21 - 1] [i_21 + 2] [i_21 + 1]))));
    }
}
