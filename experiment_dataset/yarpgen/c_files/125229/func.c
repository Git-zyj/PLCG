/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125229
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
    var_10 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_11 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -988641915)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (arr_7 [i_0] [i_1 - 1] [i_1 - 1])))) ? (((((arr_4 [i_1 - 1] [i_1 - 1]) + (2147483647))) << (((var_8) - (6505154248971728125ULL))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [(short)6] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_3] [i_4 - 1])))))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(arr_4 [i_0] [i_1 - 1])))))));
                                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_3])))))));
                                var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */int) (short)14032)) & (((/* implicit */int) (unsigned short)37785))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */signed char) ((((/* implicit */int) arr_0 [(signed char)6])) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [9] [i_2])) ? (((/* implicit */unsigned long long int) var_3)) : (var_8)))))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (7616146133582157379ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(signed char)19] [i_1 - 1] [i_6] [i_5] [i_1 - 1] [i_1 - 1])))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [(signed char)18] [i_6] [i_6] [i_6] [i_1 - 1] [i_1 - 1])), (var_8))))));
                                var_17 = ((/* implicit */int) arr_1 [i_0]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1 - 1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_1 - 1] [i_1 - 1] [i_1]))));
                }
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_21 [i_1 - 1] [i_8 + 1] [i_8 + 1] [(signed char)16])) : (((/* implicit */int) arr_21 [i_1 - 1] [i_8 + 1] [i_8] [i_8])))) >> (((/* implicit */int) arr_21 [i_1 - 1] [i_8 + 1] [i_8] [i_8 + 1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) (+(404501556U))))), ((+(((/* implicit */int) var_2))))));
                            arr_26 [i_8] [i_8] = ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), ((+(((-98174255) | (((/* implicit */int) (short)3159))))))));
                        }
                    }
                    var_20 |= ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_32 [18ULL] [i_10] [i_7] [i_10] [i_0] = ((((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [i_1] [i_10 + 1] [i_10 + 1])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_1] [i_7] [i_10 + 2] [i_10 - 1]))))));
                                arr_33 [i_10] [i_10] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_0] [i_10] [i_7] [i_1 - 1] [i_0]))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) arr_29 [11ULL] [i_1 - 1] [i_1 - 1] [i_0] [i_0] [(_Bool)1]);
                    var_22 &= ((/* implicit */int) (unsigned short)65535);
                }
                /* vectorizable */
                for (signed char i_12 = 2; i_12 < 18; i_12 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) (signed char)37);
                    /* LoopSeq 2 */
                    for (int i_13 = 2; i_13 < 19; i_13 += 3) 
                    {
                        arr_39 [i_13 + 2] [i_13 + 1] [i_13 + 2] [i_13 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1937181240)) ? (((/* implicit */int) (short)-28066)) : (((/* implicit */int) (unsigned short)60786))))) ? (((((/* implicit */_Bool) arr_16 [i_12] [i_1] [i_1] [i_13 + 2] [i_0])) ? (((/* implicit */int) arr_1 [i_13])) : (((/* implicit */int) (unsigned short)65528)))) : (arr_36 [i_0] [i_1] [i_0] [i_13 + 1]));
                        arr_40 [i_0] [i_1] [i_12 - 1] [(short)12] [i_12] = ((/* implicit */unsigned long long int) var_3);
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-28480)))) : (((/* implicit */int) var_9)))))));
                    }
                    for (int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        arr_43 [(short)18] [(short)14] [i_1] [(short)14] [i_14] [i_14] = ((/* implicit */short) arr_38 [i_1 - 1]);
                        arr_44 [i_14] [i_12] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)222))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_25 = ((short) arr_46 [i_1] [19U] [i_1 - 1] [i_1] [i_1]);
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_1))));
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
                        {
                            arr_50 [i_0] [i_1] [i_0] [i_12 - 2] [(unsigned short)11] [i_16] [i_16] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_12] [i_1] [i_0]))));
                            var_27 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_12])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        }
                        for (short i_17 = 0; i_17 < 21; i_17 += 4) /* same iter space */
                        {
                            arr_54 [i_15] [i_15] [i_12 + 1] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) 3610023754U)) - (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12 + 2] [i_12 + 3] [i_12 + 3])))));
                            var_28 += ((/* implicit */unsigned int) arr_53 [i_12] [i_12] [i_12 + 1] [i_17] [i_17]);
                            var_29 = ((/* implicit */int) arr_37 [i_17] [i_1] [i_1 - 1] [i_15]);
                        }
                        for (short i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(3535163308U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (_Bool)1)))))));
                            var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                        }
                    }
                }
                var_32 += ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 1972673258)), (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) var_3))));
                /* LoopNest 3 */
                for (short i_19 = 3; i_19 < 19; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                    {
                        for (int i_21 = 0; i_21 < 21; i_21 += 4) 
                        {
                            {
                                var_33 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_34 [(short)20] [i_19 - 3] [i_19 - 2] [i_19]))));
                                arr_65 [i_21] [i_20] [i_19] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_19 + 1] [i_20])) ? (arr_4 [i_0] [i_21]) : (((/* implicit */int) arr_41 [i_19] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (var_8)))) ? ((+(((unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_61 [i_1 - 1] [i_1 - 1] [i_19 - 3] [i_19] [i_20]))))));
                                arr_66 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 6842841630607767543ULL)))))));
                                arr_67 [i_0] [i_1] [i_19 + 2] [i_20] [i_21] = ((/* implicit */short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32762))))) + (arr_57 [i_19] [i_0]))), (((/* implicit */unsigned int) var_1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_34 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) var_9)));
    var_35 = ((/* implicit */long long int) ((unsigned long long int) ((3842688243U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
    var_36 |= ((/* implicit */short) max(((-(((/* implicit */int) var_9)))), ((+(((/* implicit */int) var_4))))));
}
