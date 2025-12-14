/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147762
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
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = arr_2 [i_0];
        var_11 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)106)) || (((/* implicit */_Bool) var_6)))), ((!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0]))))))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */_Bool) var_5);
    }
    for (int i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_2 + 3] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) (unsigned short)16232))))) || (((((((/* implicit */_Bool) arr_5 [i_3])) && (((/* implicit */_Bool) var_3)))) && (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) arr_6 [i_4]))))))));
                        arr_16 [i_1 - 2] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) arr_8 [i_1 - 1] [i_2 - 3] [i_3]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_10))));
                        arr_23 [(signed char)8] [(signed char)8] [(signed char)8] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_8 = 2; i_8 < 16; i_8 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_9 + 1] [0U] [i_9] [i_9 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_8] [i_8 + 2] [i_9 + 1]))));
                    arr_29 [i_1] [i_9] = ((/* implicit */short) (~(arr_11 [i_9] [i_9 + 1] [i_9 + 1])));
                }
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    arr_33 [i_1] [i_5] [i_1] [i_5] = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 1 */
                    for (short i_11 = 3; i_11 < 19; i_11 += 3) 
                    {
                        var_15 = ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_14 [i_11] [i_5] [i_8] [i_8] [i_5] [i_1 + 1])) | (((/* implicit */int) arr_6 [i_1 + 3])))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 - 2] [i_1 - 2] [i_8] [i_10])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) (short)23201)) != (((/* implicit */int) var_7))))) : (((/* implicit */int) arr_13 [i_1 + 3] [i_1 + 3] [i_5] [i_8 + 4])))));
                        var_16 = var_3;
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        var_17 ^= ((/* implicit */short) ((545007706) > (((/* implicit */int) arr_13 [i_8 + 2] [i_10] [i_8 - 2] [i_10]))));
                        var_18 = ((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1 - 2]);
                        var_19 = ((/* implicit */signed char) arr_25 [i_1] [i_5] [i_1] [i_10]);
                        arr_38 [i_10] [i_5] = ((/* implicit */long long int) var_9);
                        var_20 -= ((/* implicit */signed char) ((((var_6) ^ (((/* implicit */int) (signed char)60)))) > (((/* implicit */int) var_10))));
                    }
                    for (unsigned int i_13 = 3; i_13 < 18; i_13 += 1) 
                    {
                        arr_42 [i_1] [i_5] [i_8 - 2] [i_5] [i_13] = ((/* implicit */int) arr_8 [i_1] [i_1] [i_13]);
                        arr_43 [i_1 + 2] [i_1 + 2] [i_5] [i_8 + 3] [i_10] [i_13] = (short)-23191;
                        arr_44 [i_1] [i_5] [i_8] [i_10] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_11 [i_5] [i_5] [i_13]) >> (((((/* implicit */int) arr_18 [i_5] [i_10])) - (205)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49412)) * (((/* implicit */int) arr_7 [i_8] [i_10] [i_10]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : (arr_28 [i_1 + 1] [i_5] [i_8] [i_8] [i_13 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_10] [i_5])))));
                        arr_45 [(signed char)7] [i_5] [i_8] [i_5] [i_13] = ((/* implicit */unsigned short) ((5282368749360141345ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (arr_9 [i_1 + 1] [i_1 + 2] [i_8 + 1]))))));
                    }
                    for (long long int i_14 = 2; i_14 < 18; i_14 += 4) /* same iter space */
                    {
                        var_21 += ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) arr_46 [i_8] [i_14 - 2] [i_5] [i_5])));
                        arr_49 [i_1] [i_5] [i_8 - 1] [i_10] [i_5] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)16116)), (1652204813U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5))));
                        arr_50 [i_1] [i_1] [i_8] [i_10] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-23185)), (arr_9 [i_5] [i_5] [i_14])))) + (var_0)))) && (((/* implicit */_Bool) var_4))));
                    }
                    for (long long int i_15 = 2; i_15 < 18; i_15 += 4) /* same iter space */
                    {
                        arr_55 [i_15] [i_10] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_25 [i_1] [i_1] [i_1] [8LL]))) & (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) arr_9 [i_5] [(short)7] [i_5]))))) > (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_4)) - (19497))))))))));
                        var_22 = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_13 [i_1] [i_1] [i_1 - 2] [i_8 + 1])))));
                        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)124)) : (2147483647)));
                        arr_56 [i_15] [i_10] [i_8] [i_5] [i_1 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5]))));
                    }
                    arr_57 [i_8] [i_8] [i_5] [i_1 + 4] = ((/* implicit */unsigned int) var_7);
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_3))) ? (((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)49436)))) : (arr_36 [i_1 - 2] [i_8 + 4] [i_10] [i_8 + 4])))) ? (((unsigned long long int) (~(((/* implicit */int) arr_26 [i_1 + 4] [i_1 + 2] [4ULL] [4ULL]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_47 [i_8 - 2] [i_5] [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                }
                for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) arr_13 [i_1] [i_1 + 1] [i_1] [i_1]);
                    arr_61 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1 + 3] = (-(((/* implicit */int) ((short) (short)-23178))));
                    arr_62 [i_1] [i_1] [i_1 + 4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)23209)) + (((/* implicit */int) (signed char)-19))))) ? (((((/* implicit */_Bool) arr_8 [i_5] [i_8 + 4] [i_8 + 1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_8 [i_1] [i_5] [i_8 + 4])))) : (169803180)));
                }
                arr_63 [i_8 + 1] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_1 - 2]))));
                var_26 = ((((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) 599561405)) : (arr_11 [2LL] [2LL] [i_8]))) != (((/* implicit */unsigned int) ((int) var_4))))) ? (((/* implicit */int) (short)-4131)) : (((((/* implicit */int) (short)23181)) << (((((/* implicit */int) var_8)) - (221))))));
            }
            /* vectorizable */
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
            {
                arr_67 [i_1 - 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 2] [i_1 - 2]))) != ((-(arr_24 [1] [i_5] [i_1 - 1])))));
                arr_68 [i_1 + 2] [i_5] [i_17] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (short)-27761)) || (((/* implicit */_Bool) (signed char)77)))));
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    arr_73 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_54 [i_18] [i_17] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) ((short) (short)23220)))));
                    var_27 ^= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_10))) + (((/* implicit */int) arr_46 [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 3]))));
                    arr_74 [i_1] [i_1] [i_1] [i_18] [i_1 + 2] = ((/* implicit */unsigned int) arr_12 [i_5] [i_5] [i_1]);
                }
            }
            for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */short) max((((((((int) arr_28 [i_19] [i_19] [i_5] [i_1] [i_1])) + (2147483647))) >> (((max((arr_24 [i_19] [i_5] [i_1]), (((/* implicit */long long int) var_2)))) - (51LL))))), (((/* implicit */int) arr_76 [i_1] [i_19]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_20 = 1; i_20 < 18; i_20 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) ((short) (unsigned short)49419));
                        var_30 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_12 [i_5] [i_19] [i_21])))) % (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)102)))))));
                    }
                    for (unsigned char i_22 = 0; i_22 < 20; i_22 += 4) 
                    {
                        arr_86 [i_1] [i_20 + 1] [i_20 + 2] [i_20] [i_19] [i_5] [i_1] = ((/* implicit */unsigned short) ((long long int) arr_59 [i_20] [i_20 + 2] [i_20] [i_20 + 2]));
                        var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) arr_75 [i_20 + 1] [i_20 + 1] [i_20 - 1])) : (((/* implicit */int) arr_75 [i_20 - 1] [i_20 - 1] [i_20 + 1]))));
                    }
                    arr_87 [i_20] [6] [i_5] [i_1] = ((/* implicit */unsigned int) (signed char)0);
                    var_32 += ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])) * (((/* implicit */int) (unsigned short)25768))));
                }
                for (unsigned int i_23 = 1; i_23 < 18; i_23 += 4) /* same iter space */
                {
                    arr_90 [(unsigned short)15] [i_5] [i_19] [i_23] = ((/* implicit */long long int) var_9);
                    var_33 = ((/* implicit */signed char) min((((/* implicit */long long int) (short)-7572)), (arr_24 [i_1] [i_1] [i_1 + 4])));
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_84 [i_1] [i_1]))))) : (((/* implicit */int) var_10)))))));
                    var_35 = ((/* implicit */unsigned int) (-(var_6)));
                }
                for (unsigned int i_24 = 1; i_24 < 18; i_24 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_25 = 3; i_25 < 19; i_25 += 4) 
                    {
                        arr_97 [i_1 + 1] [i_5] [i_5] [i_5] [i_25] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned char) var_8));
                        arr_98 [i_1 + 4] [i_5] [i_19] [i_24 + 1] [i_1 + 4] [i_1] [i_25] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_58 [11ULL] [i_24 + 1] [i_24 + 1] [i_24 - 1] [i_24 - 1]))))), (((long long int) var_2))));
                    }
                    /* vectorizable */
                    for (signed char i_26 = 1; i_26 < 19; i_26 += 2) 
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) 2003751715)) ? (((/* implicit */int) (unsigned short)39776)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                        arr_101 [i_1] [i_1 + 2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (short)32740)) * (((/* implicit */int) (signed char)(-127 - 1))))));
                    }
                    for (int i_27 = 1; i_27 < 19; i_27 += 2) 
                    {
                        arr_104 [i_1] [i_5] [i_24] [i_24] [i_5] [i_1] = ((/* implicit */long long int) arr_34 [i_1] [i_19] [i_19]);
                        var_37 -= ((/* implicit */unsigned long long int) min((((((((/* implicit */int) arr_32 [i_1] [i_5] [i_19] [i_24 + 2] [i_27] [i_27])) + (2147483647))) << (((((((/* implicit */int) arr_32 [i_27 - 1] [i_24 + 1] [i_19] [i_19] [i_5] [i_1])) + (5553))) - (4))))), ((-(((/* implicit */int) arr_25 [i_1] [i_5] [i_24] [(short)15]))))));
                    }
                    for (unsigned long long int i_28 = 1; i_28 < 19; i_28 += 1) 
                    {
                        arr_107 [i_1] [i_1] [i_1] [i_19] [i_24 + 2] [i_1] = arr_105 [i_1 + 4] [i_1 + 4] [i_19] [i_19] [i_19] [8] [i_1 - 2];
                        arr_108 [i_1] [i_5] [i_19] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_105 [i_1 + 4] [i_1 + 4] [i_1] [i_1] [i_1] [i_1] [(signed char)8])) : (((/* implicit */int) arr_105 [i_1 + 1] [2] [i_1] [i_1] [i_1 + 3] [i_1 + 1] [i_1]))))) != (((long long int) arr_105 [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1] [i_1 + 4] [i_1] [i_1]))));
                    }
                    arr_109 [i_1] [i_1] [i_19] [i_19] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_64 [i_1 - 2] [i_1])) && (((/* implicit */_Bool) arr_64 [i_1 - 2] [(unsigned char)19]))))));
                }
                var_38 *= ((/* implicit */unsigned char) arr_72 [i_1] [i_1] [i_19] [i_1] [i_19] [i_19]);
            }
            arr_110 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) 1);
            /* LoopSeq 1 */
            for (unsigned long long int i_29 = 0; i_29 < 20; i_29 += 4) 
            {
                arr_113 [i_1] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
                /* LoopNest 2 */
                for (signed char i_30 = 0; i_30 < 20; i_30 += 4) 
                {
                    for (signed char i_31 = 0; i_31 < 20; i_31 += 4) 
                    {
                        {
                            arr_118 [i_1] [i_5] [i_5] [i_1] [i_31] = ((/* implicit */long long int) ((_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_102 [i_1 + 3] [i_5] [i_29] [i_30]))))));
                            var_39 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) 8355840)) : (min((arr_30 [i_31] [i_5] [i_29] [i_5]), (((/* implicit */unsigned long long int) var_10))))))) || (((/* implicit */_Bool) arr_6 [i_1]))));
                        }
                    } 
                } 
            }
            arr_119 [i_1] [(unsigned short)3] [i_1 - 1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_9 [i_5] [i_5] [i_5])) & (3745583074384612134LL)))) | (var_0))));
        }
    }
    var_40 &= ((/* implicit */unsigned long long int) var_1);
    var_41 = ((/* implicit */short) var_6);
}
