/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102698
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(var_2)))) * (min((min((((/* implicit */unsigned int) var_0)), (1659775860U))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19))) & (2635191456U)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) min((var_12), ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)19)) == (((/* implicit */int) (unsigned short)26)))))))));
            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (unsigned short)19))));
        }
        for (unsigned short i_2 = 4; i_2 < 9; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1659775860U)) ? (var_5) : (((/* implicit */int) (_Bool)0)))) << (((((/* implicit */int) ((-3142550381792032554LL) <= (((/* implicit */long long int) var_2))))) - (1))))))));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-754261519757520599LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2 - 4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_1 [5LL] [i_2 - 3]))));
        }
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 1659775863U))));
                        var_17 = ((int) var_3);
                        arr_17 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_0 + 1])) && (((/* implicit */_Bool) var_7))));
                    }
                } 
            } 
            var_18 = ((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1]);
            arr_18 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [9] [9] [i_0])) : (((/* implicit */int) (unsigned short)65526))))) ? (arr_12 [i_0 + 1]) : (((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0 + 1] [7LL] [i_0]))))));
        }
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_19 = (signed char)0;
                            var_20 = ((/* implicit */short) ((arr_7 [i_0 + 1] [i_0 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (unsigned short)50584))));
                        }
                    } 
                } 
                arr_28 [i_7] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0 + 1]))) <= (((((/* implicit */_Bool) arr_11 [i_7] [9U] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (17ULL))));
            }
            /* LoopSeq 2 */
            for (int i_10 = 1; i_10 < 9; i_10 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) var_3);
                var_23 = ((/* implicit */unsigned short) var_8);
                arr_31 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) (-(arr_2 [i_0 + 1] [i_0 + 1])));
            }
            for (short i_11 = 1; i_11 < 6; i_11 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_8))));
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (arr_27 [i_0] [i_0] [i_0 + 1] [i_0])));
                        var_26 = (+((+((-2147483647 - 1)))));
                        var_27 = ((/* implicit */int) 495564672238154784ULL);
                    }
                    var_28 = arr_27 [i_0] [i_6] [i_0] [i_12];
                }
                for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    arr_40 [i_0] = ((/* implicit */int) (unsigned char)0);
                    arr_41 [i_0] [i_6] [i_11] [i_0] = (~(((/* implicit */int) arr_16 [(unsigned short)7] [i_6] [i_11 + 1] [(signed char)7])));
                    arr_42 [i_0 + 1] [i_6] [i_6] [i_0] [i_11] [i_6] = ((((/* implicit */int) arr_34 [0LL] [(signed char)8] [i_0 + 1] [i_0])) + (((((/* implicit */int) var_3)) % (arr_2 [i_0] [i_0]))));
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_1))));
                }
                var_30 = ((/* implicit */_Bool) ((unsigned short) var_7));
            }
            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((unsigned long long int) ((arr_25 [(_Bool)1] [(short)6] [(unsigned short)9] [i_0 + 1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
            var_32 = ((/* implicit */unsigned char) (-(3447740658U)));
        }
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 8; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                for (long long int i_17 = 3; i_17 < 9; i_17 += 2) 
                {
                    {
                        var_33 = ((/* implicit */int) max((var_33), (arr_2 [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            arr_55 [i_18] [i_0] [i_0] [i_16] [i_15] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) var_2)))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((unsigned char) arr_29 [i_18] [i_18] [i_18] [i_18])))));
                            arr_56 [i_18] [i_15] [i_0] [i_15] [i_0] = ((/* implicit */long long int) arr_13 [i_0 + 1] [i_15 - 1] [i_0] [i_15 + 1] [i_15 + 2] [i_17 - 2]);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) 
    {
        var_35 = ((/* implicit */int) ((((((/* implicit */_Bool) 30ULL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65517))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33)))));
        /* LoopSeq 1 */
        for (unsigned short i_20 = 0; i_20 < 13; i_20 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_21 = 0; i_21 < 13; i_21 += 1) 
            {
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)62422)) <= (((/* implicit */int) arr_57 [i_19]))))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_58 [i_19] [i_21])) : (((/* implicit */int) (unsigned char)209)))))))));
                /* LoopSeq 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_37 = ((/* implicit */long long int) (+(((/* implicit */int) arr_65 [i_21] [i_20] [i_21] [i_22] [i_21] [i_21]))));
                    var_38 = ((/* implicit */unsigned int) ((arr_64 [i_21] [i_20] [i_22]) <= (arr_64 [i_21] [i_20] [i_20])));
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_24 = 0; i_24 < 13; i_24 += 4) 
                    {
                        var_39 = ((/* implicit */int) arr_69 [i_19] [i_19] [i_21] [i_23] [(unsigned char)8]);
                        var_40 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (18446744073709551598ULL))))));
                    }
                    for (int i_25 = 0; i_25 < 13; i_25 += 4) 
                    {
                        var_41 = ((/* implicit */_Bool) (+(var_6)));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_59 [i_20] [i_21]) : (arr_59 [i_19] [i_20])));
                    }
                    for (unsigned char i_26 = 0; i_26 < 13; i_26 += 1) 
                    {
                        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((unsigned int) arr_59 [i_19] [i_20])))));
                        arr_77 [i_21] [(unsigned short)8] [0ULL] [i_23] [0ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_75 [i_19] [i_19] [i_19] [i_19] [i_21] [i_23] [i_26]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_19] [i_19] [i_19]))) : (arr_63 [i_19] [i_21] [i_21])));
                    }
                    arr_78 [i_19] [i_21] = ((/* implicit */unsigned int) arr_75 [i_19] [i_19] [i_19] [9U] [i_21] [10LL] [(unsigned char)7]);
                }
                var_44 = ((/* implicit */int) ((unsigned int) var_1));
            }
            /* LoopNest 2 */
            for (unsigned int i_27 = 2; i_27 < 12; i_27 += 2) 
            {
                for (unsigned int i_28 = 0; i_28 < 13; i_28 += 1) 
                {
                    {
                        arr_84 [i_19] [i_19] [i_27] [i_27] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (17ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((arr_67 [i_19] [i_20] [i_20] [i_27 + 1] [(unsigned char)1]) * (arr_60 [i_19] [i_19])))));
                        /* LoopSeq 1 */
                        for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                        {
                            arr_87 [i_19] [i_20] [i_27] [i_28] [7U] [i_28] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (15520793022779988638ULL)));
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) var_3)) : (var_5))) : ((-(986237673)))));
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_20] [i_20] [i_27] [i_27] [i_28] [i_29 + 1])) && (((/* implicit */_Bool) arr_62 [i_27 + 1] [i_27 + 1] [i_29 + 1])))))));
                            var_47 = ((/* implicit */int) ((((arr_61 [i_19] [i_19] [i_19]) + (((/* implicit */unsigned long long int) arr_59 [(unsigned char)10] [i_20])))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)43129)) : (((/* implicit */int) (unsigned char)63)))))));
                            arr_88 [3LL] [3LL] [i_27] [i_28] [i_29] = ((/* implicit */unsigned char) -2147483646);
                        }
                        var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) -665208181515421974LL)) ? (arr_67 [i_19] [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_79 [i_19] [i_20] [i_27] [6])))))))));
                        var_49 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) var_4))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned char i_30 = 0; i_30 < 13; i_30 += 2) 
        {
            var_50 = ((/* implicit */int) ((((/* implicit */long long int) 182035806)) ^ (2371275613068800199LL)));
            var_51 = ((/* implicit */short) (-((+(arr_59 [i_19] [i_30])))));
            /* LoopSeq 1 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                arr_94 [i_19] [i_31] = ((/* implicit */unsigned int) 11204493725592290474ULL);
                /* LoopNest 2 */
                for (short i_32 = 1; i_32 < 12; i_32 += 2) 
                {
                    for (signed char i_33 = 2; i_33 < 12; i_33 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) ((unsigned int) arr_70 [0ULL] [i_33 + 1] [i_33] [i_32] [i_33] [i_32] [i_30])))));
                            var_53 = ((/* implicit */long long int) var_10);
                            var_54 = ((/* implicit */unsigned char) var_1);
                        }
                    } 
                } 
                arr_102 [i_31] [i_31] [i_19] [i_19] = ((unsigned short) (unsigned short)65523);
                /* LoopSeq 3 */
                for (unsigned short i_34 = 1; i_34 < 11; i_34 += 2) 
                {
                    var_55 = ((/* implicit */int) arr_83 [(unsigned char)1] [i_34] [i_31] [i_19] [i_19]);
                    var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) var_6))))))))));
                }
                for (unsigned long long int i_35 = 0; i_35 < 13; i_35 += 2) 
                {
                    var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_104 [i_19] [i_30] [i_30] [i_35])));
                    var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) var_0))));
                }
                for (long long int i_36 = 0; i_36 < 13; i_36 += 4) 
                {
                    var_59 = ((/* implicit */unsigned long long int) arr_99 [5LL] [i_30] [5LL] [i_30] [i_30] [i_30] [i_30]);
                    /* LoopSeq 3 */
                    for (unsigned short i_37 = 2; i_37 < 10; i_37 += 2) 
                    {
                        var_60 = ((/* implicit */unsigned long long int) min((var_60), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_103 [i_31] [i_30] [i_19])) != (((/* implicit */int) var_1)))) || (((/* implicit */_Bool) var_3)))))));
                        arr_112 [i_36] [i_36] [i_31] [i_19] [i_19] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_73 [i_19] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_66 [4LL] [i_30] [i_31])) : (((/* implicit */int) arr_62 [i_19] [i_19] [i_31]))))));
                        var_61 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_66 [i_30] [i_36] [i_36])))) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)255))))));
                    }
                    for (unsigned short i_38 = 0; i_38 < 13; i_38 += 2) 
                    {
                        arr_115 [i_19] [6U] [10] [i_36] [i_38] = ((/* implicit */unsigned int) arr_114 [(unsigned short)3] [(unsigned short)3] [i_30] [i_31] [i_36] [8ULL]);
                        arr_116 [7LL] [i_30] [i_31] [7LL] [i_38] [7LL] [i_36] = ((/* implicit */unsigned short) var_10);
                        var_62 = ((/* implicit */_Bool) ((short) (-(332304318))));
                    }
                    for (unsigned char i_39 = 0; i_39 < 13; i_39 += 4) 
                    {
                        var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) var_1))));
                        arr_120 [i_30] [i_39] = ((/* implicit */short) (+(((unsigned long long int) var_2))));
                    }
                }
            }
        }
        arr_121 [i_19] = ((/* implicit */unsigned char) var_1);
        var_64 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3280226644U)) * (var_7)));
    }
}
