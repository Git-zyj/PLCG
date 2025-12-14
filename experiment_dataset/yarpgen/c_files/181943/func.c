/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181943
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
    var_20 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_19)) ? (522227702646299093ULL) : (((/* implicit */unsigned long long int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1294879229)) ? (15933680134888858879ULL) : (((/* implicit */unsigned long long int) 1294879236))))) ? (((/* implicit */int) ((unsigned short) (signed char)-111))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((var_5) ? (-763712286) : (-1294879229))) : (((((/* implicit */_Bool) 763712285)) ? (((/* implicit */int) (_Bool)1)) : (-672757668)))))) ? (var_8) : (((/* implicit */int) (unsigned char)154))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [(unsigned char)14] [(unsigned char)14] = ((/* implicit */unsigned int) -1294879228);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((int) ((unsigned long long int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) 1052188757)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] = arr_0 [i_0] [i_2];
                    arr_9 [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [(unsigned short)9] [i_0] [i_0]);
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */int) 2417286795U);
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6243609641576351079ULL)) ? (-1552787745) : (((/* implicit */int) (unsigned short)37734))));
    }
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_7))));
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_24 = (unsigned char)255;
                    arr_23 [i_6] [(unsigned short)5] [i_6] = ((/* implicit */long long int) 1084277452U);
                    arr_24 [(short)1] [i_6] = ((/* implicit */long long int) arr_16 [i_4 + 2]);
                }
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-21455)) ? (((((/* implicit */_Bool) arr_21 [i_4 + 2] [i_4 - 2] [i_4 + 2])) ? (4294967295ULL) : (((/* implicit */unsigned long long int) 9U)))) : (((/* implicit */unsigned long long int) arr_27 [10] [10] [i_7] [i_7]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        arr_31 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_4 + 1] [i_5] [i_7] [i_8 - 1])) ? (arr_27 [i_4 + 1] [i_5] [i_7] [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_4] [i_8] [i_7] [i_8])))));
                        arr_32 [i_4] [i_5] [i_7] [i_7] [i_8 - 1] = ((/* implicit */unsigned int) arr_17 [i_4] [i_5]);
                        arr_33 [i_7] [i_5] = ((/* implicit */int) (short)30453);
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1294879236)) ? (((/* implicit */int) (_Bool)1)) : (((int) (unsigned short)54086))));
                        var_27 ^= ((/* implicit */unsigned short) arr_27 [i_8 + 1] [i_5] [i_7] [(unsigned short)11]);
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        arr_36 [i_7] [i_7] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_4 + 1] [i_4 - 1] [14LL])) ? (((/* implicit */long long int) 672757673)) : (((((/* implicit */_Bool) 567300646)) ? (((/* implicit */long long int) 672757680)) : (7713247056052350505LL)))));
                        var_28 = ((signed char) arr_25 [i_4] [i_5] [(unsigned short)0] [i_9]);
                        var_29 = ((unsigned long long int) 3537638299623994107ULL);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 2) 
                        {
                            var_30 += ((/* implicit */short) arr_26 [i_4] [i_4] [i_7]);
                            var_31 = ((/* implicit */int) 1073725440ULL);
                            arr_40 [i_7] [i_5] [i_7] [i_9] [i_4 + 3] [i_7] = ((/* implicit */unsigned long long int) -672757666);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744069414584321ULL)) ? (-887482431466381705LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54086)))));
                        }
                        for (unsigned char i_11 = 2; i_11 < 10; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */long long int) ((int) 1052188766));
                            arr_44 [i_4] [i_5] [i_7] [i_9] [i_9] [i_7] [i_11] = ((/* implicit */unsigned long long int) arr_34 [i_7] [i_11 - 2] [i_11 - 1] [i_11 + 2]);
                            var_34 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    }
                    var_35 = ((/* implicit */unsigned long long int) arr_18 [i_4 + 3] [i_4] [i_4]);
                    arr_45 [i_7] [i_5] [i_7] = ((/* implicit */unsigned long long int) -1052188781);
                }
                for (long long int i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                {
                    var_36 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_34 [i_4] [i_4 + 2] [i_5] [i_12]) ? (((((/* implicit */_Bool) -484138469)) ? (7157097004193276485LL) : (((/* implicit */long long int) -672757666)))) : (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (arr_43 [i_4] [i_5] [i_12] [i_12] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((unsigned long long int) (signed char)122)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 484138469)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_42 [(unsigned short)5] [i_4] [i_4] [i_4 + 3] [i_4])))))));
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1084277442U)) ? (((/* implicit */int) (signed char)7)) : (arr_28 [i_4 - 1] [i_4])))) ? (((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (signed char)53)) : (arr_28 [i_4 + 1] [i_4]))) : (((((/* implicit */_Bool) -1835028594386919177LL)) ? (arr_28 [i_4 + 2] [i_4]) : (arr_28 [i_4 + 3] [i_4])))));
                    /* LoopSeq 3 */
                    for (long long int i_13 = 1; i_13 < 10; i_13 += 4) 
                    {
                        arr_52 [i_13] [i_12] [i_13] [i_4 - 1] [i_4] = ((/* implicit */unsigned long long int) arr_42 [i_4 - 2] [i_5] [8U] [(signed char)3] [i_13 + 1]);
                        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30752))) : (-2894232048271285080LL)))) ? (((((/* implicit */_Bool) arr_26 [i_4 - 1] [i_5] [i_13])) ? (((arr_15 [i_13] [i_13 + 1]) ? (arr_35 [i_4] [(_Bool)1] [8ULL] [i_13]) : (((/* implicit */unsigned long long int) -672757668)))) : (15524682619866408421ULL))) : (((/* implicit */unsigned long long int) -1025426973)));
                        var_39 = ((((/* implicit */_Bool) 4ULL)) ? (((((/* implicit */_Bool) (unsigned char)210)) ? (((((/* implicit */_Bool) arr_42 [i_5] [i_5] [4] [(unsigned short)3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) : (15524682619866408421ULL))) : (((/* implicit */unsigned long long int) ((long long int) 9185866298810520470ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 1; i_14 < 11; i_14 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned char) 4294967279ULL);
                        var_41 = ((/* implicit */long long int) max((var_41), (((((/* implicit */_Bool) (signed char)2)) ? (-5194523250819049723LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42)))))));
                        arr_56 [i_14] [i_12] = ((((/* implicit */_Bool) arr_3 [i_4 + 2] [i_14 + 1])) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 1323523028)));
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            arr_59 [i_4] [i_14] [i_12] [i_14] [i_15] = ((/* implicit */long long int) arr_28 [i_4] [i_14]);
                            arr_60 [i_14] [i_5] = ((/* implicit */unsigned short) arr_55 [0LL] [i_5] [i_12] [i_15]);
                            arr_61 [i_4] [i_5] [i_12] [(short)2] [i_14 + 1] [i_14] = ((/* implicit */unsigned char) arr_41 [i_4] [i_14] [7LL] [i_14] [(unsigned char)9]);
                            arr_62 [1ULL] [i_5] [i_5] [i_5] [0] [i_14] = ((/* implicit */long long int) arr_21 [i_4 - 1] [i_5] [i_14 + 1]);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        arr_66 [i_16] [i_12] [i_5] [i_4 + 2] = ((/* implicit */unsigned int) 11LL);
                        arr_67 [i_4] [i_5] [i_12] [i_16] [i_12] [i_4] = 0ULL;
                    }
                    arr_68 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3065127986642968003LL)) ? (((((/* implicit */_Bool) 2167475453136683005ULL)) ? (((/* implicit */long long int) 484138469)) : (-7997865879738856326LL))) : (((/* implicit */long long int) -13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65080)))) : (((((/* implicit */_Bool) (unsigned short)60152)) ? (arr_63 [i_4] [i_4 - 2]) : (arr_63 [i_4] [i_4 - 1]))));
                }
            }
        } 
    } 
}
