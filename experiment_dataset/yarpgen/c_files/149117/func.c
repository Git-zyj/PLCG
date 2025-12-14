/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149117
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_16 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned int) (+(2147483647)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0] [i_0]))))) << (((/* implicit */int) ((unsigned short) (_Bool)1)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_17 = ((((/* implicit */_Bool) max(((-(-2147483647))), ((~(arr_0 [i_0])))))) ? (2147483646) : (((/* implicit */int) var_12)));
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) (+(((/* implicit */int) var_1))))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_19 = -2147483647;
                            arr_14 [i_3] [i_3] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)248)) ? (1ULL) : (8392345866058634800ULL)));
                            var_20 = ((/* implicit */unsigned char) ((-1583682078772260303LL) - (((/* implicit */long long int) ((2147483645) - (2147483647))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((-1583682078772260319LL), (((/* implicit */long long int) 2147483640))))) ? (((/* implicit */unsigned int) max(((-(2147483644))), (min((((/* implicit */int) (unsigned char)116)), (2147483645)))))) : ((+(((((/* implicit */_Bool) 6442450944LL)) ? (((/* implicit */unsigned int) -2147483639)) : (var_2)))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_27 [(unsigned short)2] [(unsigned short)2] [i_5] [i_5] [i_5] [i_5] = (+(arr_20 [i_0]));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */int) arr_23 [i_0 - 2] [i_0] [10] [10] [i_0 - 2])), (min((var_3), (arr_10 [i_0] [i_5]))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                arr_30 [i_5] [3ULL] = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) arr_16 [i_0] [i_0] [i_0 - 1])), (arr_25 [i_0] [i_0 - 2] [(unsigned char)4] [12])))), ((-(((/* implicit */int) arr_16 [i_0 - 2] [i_0 - 2] [i_0 + 1]))))));
                var_23 = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_2 [i_0])) : (2147483645))))), (2147483645)));
                /* LoopSeq 3 */
                for (int i_9 = 2; i_9 < 11; i_9 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) ((-2147483647) ^ (((/* implicit */int) arr_12 [i_9] [i_9] [i_5] [i_9 - 2]))))), (min((((/* implicit */unsigned long long int) -1583682078772260285LL)), (arr_19 [i_5] [i_5] [i_5]))))));
                    arr_33 [i_0] [11] [i_5] [i_8] [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) -2147483645));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) var_6);
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_11])) << (((((((/* implicit */_Bool) arr_19 [i_5] [i_10] [i_11])) ? ((+(arr_1 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_11))))))) - (1350428202U)))));
                        var_27 = ((/* implicit */unsigned char) (signed char)127);
                        arr_38 [i_5] [i_5] [i_8] [i_10] [i_8] = ((/* implicit */_Bool) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])) : (arr_17 [i_0 - 2])))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_10]))) : (1583682078772260263LL))), (((/* implicit */long long int) (_Bool)0))))));
                    }
                    for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (arr_15 [i_0]) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_8])), (1583682078772260255LL)))) ? (max((((/* implicit */long long int) (signed char)41)), (1583682078772260255LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_25 [i_0] [i_0] [i_8] [i_12]))))))));
                        arr_42 [i_5] [i_5] [i_5] [i_5] [(_Bool)0] [i_5] [i_5] = ((/* implicit */unsigned char) arr_34 [i_0] [i_8]);
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)127)) ? (659922112U) : (168604782U))), (((/* implicit */unsigned int) min(((unsigned short)64015), (((/* implicit */unsigned short) (signed char)104)))))))) || (((/* implicit */_Bool) max((var_4), (((/* implicit */short) (unsigned char)0))))))))));
                        var_30 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                    }
                    var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_0 + 1]))) ? (max((((/* implicit */unsigned int) arr_4 [i_0] [i_0 - 2])), (425360238U))) : (((/* implicit */unsigned int) max((-1552630391), (((/* implicit */int) arr_4 [i_0] [i_0 - 1])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_46 [i_0] [i_8] [i_8] [i_5] = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0 - 1] [i_5] [i_13] [i_13])))));
                        arr_47 [i_0] [i_5] [i_5] [i_8] [i_10] [i_10] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_13])) ? (((((/* implicit */_Bool) arr_37 [i_5] [i_0 + 1] [i_0] [i_0 + 1] [i_8])) ? (arr_37 [i_5] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_5]) : (arr_37 [i_5] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5])))));
                    }
                    arr_48 [(_Bool)1] [i_0] [i_0 - 1] [i_5] [(unsigned char)9] [i_10] = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) arr_11 [i_10] [9ULL] [(signed char)12] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_35 [i_0] [i_0] [i_8] [i_10]))), (((/* implicit */unsigned int) arr_17 [i_0 + 1]))))));
                }
                for (int i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    var_32 = ((/* implicit */unsigned long long int) ((unsigned int) 2147483645));
                    arr_53 [i_5] = ((/* implicit */signed char) (~((+(((/* implicit */int) (_Bool)1))))));
                    arr_54 [i_5] [i_14] = ((signed char) ((_Bool) arr_31 [i_0 - 2] [i_5] [i_5] [i_14] [i_8] [i_14]));
                    arr_55 [i_0 + 1] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-5)) | (((/* implicit */int) (_Bool)0))));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) -1552630391)) ? (((/* implicit */long long int) 4294967291U)) : (1048574LL)));
                }
                arr_56 [(_Bool)1] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((short) ((-1583682078772260255LL) & (((/* implicit */long long int) arr_10 [i_5] [i_0 - 2])))));
            }
            for (unsigned int i_15 = 2; i_15 < 12; i_15 += 4) 
            {
                arr_59 [i_0 - 2] [i_5] [i_5] [i_15] = ((unsigned char) arr_4 [i_0] [i_0]);
                arr_60 [(_Bool)1] [i_5] [i_15] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(unsigned char)4] [(unsigned char)4] [i_5] [i_5] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_5] [(_Bool)1] [i_15] [i_5]))) : (-1583682078772260256LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (signed char)108)))))) : (max((1048573LL), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_5] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_36 [i_0] [(unsigned char)6] [i_15]))))) ? (((((/* implicit */_Bool) 3317602620U)) ? (4294967295U) : (((/* implicit */unsigned int) arr_58 [i_0 + 1] [i_5] [i_5])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)162)))))))));
            }
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((1397981713) - (((/* implicit */int) arr_41 [i_5] [(unsigned char)11] [i_5] [i_0 - 2] [i_0]))))))) ? ((-((~(var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
        }
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 12; i_16 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */short) (-((+(((/* implicit */int) (short)-13))))));
        arr_64 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_16] [i_16])) || (((/* implicit */_Bool) var_0))))) : (arr_0 [i_16])));
    }
    var_36 &= ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    for (int i_17 = 2; i_17 < 10; i_17 += 3) 
    {
        arr_67 [(unsigned char)3] = ((/* implicit */int) var_14);
        /* LoopSeq 3 */
        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_17 - 2])))))));
                arr_73 [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_1 [i_17 + 2] [i_17 + 1]), (arr_1 [i_17 + 1] [i_17 + 1]))))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_38 = ((/* implicit */int) max((var_38), ((-(var_9)))));
                arr_77 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) arr_11 [5U] [i_18] [4LL] [(unsigned char)12]);
            }
            for (unsigned short i_21 = 1; i_21 < 9; i_21 += 4) 
            {
                var_39 = (unsigned char)210;
                arr_81 [i_17] [i_17] [i_17] [i_21] = ((/* implicit */short) arr_21 [i_18] [i_18] [i_21]);
                arr_82 [i_17 - 2] [i_17 - 2] [i_17] = ((/* implicit */unsigned char) ((((_Bool) var_3)) ? (((unsigned long long int) arr_80 [i_21 + 2] [i_17] [i_17 - 2] [i_17])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))));
            }
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        arr_87 [i_23] [i_22] = ((/* implicit */_Bool) var_14);
                        var_40 = ((/* implicit */unsigned int) -43221581);
                        var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */long long int) (-(-1552630391)))) : (arr_45 [i_22] [i_17] [i_18] [i_18] [i_18] [i_22] [i_23]))))));
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((int) max((arr_37 [i_18] [i_17 + 1] [i_17 + 2] [i_17 + 1] [i_17]), (arr_37 [i_18] [i_17 + 1] [i_17 - 2] [i_17 + 1] [i_17])))))));
        }
        for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 4) /* same iter space */
        {
            arr_91 [(unsigned short)3] [i_24] = ((/* implicit */_Bool) arr_11 [i_17 - 2] [i_17] [i_17] [i_17 - 2]);
            var_43 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (min((((((/* implicit */_Bool) arr_71 [i_17] [i_24] [i_24] [i_24])) ? (17836999147873352605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) arr_36 [i_24] [i_24] [(unsigned char)6])))) : ((+(min((arr_65 [i_24]), (((/* implicit */unsigned long long int) arr_24 [i_24]))))))));
            /* LoopNest 3 */
            for (int i_25 = 2; i_25 < 8; i_25 += 2) 
            {
                for (int i_26 = 0; i_26 < 12; i_26 += 3) 
                {
                    for (int i_27 = 0; i_27 < 12; i_27 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) min((((/* implicit */int) (short)26565)), (-439148725)));
                            arr_99 [i_24] [i_24] [i_25] [i_25] [i_26] [i_24] [i_24] = ((/* implicit */_Bool) (+(((long long int) max((arr_11 [i_25] [i_24] [i_24] [i_26]), (((/* implicit */short) var_11)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 4) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) ((signed char) (unsigned char)171)))))));
            /* LoopSeq 1 */
            for (unsigned int i_29 = 2; i_29 < 8; i_29 += 3) 
            {
                var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) -1194877863)) == (arr_106 [i_17] [i_17] [2ULL] [i_29]))))))) ? (((/* implicit */unsigned long long int) arr_97 [i_17] [(unsigned char)2] [(unsigned char)2] [i_17 - 1] [i_28])) : (arr_19 [i_28] [(unsigned short)0] [i_29]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_30 = 2; i_30 < 10; i_30 += 4) 
                {
                    for (long long int i_31 = 3; i_31 < 9; i_31 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)178))))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), ((+(arr_106 [i_28] [i_28] [8ULL] [i_31]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_17 - 1] [i_17 - 1] [i_29]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_13)))) : (((/* implicit */int) (unsigned char)202)))))));
                            arr_111 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_17 - 2])) ? (((/* implicit */int) arr_61 [i_17 - 2])) : (((/* implicit */int) arr_61 [i_17 - 2]))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)114))))))));
                        }
                    } 
                } 
                var_48 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_28] [i_29 - 2])) ? (arr_21 [i_28] [i_29 - 2] [i_29 - 2]) : (var_3)));
            }
            var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) (short)1020))));
            /* LoopNest 2 */
            for (int i_32 = 1; i_32 < 9; i_32 += 2) 
            {
                for (unsigned long long int i_33 = 0; i_33 < 12; i_33 += 1) 
                {
                    {
                        var_50 *= ((/* implicit */unsigned int) var_6);
                        var_51 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((-1194877865) + (1194877883))) - (18))))), (((/* implicit */int) min(((signed char)127), (var_12))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) (~(1108996703U)))) ? (min((arr_117 [i_28]), (((/* implicit */int) arr_104 [i_28] [i_28] [i_28])))) : (((/* implicit */int) ((short) arr_40 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33] [i_33])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_34 = 0; i_34 < 12; i_34 += 4) 
                        {
                            arr_120 [i_17] [i_17] [i_32] [4U] [i_32] = 43221591;
                            arr_121 [11] [i_28] [7ULL] [i_33] [i_32] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_13 [i_34] [i_33] [i_32] [i_28] [i_17] [i_17]))))))) ? ((+((~(((/* implicit */int) (unsigned char)246)))))) : (((/* implicit */int) (!(((((/* implicit */int) arr_96 [i_33] [i_33] [4] [i_33])) >= (((/* implicit */int) var_7))))))));
                            arr_122 [i_32] [i_34] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [i_28] [i_34])))))));
                        }
                        for (signed char i_35 = 0; i_35 < 12; i_35 += 2) 
                        {
                            var_52 = ((/* implicit */unsigned char) ((_Bool) arr_116 [i_17] [i_17 + 2] [(unsigned short)9] [i_32 + 2] [i_17 - 2] [i_32]));
                            arr_125 [i_17] [i_28] [i_35] [0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)62)) ? (-1880909826) : (((/* implicit */int) (_Bool)1))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_36 = 2; i_36 < 10; i_36 += 4) 
                        {
                            var_53 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_33] [i_33]))) | (2210415778U)));
                            var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) max((var_3), (-43221586))))));
                        }
                    }
                } 
            } 
        }
    }
    for (short i_37 = 1; i_37 < 20; i_37 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            for (long long int i_39 = 0; i_39 < 21; i_39 += 1) 
            {
                for (unsigned int i_40 = 0; i_40 < 21; i_40 += 1) 
                {
                    {
                        arr_141 [i_38] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))))), (min((((/* implicit */unsigned long long int) ((unsigned short) var_6))), (min((65535ULL), (((/* implicit */unsigned long long int) 1968524681U))))))));
                        arr_142 [i_37] [i_38] [i_38] [i_40] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (short)25811)))))) ? (((min((-43221581), (((/* implicit */int) var_1)))) + (((int) arr_137 [i_38] [i_38])))) : ((-((-(((/* implicit */int) (unsigned char)210))))))));
                        var_55 = -1194877877;
                    }
                } 
            } 
        } 
        var_56 = ((/* implicit */unsigned char) ((signed char) (((_Bool)1) && (((/* implicit */_Bool) arr_139 [(unsigned char)2] [8U] [i_37 - 1] [16ULL] [i_37 + 1])))));
    }
    /* vectorizable */
    for (short i_41 = 1; i_41 < 20; i_41 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_42 = 1; i_42 < 18; i_42 += 4) 
        {
            for (signed char i_43 = 0; i_43 < 21; i_43 += 1) 
            {
                {
                    var_57 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)42))));
                    var_58 = ((/* implicit */long long int) ((arr_138 [i_41] [i_42 + 1] [i_43]) * (arr_138 [i_41 + 1] [i_42 + 3] [i_43])));
                    arr_150 [i_41 + 1] [(short)14] [i_43] [i_41] = ((/* implicit */short) (unsigned char)225);
                }
            } 
        } 
        var_59 = ((unsigned char) (unsigned short)8561);
        arr_151 [i_41] = ((_Bool) (+(arr_146 [i_41] [i_41])));
    }
}
