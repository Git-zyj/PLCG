/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130119
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((var_14) >= (((/* implicit */int) var_0))))) >= (var_14)))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((/* implicit */short) var_1)), (var_3))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) (-(var_10)));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2118136386U))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_18 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) ((unsigned long long int) arr_0 [3U] [3U]))) ? (((arr_1 [15U] [15U]) ? (((/* implicit */unsigned int) 1533367127)) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) arr_1 [i_0] [11LL])))))))));
        var_19 = ((/* implicit */unsigned char) var_10);
        arr_2 [i_0] = ((/* implicit */unsigned char) var_13);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [0ULL] [i_2] [(unsigned short)0] |= ((/* implicit */int) max((max((max((3668258170U), (((/* implicit */unsigned int) var_6)))), (((((/* implicit */_Bool) 16U)) ? (arr_8 [i_1] [i_1] [(signed char)24]) : (16U))))), (((((/* implicit */_Bool) arr_3 [(unsigned short)2] [i_1])) ? (((2387205723U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_2]))))) : (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_2] [i_3])) ? (((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_3])) : (2387205723U)))))));
                    arr_13 [i_3] = ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) 2387205723U)), (max((12286518446865816213ULL), (12886401521181060331ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 1; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_5))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((11030110005146340749ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [i_5] [i_5] [i_3])) > (arr_4 [i_2]))))))))));
                            arr_20 [i_4] [i_2] [19ULL] [i_3] [i_5] = ((/* implicit */unsigned int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                            arr_21 [i_1] [i_1] [i_1] [i_4 + 1] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)17))));
                            var_22 = arr_7 [i_4 - 1] [12ULL] [i_1];
                            arr_22 [i_3] [i_3] = ((/* implicit */unsigned int) var_3);
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 24; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */int) ((_Bool) ((var_8) >> (((arr_5 [(_Bool)1] [i_3]) - (995128890))))));
                            arr_26 [22ULL] [i_3] = var_7;
                        }
                        arr_27 [i_4] [i_3] [i_3] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4 - 1] [i_4] [i_3] [i_3])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [20LL] [i_4 + 1] [i_3] [i_3] [14LL])))))));
                        var_24 = ((/* implicit */short) var_12);
                        var_25 = ((/* implicit */signed char) (unsigned char)254);
                    }
                    for (unsigned int i_7 = 1; i_7 < 24; i_7 += 2) /* same iter space */
                    {
                        arr_30 [i_3] = ((/* implicit */_Bool) ((long long int) arr_10 [i_1 - 1] [i_2] [18] [i_7 + 1]));
                        arr_31 [i_1] [i_3] [i_1] [(short)2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38))) / (16343420861595517600ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_3] [i_7 - 1])))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) + (arr_19 [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1])))) ? (((var_14) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_28 [i_1] [i_1] [i_3] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((-(var_8)))));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) (signed char)-87);
                            var_28 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) arr_3 [i_7] [i_2]))) : (((/* implicit */int) (_Bool)0)))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */int) arr_34 [i_3] [i_3] [i_3] [i_7]);
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) -5558583324334182495LL))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) min((var_31), (arr_29 [i_2] [(unsigned short)12] [i_2] [i_10])));
                            arr_40 [i_3] [i_7] [i_3] = ((/* implicit */signed char) ((max((((/* implicit */int) arr_39 [i_1])), (var_11))) >> (((((((/* implicit */_Bool) arr_37 [i_1] [i_2] [i_3] [i_7] [21LL] [i_2] [21LL])) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_2] [(unsigned char)22])) : (var_14))))) - (124)))));
                        }
                    }
                    arr_41 [i_3] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(-6381987432433392287LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)34)) ? (var_11) : (((/* implicit */int) arr_11 [i_1] [i_2] [21] [i_3]))))) ? (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [(_Bool)1] [i_1]))))) : (max((arr_7 [i_3] [i_2] [i_1]), (((/* implicit */unsigned long long int) var_0))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            var_32 = ((/* implicit */short) arr_24 [i_1] [i_11] [i_1] [i_1] [i_11] [i_11] [i_11]);
            arr_44 [i_11] [i_11] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_11] [i_1] [i_1])) ? (((/* implicit */int) ((unsigned short) 1643777001U))) : (var_6)));
        }
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_33 += ((/* implicit */_Bool) 1945368727);
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_12] [i_12] [12U] [i_12] [i_12])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_47 [(short)4] [i_1] [(short)4]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -847090286)) ? (arr_19 [i_1] [i_12] [i_12] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18189)))))))))))))));
        }
        /* LoopNest 2 */
        for (long long int i_13 = 2; i_13 < 23; i_13 += 3) 
        {
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
            {
                {
                    arr_52 [i_13] [i_13] [i_13] = ((/* implicit */int) arr_18 [i_14]);
                    /* LoopSeq 3 */
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        var_35 = (i_13 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_14] [i_14] [i_14] [i_14] [12LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_48 [i_13]), (((/* implicit */signed char) (_Bool)1)))))) : (((arr_39 [i_1 - 1]) ? (((/* implicit */unsigned int) var_6)) : (var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */short) (signed char)17))))) ? (((arr_34 [i_1] [i_13] [i_13] [i_1]) << (((((((/* implicit */int) arr_3 [i_1] [i_13 - 2])) + (16701))) - (25))))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_1]))))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_14] [i_14] [i_14] [i_14] [12LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_48 [i_13]), (((/* implicit */signed char) (_Bool)1)))))) : (((arr_39 [i_1 - 1]) ? (((/* implicit */unsigned int) var_6)) : (var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */short) (signed char)17))))) ? (((((arr_34 [i_1] [i_13] [i_13] [i_1]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_3 [i_1] [i_13 - 2])) + (16701))) - (25))))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_1])))))))));
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) arr_35 [i_1 - 1] [i_1] [i_1] [i_15] [i_15] [i_1] [i_1]))));
                        arr_56 [(_Bool)1] [(_Bool)1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (short)16714)) : (((/* implicit */int) (unsigned short)63973))));
                    }
                    for (signed char i_16 = 4; i_16 < 24; i_16 += 2) 
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_57 [i_16] [i_13 + 2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))) ? (max((max((-404008530), (((/* implicit */int) arr_15 [i_1 - 1] [i_16] [i_16 + 1] [i_16])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_28 [i_1] [i_1] [i_14] [(short)15])), (arr_55 [i_1 - 1])))))) : (((arr_58 [i_1] [i_13] [i_14] [(_Bool)1] [i_1]) + (((/* implicit */int) arr_29 [i_1] [(unsigned char)1] [i_14] [i_16 - 1])))))))));
                        var_38 -= ((/* implicit */unsigned short) var_12);
                        var_39 = ((/* implicit */unsigned int) var_6);
                        var_40 &= ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_46 [i_14] [i_13] [i_1])))), (((((/* implicit */_Bool) arr_8 [i_1] [i_13] [i_14])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) max((((int) arr_4 [i_14])), (((((/* implicit */_Bool) arr_50 [i_1] [i_14])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)0))))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [(unsigned char)11] [(unsigned short)10] [i_14] [i_16 - 4])) ? (arr_50 [i_14] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        arr_62 [i_13] [i_13] = ((/* implicit */unsigned int) (~(((((int) arr_19 [i_1] [i_13 + 1] [i_13 + 1] [i_1])) >> (((((((/* implicit */_Bool) arr_61 [i_1] [i_13] [i_13] [i_17] [i_17])) ? (((/* implicit */int) arr_16 [i_1] [i_13] [i_13] [i_17] [i_1 - 1])) : (var_6))) - (29709)))))));
                        var_41 = ((/* implicit */_Bool) (~(((max((((/* implicit */unsigned long long int) (signed char)-7)), (1016353599231363977ULL))) >> (((arr_9 [i_14] [i_14] [i_13 + 2]) + (2079908521)))))));
                        var_42 = ((((/* implicit */_Bool) arr_17 [i_13] [i_13] [i_14] [(unsigned char)22] [i_13] [i_13] [i_13])) ? (arr_49 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((int) var_5))))));
                        var_43 = ((/* implicit */short) arr_18 [i_14]);
                    }
                }
            } 
        } 
        var_44 = ((((var_2) ? (arr_34 [14LL] [14LL] [(short)0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) >= (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1 - 1])) || (((/* implicit */_Bool) var_6))))), (((long long int) arr_7 [(_Bool)1] [i_1] [i_1])))));
        arr_63 [(unsigned char)9] = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned short) ((unsigned int) arr_60 [i_1] [i_1] [i_1] [i_1] [i_1])))), (arr_34 [(unsigned char)0] [(_Bool)1] [(_Bool)1] [20ULL])));
    }
}
