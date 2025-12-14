/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167004
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
    var_13 = ((((/* implicit */_Bool) ((max((((/* implicit */int) var_10)), (var_8))) / (((/* implicit */int) (unsigned char)243))))) ? (18446744073709551606ULL) : (min((((/* implicit */unsigned long long int) var_1)), (var_3))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned int) 18446744073709551606ULL);
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */unsigned long long int) ((unsigned int) 1610612736))) : (arr_0 [15U]))))));
        var_15 &= ((/* implicit */unsigned char) arr_1 [(_Bool)1]);
        arr_3 [i_0] = ((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) 15777333458081185035ULL);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_8)) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2268543170U)))))));
        var_17 -= min((arr_1 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_6 [(short)10]), (arr_6 [(unsigned short)6])))) >= (arr_5 [(_Bool)1] [(unsigned char)2])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            arr_10 [2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((2026424113U), (var_2))) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) -1610612750)), (arr_8 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) ((signed char) arr_9 [(unsigned short)14] [(unsigned short)14] [i_2 - 1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_1 [i_1 - 1])))));
            var_18 = ((/* implicit */unsigned char) ((unsigned int) ((18446744073709551601ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                var_19 += ((max((((((/* implicit */_Bool) arr_5 [i_2 + 1] [(unsigned short)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))) : (arr_11 [(unsigned short)12]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [(unsigned char)15])) ? (((/* implicit */int) arr_9 [2U] [2U] [2U])) : (((/* implicit */int) var_5))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7))))));
                arr_13 [3U] [i_1] [i_3 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -688917136)) : ((~(((((/* implicit */_Bool) 1022506001)) ? (462195655U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14809)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) var_4))))));
                    arr_16 [i_1] [i_2 - 1] [i_2 - 1] [i_2] [(signed char)0] [i_1] = ((/* implicit */signed char) (unsigned char)11);
                    arr_17 [i_1] [i_1] [i_2 + 1] [11U] = ((/* implicit */unsigned char) (-(((var_2) ^ (arr_8 [13LL] [13LL] [13LL])))));
                }
                var_21 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), (var_10)))) ? (var_1) : (((/* implicit */int) arr_14 [i_3 + 2] [i_2 - 1] [i_1]))))));
            }
            for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
            {
                var_22 = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_2] [7ULL]);
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            arr_26 [(signed char)12] [(signed char)6] [(signed char)6] [i_1] [(signed char)12] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)15))) ? (min((((/* implicit */unsigned long long int) var_7)), (var_3))) : (min((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [0ULL] [i_2])))));
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)13398)), (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) ((unsigned char) var_3)))))));
                        }
                    } 
                } 
                arr_28 [i_1] = ((/* implicit */unsigned char) (+(arr_8 [i_2] [i_2] [i_2 - 1])));
                arr_29 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)14818)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13411))) : (2193500560U))), (arr_8 [(unsigned short)1] [(unsigned short)5] [i_1])));
            }
        }
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        arr_32 [0U] |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [14ULL]))) == (min((((/* implicit */unsigned long long int) (signed char)-32)), (12567644564589513238ULL))))))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((arr_12 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 4063232)), (4294967295U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_15 [i_8] [i_8] [i_11 - 1] [i_8]), (arr_15 [i_8] [i_8] [i_11 - 2] [i_8])))))));
                        arr_39 [i_9] = ((/* implicit */int) min((809225246U), (min((((/* implicit */unsigned int) (_Bool)1)), (arr_23 [i_11] [10ULL] [(signed char)7] [i_11 + 1] [i_11 + 1])))));
                        arr_40 [(signed char)6] [i_8] [(signed char)6] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_8] [i_9])) && (((/* implicit */_Bool) arr_12 [i_8] [i_8] [17ULL] [i_8]))));
                        var_24 |= ((/* implicit */unsigned long long int) ((((min((var_2), (((/* implicit */unsigned int) var_8)))) << (((min((((/* implicit */unsigned int) (unsigned short)7521)), (2888550597U))) - (7519U))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_11 + 1])) < ((+(var_8)))))))));
                    }
                } 
            } 
        } 
        arr_41 [i_8] [(unsigned short)12] = ((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned long long int) var_5))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        arr_44 [i_12] [8U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_43 [i_12]))));
        arr_45 [i_12] = ((/* implicit */unsigned int) ((unsigned short) 1131646811U));
    }
    var_25 += ((/* implicit */signed char) ((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
}
