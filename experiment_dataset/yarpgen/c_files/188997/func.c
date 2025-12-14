/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188997
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) ((var_14) + (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
                            var_16 = ((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_0 + 2])) + (101))));
                            arr_14 [i_1] [i_3] [(short)13] [i_1] [i_1] = ((/* implicit */unsigned short) (signed char)-22);
                            arr_15 [i_0] [i_0] [(short)21] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-3630))) - (9208768902392294576LL)));
                        }
                        arr_16 [(short)12] [i_1] [i_2] [i_1] [i_2] = ((((/* implicit */long long int) -1822047371)) - (((((/* implicit */_Bool) -9208768902392294581LL)) ? (((/* implicit */long long int) var_12)) : (var_9))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_14))));
                        /* LoopSeq 4 */
                        for (int i_6 = 3; i_6 < 24; i_6 += 3) 
                        {
                            arr_22 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) -1822047381));
                            arr_23 [i_6] [i_6] [(unsigned short)18] [i_1] [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6943188990183133598LL)) ? (((/* implicit */long long int) var_0)) : (arr_18 [i_0 + 1])));
                            arr_24 [i_0] [i_1] [i_2] [7ULL] [i_6 - 1] = var_7;
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_28 [i_0] [i_7] [i_1] [i_1] [i_0] [i_2] [i_0 + 2] = ((/* implicit */int) (-(var_12)));
                            var_18 = ((((/* implicit */_Bool) (unsigned char)221)) ? (var_4) : (((/* implicit */int) var_3)));
                            arr_29 [i_7] [i_1 + 1] [10LL] [i_5] [i_7] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((int) arr_3 [i_1] [i_1]));
                            arr_30 [i_5] [21] [i_5] [(unsigned char)10] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9)));
                            var_19 = ((/* implicit */unsigned short) ((-1822047368) - (((/* implicit */int) arr_13 [i_0 + 2] [i_0 + 4] [i_0 + 2] [i_0] [i_0 + 3] [i_1 - 1] [i_1]))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 2) 
                        {
                            arr_33 [i_1] [i_1] [i_2] [i_5] [i_8] = ((((/* implicit */int) var_10)) + (((/* implicit */int) var_5)));
                            arr_34 [i_1] [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_2] [(signed char)20] [13ULL] = ((/* implicit */_Bool) ((arr_2 [i_1 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))));
                            var_20 = ((/* implicit */unsigned short) 2166055192U);
                            arr_35 [i_1] [i_1] [i_2] [i_5] [i_8] [i_8 + 2] [i_8] = ((2431570478782295487LL) >> (((((/* implicit */int) (short)26074)) - (26023))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            arr_40 [i_0] [i_1 + 1] [i_2] [i_1] [i_9] = ((/* implicit */unsigned short) var_8);
                            arr_41 [i_1] [i_5] [i_2] [i_1] [i_1] [i_1] = ((-1471391672) + (((/* implicit */int) (unsigned char)195)));
                            arr_42 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0 + 3] [i_1 + 1] [i_2]))));
                            var_21 = ((/* implicit */short) arr_3 [i_0] [i_1]);
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                    {
                        arr_45 [(signed char)5] [i_1] [i_2] [i_10] = ((/* implicit */short) ((((/* implicit */int) (short)29925)) >> (((/* implicit */int) (_Bool)1))));
                        arr_46 [i_0] [i_1] [i_0] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_8)) - (arr_3 [i_1 + 1] [i_1])));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)1)))))));
                        arr_47 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_10] = ((/* implicit */short) ((long long int) (unsigned char)103));
                        var_23 = ((/* implicit */unsigned short) arr_32 [i_0] [i_1] [i_2] [i_10] [i_10]);
                    }
                    var_24 = max((max((((/* implicit */unsigned long long int) (short)29925)), (544602824449797259ULL))), (((/* implicit */unsigned long long int) (_Bool)1)));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_3))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            arr_53 [i_1] [i_1 - 1] [i_12] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_8)));
                            var_26 &= ((/* implicit */signed char) ((-3663123336102858677LL) - (((/* implicit */long long int) 1694411974U))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) + (var_4)));
                            arr_54 [i_0] [i_1] [i_2] [i_2] [i_11] [i_1] [i_12] = ((((/* implicit */_Bool) arr_52 [i_1 + 1] [i_1 - 1] [20] [i_1 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_20 [i_0] [i_0 - 2] [i_0 + 2] [i_2] [i_11] [i_12])));
                        }
                        for (long long int i_13 = 1; i_13 < 24; i_13 += 2) 
                        {
                            var_28 = ((((/* implicit */int) var_3)) >> (((arr_2 [i_13]) - (12652003401602946131ULL))));
                            arr_57 [i_0] [i_1] [i_2] [i_11] [i_1] = ((/* implicit */unsigned long long int) -3663123336102858689LL);
                            var_29 = ((/* implicit */unsigned short) var_3);
                        }
                        var_30 = ((/* implicit */unsigned short) ((var_11) + (((/* implicit */int) var_10))));
                    }
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        var_31 = ((((/* implicit */_Bool) (short)29925)) ? (((((((/* implicit */_Bool) 726085378U)) ? (8098946243767626509ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))))) >> (((max((((/* implicit */unsigned long long int) (signed char)59)), (13063117353859941042ULL))) - (13063117353859940997ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33688))));
                        /* LoopSeq 2 */
                        for (long long int i_15 = 4; i_15 < 23; i_15 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) 7701621185427537540LL))));
                            arr_65 [i_0] [5LL] [i_1] [i_15 - 2] = ((/* implicit */unsigned int) (~(var_4)));
                            arr_66 [i_15 - 1] [i_1] [i_0] [i_2] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) max((max((var_11), (((((/* implicit */_Bool) -1822047393)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) (short)-29918))));
                            var_33 = ((/* implicit */signed char) var_10);
                        }
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 25; i_16 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_0 + 4] [i_1 - 1] [i_2] [i_0] [i_0 + 4])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29925)))));
                            var_35 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-29327)) + (2147483647))) >> (((arr_2 [i_0 + 3]) - (12652003401602946123ULL)))));
                        }
                        var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) + (2600555328U))))));
                        var_37 = ((/* implicit */_Bool) ((((-7701621185427537553LL) / (-7701621185427537549LL))) >> ((((~(max((((/* implicit */unsigned long long int) -8508787678179227692LL)), (4254469510323774854ULL))))) - (8508787678179227653ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        arr_74 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_0 + 3])) ? ((~(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123)))));
                        arr_75 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (unsigned char)137))));
                    }
                    for (unsigned short i_18 = 3; i_18 < 23; i_18 += 3) 
                    {
                        arr_78 [i_1] [i_1 - 1] [i_18] = ((/* implicit */short) max((((((/* implicit */_Bool) var_12)) ? (arr_21 [i_1]) : (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_21 [i_1])))));
                        var_38 = ((/* implicit */short) ((signed char) (short)-22902));
                        var_39 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_6) >> ((((+(((/* implicit */int) (unsigned short)1716)))) - (1674))))))));
                        arr_79 [i_1] [i_1 - 1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_18] [i_1]))) - (var_9)))) : (min((((/* implicit */unsigned long long int) var_11)), (var_6))))) >> (((min((arr_39 [i_1] [i_18 - 1]), (((/* implicit */long long int) (signed char)7)))) + (1134518589158547421LL)))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_18] [i_1]))) - (var_9)))) : (min((((/* implicit */unsigned long long int) var_11)), (var_6))))) >> (((((min((arr_39 [i_1] [i_18 - 1]), (((/* implicit */long long int) (signed char)7)))) + (1134518589158547421LL))) - (1134518589158547375LL))))));
                    }
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned short) var_11);
}
