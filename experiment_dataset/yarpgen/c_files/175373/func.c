/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175373
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
    var_20 = ((/* implicit */_Bool) ((unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (var_11))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) min((((((((/* implicit */_Bool) 1099511496704ULL)) ? (6842334673876683288LL) : (6842334673876683304LL))) & (((/* implicit */long long int) min((((/* implicit */int) var_6)), (1292816909)))))), (((/* implicit */long long int) ((int) -6842334673876683299LL)))));
                        var_21 = ((/* implicit */short) ((((18446742974198054912ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((134216704LL) > (6842334673876683288LL))))))) ? (min((((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_18)))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_13))))))) : (((((/* implicit */_Bool) 6842334673876683297LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : ((-2147483647 - 1))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_13 [i_4] [i_4] [i_4] [i_1 + 1] [9ULL] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_2] [i_2] [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_2] [i_2 + 1] [3U] [18] [i_2 - 1])) + (44))) - (15)))));
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) arr_12 [(signed char)14] [i_1 + 1] [i_4] [i_4] [i_4] [i_4])) | (((/* implicit */int) var_10))))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_18 [i_0] [4U] [i_2] [15] [(short)16] [i_0] [i_5] = ((/* implicit */short) arr_5 [(unsigned char)16] [i_3 - 1] [i_3 - 2]);
                            var_23 = ((var_14) || (((/* implicit */_Bool) arr_5 [(unsigned char)17] [i_1] [i_1])));
                            arr_19 [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-22988)) : (((((/* implicit */_Bool) arr_5 [i_2] [i_3 - 1] [i_5])) ? (((/* implicit */int) arr_5 [(short)17] [i_3] [(short)17])) : (((/* implicit */int) (unsigned char)108))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_3 [i_2]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_0)))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6]))) : (18446742974198054930ULL))))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) != (3318305253U)));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (signed char)-2)))), (((/* implicit */int) ((((/* implicit */_Bool) 6842334673876683288LL)) && (((/* implicit */_Bool) (unsigned short)65535)))))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    {
                        arr_29 [i_9] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (signed char)80)) - (66))))) <= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_7] [i_8] [i_7])) == (((/* implicit */int) (short)28218)))))));
                        arr_30 [i_0 - 1] [(unsigned short)6] [i_0] [i_9] = ((/* implicit */long long int) ((min((arr_26 [i_0 - 1] [i_0 + 1] [i_0]), (arr_26 [i_8] [i_7] [i_7]))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0])) + (((/* implicit */int) arr_6 [i_0 + 1] [i_7] [i_0])))))));
                        var_28 |= ((/* implicit */signed char) min(((-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [(unsigned char)4] [(unsigned char)4] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0 - 1] [i_8] [i_8] [i_8] [i_9])), (var_18))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            for (signed char i_11 = 4; i_11 < 21; i_11 += 4) 
            {
                {
                    var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(2808879178U)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */long long int) arr_16 [i_0] [i_0 - 1] [(unsigned char)1] [i_11 + 1] [i_0] [i_11 + 3]))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 3; i_13 < 23; i_13 += 2) 
                        {
                            {
                                var_30 *= (unsigned char)5;
                                arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] [i_11] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) (short)-22988)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (unsigned short)47397))))));
                                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)32)) && (((((/* implicit */int) (short)32753)) > (((/* implicit */int) (unsigned char)234))))))) != (((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)7168))))));
                                arr_40 [i_0] [i_11] = ((/* implicit */unsigned int) min((4761062125784588176ULL), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_41 [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [(unsigned short)12] [i_0])) <= (((/* implicit */int) (unsigned char)242)))))) ^ (min((((/* implicit */unsigned int) arr_20 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1])), (var_0))));
    }
    for (unsigned char i_14 = 1; i_14 < 15; i_14 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                for (short i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_33 = ((/* implicit */unsigned long long int) ((115544) == (((/* implicit */int) arr_35 [i_14 + 2] [i_14 + 2] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 1]))));
                        arr_53 [i_17] [i_14] [i_15] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_18))));
                    }
                } 
            } 
            var_34 *= ((/* implicit */unsigned short) arr_45 [i_14] [i_14 + 2] [i_14]);
            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) var_16))));
        }
        for (unsigned short i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            var_36 -= ((((((/* implicit */_Bool) var_13)) && (((((/* implicit */_Bool) (unsigned short)7193)) || (((/* implicit */_Bool) (unsigned short)27666)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_14 + 1] [i_14])))))) : (((((/* implicit */_Bool) (unsigned short)26388)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_18]))) : (3096992038731265964ULL)))))));
            var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_17 [i_14 + 2]), (arr_17 [i_14 + 2]))))));
        }
        /* LoopSeq 2 */
        for (long long int i_19 = 0; i_19 < 17; i_19 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_20 = 1; i_20 < 16; i_20 += 1) 
            {
                arr_61 [i_14] [i_14] [i_20 + 1] = ((/* implicit */unsigned char) (_Bool)1);
                arr_62 [i_14] [(unsigned char)4] [i_19] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_14] [0] [i_19] [i_19] [i_19] [i_20] [i_20]))) * ((-(((unsigned long long int) (unsigned short)7))))));
            }
            for (int i_21 = 0; i_21 < 17; i_21 += 4) 
            {
                var_38 = min((((/* implicit */unsigned char) arr_5 [i_14] [i_19] [i_21])), ((unsigned char)159));
                arr_65 [i_14] [14] [i_21] = ((/* implicit */unsigned long long int) min(((unsigned char)17), (((/* implicit */unsigned char) (_Bool)1))));
                var_39 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_16))))) <= ((+(((/* implicit */int) arr_34 [i_14 + 2]))))));
            }
            for (unsigned char i_22 = 1; i_22 < 15; i_22 += 2) 
            {
                arr_68 [i_19] [i_19] [i_14] = ((/* implicit */short) (((~(((/* implicit */int) (short)32767)))) < (((/* implicit */int) var_15))));
                arr_69 [i_14] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_13) - (((/* implicit */long long int) arr_31 [i_14 - 1] [i_14]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) : (min((var_7), (var_11)))));
                arr_70 [i_14] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_12)))) % (((/* implicit */int) arr_55 [i_22 + 2] [i_14 + 1]))));
            }
            arr_71 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)45186))))) ? (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) min((var_18), (((/* implicit */unsigned char) (signed char)34)))))));
        }
        for (unsigned char i_23 = 2; i_23 < 14; i_23 += 2) 
        {
            var_40 = max(((unsigned short)20361), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20335))))) && (((/* implicit */_Bool) 15138181036616518124ULL))))));
            arr_74 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */int) (unsigned short)15762)), (1420837528))) > (-1420837520))))) | (min((((/* implicit */unsigned long long int) arr_42 [i_14])), (3096992038731265953ULL)))));
            var_41 = ((/* implicit */unsigned short) -982962436);
            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) min((((6U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [i_23])))))))));
            var_43 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) 13566696617175676674ULL))))), (-1)));
        }
    }
    /* vectorizable */
    for (unsigned short i_24 = 1; i_24 < 24; i_24 += 4) 
    {
        arr_77 [i_24] [i_24] = ((/* implicit */unsigned long long int) ((arr_75 [i_24] [i_24]) ? ((+(1420837511))) : (((/* implicit */int) var_18))));
        arr_78 [i_24] [i_24] = ((3833233383U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3871))));
    }
    /* LoopNest 3 */
    for (unsigned short i_25 = 0; i_25 < 24; i_25 += 4) 
    {
        for (unsigned long long int i_26 = 2; i_26 < 23; i_26 += 1) 
        {
            for (unsigned short i_27 = 0; i_27 < 24; i_27 += 2) 
            {
                {
                    var_44 = ((/* implicit */unsigned int) (~((+((+(-1375425258151725241LL)))))));
                    var_45 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
    } 
}
