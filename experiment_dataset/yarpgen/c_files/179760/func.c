/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179760
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [4] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_7);
                    var_10 += ((/* implicit */long long int) (~(((/* implicit */int) ((var_6) && (((/* implicit */_Bool) var_8)))))));
                    arr_10 [(unsigned char)18] [i_1] [i_2] = ((/* implicit */unsigned short) ((int) -2147483644));
                    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) -2147483647))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_3] [i_4] [(short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_7)) : (var_0)));
                                arr_20 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8659))) : (1631192786U))))));
                            }
                        } 
                    } 
                    arr_21 [i_1] &= ((/* implicit */unsigned short) ((var_8) | (var_3)));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        for (int i_7 = 3; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_12 |= ((/* implicit */unsigned char) var_1);
                                arr_28 [i_1] [i_3] [i_1] = var_1;
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)88))));
                        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                    }
                    for (int i_10 = 2; i_10 < 19; i_10 += 3) 
                    {
                        var_15 *= ((/* implicit */_Bool) var_7);
                        arr_36 [i_0] [14U] [i_8] [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) var_7);
                    }
                    arr_37 [i_0 + 1] [i_1] [i_8] [i_8] &= ((/* implicit */long long int) arr_23 [i_0 - 4] [i_0 - 1] [i_0 - 4] [i_1] [i_8] [i_8]);
                    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (var_3)));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_5 [18LL] [18LL])) / (var_5)))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((/* implicit */int) (short)-25217)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) (short)25226)))))));
                        arr_52 [i_11] = ((/* implicit */long long int) arr_5 [5] [5]);
                        arr_53 [i_1] [i_14] = ((/* implicit */short) arr_25 [i_1] [2U] [i_11] [i_11]);
                        arr_54 [i_0 - 2] [i_0 - 2] [4ULL] [i_1] [i_1] [1U] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        arr_55 [i_0] [i_1] [i_0] [i_14] |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)25200)) >= (((/* implicit */int) (unsigned short)65535)))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    for (short i_16 = 1; i_16 < 19; i_16 += 3) 
                    {
                        {
                            arr_61 [i_1] [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) min(((short)25235), (((/* implicit */short) (!(((/* implicit */_Bool) 384244307U)))))));
                            arr_62 [i_0] [i_15] [i_15] [i_15] [i_16] = ((min((min((var_1), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) var_2))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (var_0) : ((~(((/* implicit */int) (signed char)-20))))))));
                        }
                    } 
                } 
                arr_63 [i_0] = ((/* implicit */_Bool) min((7412037021687887963LL), (((/* implicit */long long int) (unsigned short)7))));
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned int) var_8);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) <= (((/* implicit */int) var_2))));
    var_22 &= ((/* implicit */_Bool) ((((var_5) + (2147483647))) >> (((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_8)))) ? (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_4)))) + (1063204815)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            arr_70 [i_18] = ((/* implicit */short) var_7);
            /* LoopNest 2 */
            for (unsigned short i_19 = 3; i_19 < 23; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    {
                        arr_77 [i_17] [i_19] [i_20] = ((/* implicit */unsigned short) 15);
                        arr_78 [i_19] = ((/* implicit */int) var_6);
                        var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (var_3) : (((/* implicit */unsigned long long int) ((int) 2147483643))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? ((+(((/* implicit */int) (unsigned short)52069)))) : (((/* implicit */int) var_2)))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-104), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))))) ? (min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-80)))));
        }
        /* LoopSeq 2 */
        for (short i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)23051))));
            arr_81 [i_17] [i_17] [i_21] = ((/* implicit */unsigned char) var_3);
        }
        /* vectorizable */
        for (short i_22 = 1; i_22 < 21; i_22 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_23 = 4; i_23 < 21; i_23 += 1) /* same iter space */
            {
                arr_88 [17ULL] [i_22] [i_23] = ((/* implicit */short) var_7);
                var_26 += ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                var_27 = ((/* implicit */int) arr_74 [i_17] [i_22] [i_17]);
                var_28 = ((/* implicit */unsigned short) var_5);
                arr_89 [i_17] [i_22] [i_23] = ((/* implicit */unsigned short) ((((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) >= (var_3)));
            }
            for (unsigned char i_24 = 4; i_24 < 21; i_24 += 1) /* same iter space */
            {
                arr_92 [i_24] = ((/* implicit */unsigned char) (-(arr_76 [i_17] [i_24] [i_24])));
                arr_93 [2U] [i_22] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                arr_94 [i_24] [i_24] [i_24] [i_24] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)19671))));
                arr_95 [i_24] = ((/* implicit */unsigned short) arr_84 [i_22 - 1] [(short)7] [i_22 + 2] [i_24 + 1]);
            }
            for (unsigned char i_25 = 4; i_25 < 21; i_25 += 1) /* same iter space */
            {
                arr_99 [i_25] = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_90 [i_17] [i_22 + 2] [i_25]))) < (var_3)))));
                var_29 -= ((/* implicit */unsigned char) ((var_0) << (((arr_66 [i_25] [i_25 - 2]) - (15128604862937662607ULL)))));
                arr_100 [(unsigned short)3] [i_22] [i_25] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)35743))))));
            }
            for (unsigned char i_26 = 4; i_26 < 21; i_26 += 1) /* same iter space */
            {
                arr_103 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65530))));
                var_30 |= ((/* implicit */signed char) var_2);
            }
            var_31 -= ((/* implicit */unsigned long long int) (-((-(8051736892881472125LL)))));
            arr_104 [i_22 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_80 [i_22 + 2]))));
        }
    }
    for (unsigned short i_27 = 0; i_27 < 20; i_27 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_28 = 3; i_28 < 18; i_28 += 2) 
        {
            for (long long int i_29 = 4; i_29 < 19; i_29 += 2) 
            {
                for (unsigned int i_30 = 0; i_30 < 20; i_30 += 4) 
                {
                    {
                        var_32 = var_3;
                        arr_114 [i_27] [i_28] [i_29] [i_29] [(unsigned short)19] [i_30] &= ((/* implicit */signed char) var_7);
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */_Bool) ((unsigned short) var_9));
        arr_115 [i_27] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >= (max((arr_14 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]), (((/* implicit */unsigned long long int) var_7)))))))));
    }
}
