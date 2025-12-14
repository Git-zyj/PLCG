/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189555
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)15))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) (unsigned char)160);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((((/* implicit */_Bool) arr_5 [i_1 - 1])) && (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) (signed char)-110)))))))))));
                var_23 += ((/* implicit */_Bool) ((signed char) (+(min((((/* implicit */unsigned int) var_6)), (arr_3 [i_2] [2U] [i_0]))))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)20)) >= (((/* implicit */int) (signed char)20))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */long long int) min((min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) (signed char)34)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4670909980339328816LL)) || (((/* implicit */_Bool) -3265376691627626797LL)))))))), ((~(((((/* implicit */_Bool) 5U)) ? (-4670909980339328815LL) : (-3265376691627626797LL))))))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3]))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)67)), (131064U)));
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((4670909980339328826LL), (((/* implicit */long long int) (signed char)-13)))) / (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)248)), ((-2147483647 - 1)))))));
            }
        }
        var_27 += ((/* implicit */_Bool) var_18);
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (~((-9223372036854775807LL - 1LL))));
        arr_15 [i_0] = ((/* implicit */int) (!((_Bool)1)));
    }
    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4670909980339328816LL)) ? (-4670909980339328837LL) : (4670909980339328815LL)));
        var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-5562)) - (((/* implicit */int) arr_16 [i_4] [i_4]))));
        var_29 = ((/* implicit */signed char) (+(1275998851)));
    }
    for (short i_5 = 2; i_5 < 8; i_5 += 1) 
    {
        var_30 = (!(((/* implicit */_Bool) (unsigned char)102)));
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (var_1)))), (max((arr_8 [i_5] [i_6] [i_6]), (((/* implicit */long long int) arr_4 [i_5])))))), (((/* implicit */long long int) var_4))));
            arr_24 [i_5] [i_5] [i_5] = ((/* implicit */signed char) arr_5 [i_5 - 1]);
            arr_25 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1006632960ULL)) ? (4670909980339328822LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
            var_31 -= ((/* implicit */signed char) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) >= (((/* implicit */int) arr_4 [i_5 + 2]))));
            var_32 = ((/* implicit */_Bool) var_10);
        }
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            arr_29 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (short)(-32767 - 1));
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)5576)))), (((/* implicit */int) ((max((((/* implicit */long long int) 0)), ((-9223372036854775807LL - 1LL)))) > (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1)))))))))))));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                var_34 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((max((((/* implicit */int) var_13)), (var_16))) >= (((/* implicit */int) (signed char)5))))), ((unsigned char)74)));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */int) (~(-4670909980339328825LL)));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (!(var_11))))));
                            arr_39 [i_5] [i_5] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */short) var_6);
                        }
                    } 
                } 
            }
            for (signed char i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                arr_43 [i_5] [i_7] [i_5] = arr_2 [i_5];
                arr_44 [i_7] [i_5] = ((/* implicit */_Bool) min((max((13588138331768052842ULL), (((/* implicit */unsigned long long int) (short)-32756)))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (15467429486411608741ULL)))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        {
                            arr_49 [i_5] [i_7] [i_11] [i_11] [i_5] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) - (((/* implicit */int) (_Bool)1)))) % ((~(((/* implicit */int) (short)5577))))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_28 [i_5] [i_5])) : (((/* implicit */int) (signed char)10))))), (((unsigned int) (short)-32749))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5 - 2] [i_13 + 1])) ? (arr_0 [i_5 + 2] [i_13 - 1]) : (var_1)))) : (max((arr_5 [i_5 - 2]), (arr_5 [i_11])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_14 = 4; i_14 < 9; i_14 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) var_17))));
                    var_39 = var_10;
                }
                for (short i_15 = 4; i_15 < 9; i_15 += 2) /* same iter space */
                {
                    var_40 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (7967016090646923195ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))))))))) ? (min((13588138331768052829ULL), (((/* implicit */unsigned long long int) (short)32757)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-10), ((signed char)27))))) : (((((/* implicit */_Bool) 2146062905)) ? (1910113943U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_41 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (1559471562U)));
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (4858605741941498774ULL)));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_43 = ((/* implicit */_Bool) var_0);
                        arr_60 [i_15] [i_15] [i_11] [i_7] [i_15] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (10479727983062628421ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)88)) > (((/* implicit */int) (signed char)-57)))))) : (var_18)))) ? ((~(max((((/* implicit */unsigned long long int) var_11)), (var_18))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13)))))))));
                    }
                    var_44 = ((/* implicit */unsigned int) var_8);
                    arr_61 [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4858605741941498774ULL)) && (((/* implicit */_Bool) min((13588138331768052841ULL), (((/* implicit */unsigned long long int) var_1)))))))), (((((/* implicit */_Bool) arr_34 [i_15] [i_5] [i_11] [i_5] [i_5])) ? (((unsigned long long int) (signed char)-10)) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_47 [i_5] [i_5])), (var_0))))))));
                }
                for (short i_18 = 4; i_18 < 9; i_18 += 2) /* same iter space */
                {
                    arr_64 [i_5] [i_7] [i_11] [i_18] = ((/* implicit */signed char) var_5);
                    var_45 *= max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3823801987U))))), (7967016090646923195ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_5] [i_7] [i_7] [i_11] [i_11] [i_18] [i_18]))) | (10479727983062628420ULL))));
                    /* LoopSeq 4 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_68 [i_5] [i_7] [i_11] [i_5] [i_19] = ((/* implicit */unsigned long long int) var_13);
                        arr_69 [i_5] = (+(((/* implicit */int) var_6)));
                        var_46 += ((/* implicit */signed char) max((4294967295U), (((/* implicit */unsigned int) -1732375484))));
                        var_47 = arr_20 [i_11];
                    }
                    for (unsigned long long int i_20 = 1; i_20 < 7; i_20 += 1) 
                    {
                        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) > (3823801987U)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (_Bool)1))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_20])) ? (((/* implicit */unsigned int) -1862757159)) : (4294967295U)))))))));
                        var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) max((((/* implicit */int) arr_45 [i_5] [i_7] [i_7])), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (262140LL)))) << ((((-(471165308U))) - (3823801982U))))))))));
                    }
                    for (signed char i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        arr_74 [i_5] [i_7] [i_11] [i_11] [i_5] [i_21] = ((/* implicit */short) max((max((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) var_11)), (6U))))), (max((((/* implicit */unsigned int) (signed char)90)), (471165318U)))));
                        var_50 -= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) 28U)) || (((/* implicit */_Bool) (short)-19558))))), ((-(((/* implicit */int) arr_19 [i_18]))))));
                    }
                    for (short i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(10364208327554197000ULL))) << (2U))))));
                        var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) max((max((-138450361512770042LL), (-2701341400079590232LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 570992096)) || (((/* implicit */_Bool) 7967016090646923187ULL))))))))));
                    }
                }
            }
        }
        for (signed char i_23 = 0; i_23 < 10; i_23 += 1) 
        {
            var_53 = var_17;
            var_54 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_38 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5] [i_5]))));
        }
        for (int i_24 = 1; i_24 < 8; i_24 += 1) 
        {
            arr_81 [i_5] [i_5] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((7967016090646923208ULL), (7967016090646923187ULL)))) ? (((/* implicit */unsigned long long int) 32U)) : (2053011872172670527ULL)));
            arr_82 [i_5] [i_5] = ((/* implicit */unsigned int) max((1732375484), (((/* implicit */int) (signed char)-68))));
        }
        /* LoopNest 2 */
        for (unsigned int i_25 = 1; i_25 < 9; i_25 += 1) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                {
                    var_55 = ((/* implicit */unsigned int) var_17);
                    var_56 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)90))));
                    var_57 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1732375453)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) ((3823801969U) << (((/* implicit */int) (_Bool)1)))))));
                    var_58 = ((/* implicit */short) ((int) (signed char)-68));
                }
            } 
        } 
    }
    var_59 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)67)) < (((/* implicit */int) (_Bool)1))));
}
