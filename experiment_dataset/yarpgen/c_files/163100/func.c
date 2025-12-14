/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163100
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_8 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)48)) ? (arr_2 [i_2]) : (((/* implicit */int) (unsigned short)15300)))), (((16383) * (((/* implicit */int) (unsigned short)18522))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
                            {
                                arr_11 [i_0 - 2] = ((/* implicit */signed char) var_1);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)1)), (((((/* implicit */int) (unsigned short)48666)) % (((/* implicit */int) (unsigned char)2))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                            {
                                arr_15 [i_5] [i_3] [i_2] [i_1 - 1] [i_0 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)34))));
                                var_20 = ((/* implicit */unsigned char) (+(4208499904730061350LL)));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                            {
                                arr_19 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)77)) || (((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_20 [i_0] = ((/* implicit */unsigned int) var_14);
                                var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_0 + 3] [i_0])) ? (32505856LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34)))));
                                arr_21 [i_6] [i_0] [i_2] [i_1] [i_0] |= ((/* implicit */int) (+(4859895228806182811LL)));
                                arr_22 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)25)) ? (4294967295U) : (((/* implicit */unsigned int) arr_2 [i_2]))))));
                            }
                            arr_23 [i_1 - 1] = ((/* implicit */unsigned int) (-(min((max((var_16), (9128334977845071502LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (2240407103U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))))))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (arr_10 [i_3] [i_2] [i_0])))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_7 = 3; i_7 < 12; i_7 += 2) 
                {
                    arr_27 [i_0 + 3] [i_1 + 1] [i_7] = var_14;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(((unsigned int) var_1)))))));
                        arr_31 [9ULL] [12U] [i_7] [i_7 + 1] [i_8] [i_8] = ((/* implicit */_Bool) 32505871LL);
                    }
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                {
                    arr_34 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) 3513072554U);
                    arr_35 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_13);
                }
                for (unsigned char i_10 = 4; i_10 < 12; i_10 += 1) 
                {
                    arr_38 [i_0] [i_1] [i_10] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (7173103392632606720ULL)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)23485)) : (((/* implicit */int) var_19))))))) ? ((+(var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                    arr_39 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)32830)) == (((/* implicit */int) (_Bool)0))));
                    arr_40 [i_10] [i_1] [i_0] [i_0] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1470))) : (15977539900006421531ULL));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        for (int i_12 = 3; i_12 < 10; i_12 += 2) 
                        {
                            {
                                arr_46 [i_0 + 2] [i_1] [i_1] [i_11] [i_12 + 2] = ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_6))))))) ? (((/* implicit */int) min(((unsigned short)1023), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (1447791564))))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_1))))))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23485))) : (32505871LL))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_11)))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) (unsigned short)8191)))))) > (((((/* implicit */_Bool) 3523970628U)) ? (((/* implicit */long long int) var_3)) : (var_17)))))))))));
                                var_25 &= ((/* implicit */short) max((((unsigned int) (unsigned char)127)), (((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned int) (unsigned char)66)), (var_18)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        arr_49 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_16)));
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            var_26 = ((/* implicit */int) ((unsigned short) 1048064LL));
            arr_53 [(unsigned char)6] [i_14] [i_13] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -32505872LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-6279272923877250014LL)))) ? (((long long int) var_4)) : ((~(var_17)))));
            arr_54 [i_13] = ((/* implicit */signed char) (~(((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))));
        }
        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 21; i_18 += 3) 
                    {
                        {
                            arr_67 [i_13] [i_16] [i_17] = ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_6)));
                            var_27 -= ((/* implicit */signed char) ((((/* implicit */int) arr_62 [i_18 + 1] [i_18 + 1] [i_16] [i_17] [i_18])) >= (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_68 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : ((-2147483647 - 1))))) % (((var_7) & (((/* implicit */unsigned int) var_1))))));
                var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7))));
                arr_69 [i_13] [i_13] = ((/* implicit */int) ((signed char) var_4));
            }
            for (short i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                arr_72 [i_19] [i_13] [i_13] [i_13] = 4823280757661772411LL;
                var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 0))) ^ (((/* implicit */int) var_0))));
            }
            var_30 = ((/* implicit */int) min((var_30), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
            var_31 ^= ((/* implicit */unsigned char) (~(var_8)));
        }
        arr_73 [i_13] = ((/* implicit */short) arr_65 [i_13] [i_13] [i_13]);
    }
    /* vectorizable */
    for (unsigned char i_20 = 4; i_20 < 15; i_20 += 3) 
    {
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (+((~(var_8))))))));
        /* LoopSeq 1 */
        for (unsigned char i_21 = 0; i_21 < 17; i_21 += 1) 
        {
            arr_78 [i_21] [i_21] = ((/* implicit */unsigned short) var_10);
            /* LoopSeq 1 */
            for (short i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                arr_81 [(unsigned char)16] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                var_33 ^= ((/* implicit */unsigned int) 269024038);
            }
            arr_82 [i_20] [i_21] = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
            arr_83 [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_12))));
        }
    }
}
