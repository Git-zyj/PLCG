/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185826
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
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78)))))) ? (((((/* implicit */_Bool) 16777215U)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (526347055U)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_3 - 1] [i_3 - 2])) ? (((/* implicit */int) ((255ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) != (arr_10 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) / (264ULL)))) ? (max((var_12), (14486212008792318472ULL))) : (max((255ULL), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) << (((((/* implicit */int) var_11)) - (38))))))));
                            var_17 = var_13;
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_10 [(signed char)9])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 23; i_7 += 3) 
                {
                    {
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 3960532064917233168ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3))) : (240ULL)));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3960532064917233144ULL)) ? (3960532064917233144ULL) : (((/* implicit */unsigned long long int) 1282349316698215404LL)))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_14 [i_5 + 1] [i_5 + 2] [i_5 + 2])))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_14 [i_5 + 1] [i_5 - 1] [i_5 + 2]))) : (((arr_14 [i_5 - 1] [i_5 + 1] [i_5 + 2]) ^ (18446744073709551376ULL)))));
                        var_22 = ((/* implicit */unsigned char) max((-881798823), (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned short)60722))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            for (unsigned char i_9 = 1; i_9 < 24; i_9 += 1) 
            {
                {
                    arr_29 [i_8] [i_8] [i_9 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (unsigned char)221))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_15 [i_9 - 1])), ((+(((/* implicit */int) arr_25 [i_4] [i_8] [i_9 - 1]))))))) : (((((arr_26 [i_4] [i_8]) > (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (min((var_10), (((/* implicit */unsigned int) arr_20 [i_4] [i_4] [(short)8] [i_4]))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 3; i_10 < 23; i_10 += 1) /* same iter space */
                    {
                        var_23 = ((((/* implicit */_Bool) max((arr_30 [(unsigned short)11] [i_8] [i_10 + 1] [2U]), (arr_30 [i_4] [i_4] [i_10 - 3] [i_4])))) ? ((-(var_1))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_9] [4ULL])), (14486212008792318447ULL)))) ? (var_1) : (((/* implicit */unsigned long long int) (-(var_3)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_11 = 2; i_11 < 23; i_11 += 2) 
                        {
                            var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8] [i_10])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned char)21])))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_28 [i_11 + 1] [i_11 + 1] [i_9 - 1]))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_17 [i_10] [i_4]))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            var_26 = ((signed char) ((int) ((((/* implicit */_Bool) 12866075548109302425ULL)) ? (((/* implicit */int) (unsigned short)52318)) : (((/* implicit */int) (short)0)))));
                            arr_36 [(signed char)0] [i_8] [i_8] [i_10] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned short)2857)))) ? (((((/* implicit */_Bool) 4095U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32247)))) : (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (signed char)37))))))) <= ((-(var_4)))));
                            var_27 = ((/* implicit */unsigned short) ((var_4) ^ (((unsigned int) ((unsigned int) (unsigned short)2852)))));
                        }
                        var_28 = ((/* implicit */unsigned char) (unsigned short)32225);
                    }
                    for (unsigned short i_13 = 3; i_13 < 23; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                        {
                            var_29 = ((/* implicit */int) (((-(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_10))))) == (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - ((+(var_8)))))));
                            var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (+(var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3960532064917233140ULL)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) var_0)))))))), (((((/* implicit */_Bool) arr_21 [i_4] [i_13 - 1] [i_9 + 1] [i_8])) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_21 [i_4] [i_13 + 2] [i_9] [i_13]))))));
                        }
                        for (unsigned int i_15 = 1; i_15 < 24; i_15 += 3) 
                        {
                            var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) -5120187658926818171LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) : (2444334747U))) % ((+(var_4)))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_46 [i_4] [i_4] [i_9] [i_13] [i_15 - 1]))));
                            var_33 = ((/* implicit */unsigned short) (-(((long long int) arr_46 [i_4] [(short)6] [i_4] [i_13] [11]))));
                            arr_47 [(_Bool)1] [11] [i_9] [i_8] [i_15] [(_Bool)1] = ((/* implicit */unsigned int) ((((arr_31 [i_8] [i_9 + 1] [i_13]) < (arr_31 [i_4] [i_9 - 1] [i_13]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8] [i_9 + 1] [i_8])) ? (arr_31 [i_4] [i_9 - 1] [15]) : (arr_31 [20U] [i_9 + 1] [1LL]))))));
                            arr_48 [16ULL] [i_8] [i_13] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (short)18854))))) ? (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-50))))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (((((/* implicit */unsigned int) 16383)) & (4294967295U)))));
                            arr_51 [i_4] [i_8] [i_9] [i_8] [i_16] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (-(435237048776383734LL)))) ? (((((/* implicit */_Bool) (unsigned short)33288)) ? (1130971262) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((signed char) var_1))))));
                        }
                        var_35 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */long long int) 4194303)) : (435237048776383735LL))))))));
                    }
                    for (unsigned short i_17 = 3; i_17 < 23; i_17 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (min((((/* implicit */unsigned long long int) max((14001407), ((-(((/* implicit */int) (unsigned char)85))))))), ((+(131071ULL)))))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (+(4194303)))) ? (((/* implicit */int) ((((/* implicit */long long int) (-(1527527537U)))) <= ((+(arr_49 [12U] [(unsigned char)12] [4])))))) : (((((/* implicit */_Bool) arr_37 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_32 [i_9] [(signed char)4] [i_9 - 1] [i_9 + 1] [15ULL] [i_9 + 1])) : (arr_37 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 1]))))))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) min((((long long int) arr_31 [i_9 + 1] [i_8] [i_4])), (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_4] [12U] [i_9]))))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 3) 
                        {
                            {
                                arr_62 [i_8] = ((/* implicit */unsigned int) ((signed char) (~(-4194316))));
                                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (-(arr_52 [i_4] [i_8] [i_18])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_18] [i_19])) ? (var_3) : (((/* implicit */int) arr_30 [i_19] [i_19] [i_19] [i_19])))))))))))));
                                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_30 [i_4] [i_9 + 1] [i_9] [i_18])), (var_4))) < (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_42 [i_9 - 1] [i_9 - 1] [i_18] [i_9])), ((short)-5294))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_26 [i_4] [0LL]) == (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [16ULL])))))), (((unsigned long long int) 435237048776383734LL))));
        /* LoopNest 2 */
        for (unsigned int i_20 = 3; i_20 < 24; i_20 += 3) 
        {
            for (short i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                {
                    var_42 = ((/* implicit */unsigned short) arr_57 [(signed char)1] [(_Bool)1] [i_20 - 2] [i_20 - 3] [i_4] [i_4]);
                    var_43 = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_13))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 4) /* same iter space */
                    {
                        arr_72 [5U] [5U] [5U] [i_22] |= ((/* implicit */int) var_11);
                        var_44 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned int) 1281018638U))), ((-(max((((/* implicit */unsigned long long int) var_7)), (var_9)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 4) /* same iter space */
                    {
                        var_45 = ((/* implicit */short) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_53 [i_4] [i_4] [i_20 + 1] [i_20 + 1] [i_21] [(unsigned char)12]))));
                        var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (~(549755813887ULL))))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
    {
        var_47 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))) / (arr_57 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))) ? (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))) : (((((/* implicit */_Bool) arr_63 [i_24])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_64 [i_24] [i_24]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */short) var_0)), ((short)-5290))))))));
        /* LoopNest 2 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            for (unsigned int i_26 = 0; i_26 < 25; i_26 += 1) 
            {
                {
                    var_48 ^= ((/* implicit */long long int) var_8);
                    arr_84 [i_24] [i_25] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)5272)) : (((/* implicit */int) (short)63))));
                    arr_85 [i_24] [i_25] [i_25] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_75 [i_25])) & (var_10))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_27 = 0; i_27 < 25; i_27 += 4) 
        {
            var_49 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_27] [i_24] [i_24] [i_24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (arr_78 [i_24] [1ULL]))))) : ((-(18446744073709420559ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (2767439759U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_27] [(signed char)16] [i_27] [i_27] [i_27])))))) : ((-(((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned long long int) var_10)))))));
            var_50 = ((/* implicit */unsigned long long int) min((var_50), (((unsigned long long int) -1))));
        }
        for (unsigned long long int i_28 = 0; i_28 < 25; i_28 += 2) 
        {
            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(arr_34 [i_24] [i_28] [(signed char)14])))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (((var_10) * (((/* implicit */unsigned int) -1))))))))));
            var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)32))))) ? (((/* implicit */int) arr_79 [i_28] [i_28])) : (((/* implicit */int) ((((/* implicit */long long int) 1527527513U)) == (-1LL)))))))))));
        }
        var_53 = ((/* implicit */unsigned short) 2767439760U);
    }
    for (unsigned long long int i_29 = 0; i_29 < 14; i_29 += 4) 
    {
        arr_93 [8LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) -2222815873762584115LL)) ? (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) var_8)))) : ((-(var_1))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_29] [i_29] [i_29])))))));
        var_54 ^= ((((/* implicit */_Bool) (+(arr_45 [i_29] [i_29] [(unsigned short)14] [(unsigned char)8] [i_29] [i_29] [i_29])))) ? (((/* implicit */unsigned long long int) (+(((unsigned int) (unsigned char)134))))) : ((+(var_12))));
        arr_94 [i_29] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (var_4)))) && (((/* implicit */_Bool) (unsigned char)134)))))) & (5575573368916691207ULL));
        arr_95 [i_29] [i_29] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((-13) < (((/* implicit */int) arr_11 [i_29]))))), (((((/* implicit */_Bool) 4611686018427387903ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))) : (1527527533U)))))) ^ (((((/* implicit */_Bool) arr_86 [i_29])) ? (var_1) : (((/* implicit */unsigned long long int) arr_89 [i_29] [i_29] [i_29]))))));
    }
    var_55 = ((/* implicit */unsigned long long int) var_10);
}
