/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113739
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        var_10 = ((/* implicit */short) var_6);
                        var_11 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) ^ (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (short)4378)) + (((/* implicit */int) arr_8 [i_2])))) : ((+(((/* implicit */int) var_2))))))));
                        var_12 -= ((/* implicit */unsigned short) var_1);
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_13 = ((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_1]);
                        arr_14 [i_0] [(_Bool)1] [i_2 - 4] [i_4] &= ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_2] [i_2] [i_2] [i_2] [(unsigned char)8] = ((/* implicit */unsigned short) (~(((int) (+(((/* implicit */int) (unsigned char)186)))))));
                        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */unsigned long long int) max((var_8), (var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-406))))) ? (min((((/* implicit */unsigned int) arr_13 [i_0] [i_2] [i_2 + 1] [(unsigned short)3])), (11U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [(unsigned short)3] [i_2] [(unsigned short)3])) ? (((/* implicit */int) (unsigned short)58842)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_5])))), (((/* implicit */int) arr_2 [i_0 + 2]))))));
                    }
                    var_15 = ((/* implicit */unsigned int) ((short) max((arr_10 [i_2 - 4] [i_0 + 1] [8] [i_1]), (arr_10 [i_2 - 2] [i_0 - 1] [i_2 - 1] [i_0 - 1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            {
                arr_25 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_23 [i_7] [i_6])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7] [i_6])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        arr_31 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6]))))));
                        var_16 |= arr_26 [i_6] [i_7] [i_8] [i_8];
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_6] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (var_1)));
                    }
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
                    {
                        var_18 ^= ((/* implicit */unsigned short) var_9);
                        arr_34 [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-421))) : (9753085383618524400ULL)))));
                        arr_35 [i_6] [i_6] = ((/* implicit */int) ((arr_17 [i_6] [i_6] [i_6] [i_10] [i_10]) == (arr_17 [i_6] [i_6] [i_8] [i_10] [i_7])));
                        var_19 = ((/* implicit */short) (_Bool)0);
                        arr_36 [i_6] [i_7] [i_8] [(_Bool)1] [i_6] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_10])) ? (((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6] [i_6])) ? (var_3) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        arr_39 [i_6] = ((/* implicit */_Bool) var_0);
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_6] [i_11] [i_8])) ? (arr_6 [i_6] [i_8] [i_11]) : (arr_6 [18] [i_7] [18]))))));
                        arr_40 [i_6] [i_8] &= ((/* implicit */int) arr_15 [i_7] [(signed char)18]);
                        arr_41 [i_6] [i_7] [i_7] [i_7] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8] [i_7] [i_6])) ? (var_3) : (((/* implicit */int) arr_23 [i_8] [i_11]))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_0))));
                    }
                    /* LoopSeq 1 */
                    for (short i_12 = 1; i_12 < 7; i_12 += 3) 
                    {
                        var_22 = ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_38 [i_12 + 3] [i_12 + 4] [4] [i_12 + 4])) : (((int) arr_1 [(unsigned char)1])));
                        arr_44 [i_6] [i_7] = ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) arr_18 [i_12] [i_12] [i_12 - 1] [i_12 + 1])) : (((/* implicit */int) var_2)));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_47 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) var_2);
                        var_23 = ((/* implicit */long long int) arr_43 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_8]);
                        var_24 |= ((((/* implicit */_Bool) 2147483647)) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7)))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((_Bool) arr_17 [i_6] [i_7] [i_8] [(_Bool)1] [i_14]));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((unsigned short) var_7)))));
                        arr_50 [i_6] [(_Bool)1] [i_6] [i_6] [(_Bool)1] [i_6] = ((/* implicit */int) ((unsigned short) ((var_3) % (((/* implicit */int) (short)406)))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_6] [i_7] [i_6])) ? (((/* implicit */int) var_2)) : (var_8))))));
                    }
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_10 [i_7] [i_7] [i_7] [i_6]))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_7] [i_8])) * (((/* implicit */int) arr_30 [i_6] [(unsigned char)2] [i_8])))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 2; i_15 < 10; i_15 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 2; i_17 < 10; i_17 += 3) 
                        {
                            {
                                arr_58 [i_6] [i_6] [i_17 + 1] = ((/* implicit */unsigned short) var_6);
                                var_30 += ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_7 [i_17 + 1] [i_7] [i_15]))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) arr_53 [i_6] [i_7] [i_15 - 2])))));
                    var_32 ^= max((max((var_6), (((/* implicit */unsigned long long int) (unsigned short)6685)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1403799991)) ? (((/* implicit */int) arr_55 [i_7])) : (((/* implicit */int) arr_55 [i_7]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 11; i_18 += 3) 
                    {
                        arr_62 [i_6] [i_15 - 2] [i_7] [i_7] [i_6] [i_6] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_49 [i_6] [i_6] [i_6] [i_6] [(signed char)7])) ? (var_9) : (((/* implicit */int) arr_60 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                        arr_63 [i_6] [i_7] [i_15] [i_6] &= ((((arr_27 [i_6] [i_7] [i_15 + 1]) ? (((/* implicit */int) arr_61 [(_Bool)1] [i_7] [(_Bool)1] [i_7] [(unsigned short)9] [i_7])) : (var_5))) >> (((var_8) - (1268507253))));
                    }
                    for (unsigned int i_19 = 1; i_19 < 8; i_19 += 3) 
                    {
                        arr_66 [i_6] [i_19] [i_15] [i_6] [i_7] = ((/* implicit */signed char) max(((short)417), ((short)-1)));
                        arr_67 [i_6] [i_6] [6ULL] [i_19 + 2] [i_19 + 3] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_42 [i_15 - 2] [i_19 - 1] [i_6])) < (var_8))))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((min((var_3), (((((/* implicit */_Bool) arr_17 [i_6] [i_7] [i_15] [i_7] [i_15])) ? (((/* implicit */int) (unsigned short)30776)) : (((/* implicit */int) (unsigned char)98)))))) + (((/* implicit */int) (unsigned char)232)))))));
                        var_34 = var_5;
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    var_35 = ((/* implicit */unsigned int) arr_23 [i_6] [i_7]);
                    arr_71 [i_6] [i_7] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_6] [i_7] [i_20])))))));
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (1792792697U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_20] [i_6] [i_6]))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_56 [i_6] [i_6] [i_20] [i_6] [i_6]) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_9 [i_21])) : (((int) (_Bool)1)))))));
                        var_38 = ((/* implicit */unsigned char) (~(arr_28 [i_6] [i_6] [i_20] [i_6])));
                    }
                    for (unsigned int i_22 = 0; i_22 < 11; i_22 += 3) /* same iter space */
                    {
                        arr_76 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_4 [i_6] [i_7] [i_20]);
                        var_39 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (0U)))) ? (((/* implicit */int) arr_27 [i_6] [i_6] [5])) : (((/* implicit */int) var_7)));
                    }
                }
                arr_77 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_2 [i_6])) / (((/* implicit */int) (unsigned short)11092)))))) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_16 [i_7] [i_7] [i_6] [i_6] [i_6] [i_6]))));
            }
        } 
    } 
}
