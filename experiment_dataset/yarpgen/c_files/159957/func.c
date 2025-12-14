/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159957
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
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(var_12)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (14296061370471299036ULL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1 + 3] = (+(((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)24838)))) % (1152886320234758144LL))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) (short)2795)), (8388607)));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_8)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (var_5) : (arr_1 [i_2] [i_1 - 1]))), (((/* implicit */unsigned int) (unsigned short)55859)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)63))));
                                arr_19 [i_0] [i_1] [i_2] [i_2] [i_4 - 3] [i_4 + 2] [i_5] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 384)) ? (arr_9 [i_0] [i_2] [i_4] [i_1]) : (arr_2 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_2] [i_1] [i_0] [i_1 + 2]))) : (var_7))) : (((/* implicit */unsigned int) var_10))))));
                                arr_20 [i_0] [i_1 + 3] [i_0] [i_0] [i_1 + 3] [i_0] [i_2] |= ((/* implicit */unsigned short) (+((-(arr_6 [i_0] [i_1 + 1] [i_0] [i_0])))));
                                arr_21 [i_1] [i_1 + 2] = ((/* implicit */long long int) arr_2 [i_1] [i_1 + 3]);
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((((/* implicit */_Bool) min((arr_16 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5] [i_5]), (((/* implicit */unsigned long long int) 0U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) : (((var_8) << (((((var_12) + (1713509183))) - (62))))))))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1] [(unsigned short)0] [i_1 - 2] [i_1] [8] [i_1])) && (((/* implicit */_Bool) arr_2 [i_1] [i_1]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (+(var_10)))) || (((/* implicit */_Bool) max((var_7), (var_11)))))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(arr_1 [i_2] [i_1])))))) ? ((-(((unsigned int) var_3)))) : ((-(arr_1 [(short)9] [i_2])))));
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((int) 0ULL))));
                }
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    arr_28 [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) var_0);
                    arr_29 [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)206);
                    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_14))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_6] [i_1] [i_0]), (var_4)))), (var_2))))));
                }
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_37 [i_1] [i_1] = ((/* implicit */unsigned short) var_5);
                                var_20 &= (-(((unsigned long long int) var_6)));
                                arr_38 [i_1] [i_1] = ((/* implicit */short) max((4294967295U), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) 1702307910)) : (var_7)))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (unsigned short)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) <= ((+(var_5))))))) : (((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1] [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_1 - 1] [i_1] [i_1] [i_1 - 1]))) : (arr_16 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1 + 3])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)125))) || (((/* implicit */_Bool) var_11))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_7))));
                    }
                    for (signed char i_11 = 4; i_11 < 12; i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(arr_0 [i_1 - 1])));
                        arr_44 [i_1] [i_1] [i_11 - 3] = ((/* implicit */long long int) (+(min((((int) (_Bool)1)), (((/* implicit */int) (short)-10869))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) -209107964))));
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 4; i_12 < 11; i_12 += 2) 
                        {
                            arr_47 [i_12] [i_11] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */long long int) var_10)) : (arr_10 [i_1] [i_12] [i_12] [i_1] [i_12] [i_11 - 2]))), (((((/* implicit */_Bool) (-(arr_16 [i_0] [i_0] [i_1] [7] [i_11] [i_12 - 1])))) ? (((/* implicit */long long int) arr_32 [i_11 + 1] [i_7] [i_7] [(unsigned short)10] [i_1] [i_1 - 2])) : (arr_10 [i_0] [i_0] [(unsigned short)7] [i_1] [i_11 + 1] [i_12 - 4])))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 17803928378985571905ULL))) || (((/* implicit */_Bool) arr_27 [i_12 - 4] [i_12 - 3] [i_12] [i_1]))));
                            arr_48 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((arr_40 [i_11] [i_1] [i_7] [i_11 - 1] [i_1] [i_7]) & (((/* implicit */unsigned long long int) arr_27 [i_1] [i_7] [i_1] [i_1]))))));
                            arr_49 [i_12] [i_1] [i_7] [i_1] [i_0] = ((/* implicit */unsigned int) arr_42 [i_12 - 2] [i_11] [i_7] [7] [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_0]))) + (arr_17 [6] [i_1 + 1] [i_7] [i_13] [i_13]))))));
                            arr_52 [i_0] [i_1] [i_0] [i_13] = ((/* implicit */unsigned int) var_9);
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_8))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) var_1);
                            arr_55 [i_0] [i_7] [i_7] [i_11] [i_1] [i_1] = ((/* implicit */int) (+(max((((/* implicit */unsigned int) -1702307929)), (4294967295U)))));
                        }
                        arr_56 [i_0] [i_1] [i_0] [i_11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_7] [i_1]))))) ? (((unsigned int) (unsigned char)128)) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1] [i_7] [i_1 - 1] [i_1])))))));
                    }
                    for (signed char i_15 = 4; i_15 < 12; i_15 += 1) /* same iter space */
                    {
                        arr_59 [i_1] [4ULL] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) -4LL));
                        arr_60 [i_0] [i_1 - 2] [i_1] [i_15 - 2] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)124), ((unsigned char)140)))) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [12ULL] [i_0] [i_1])) + (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))))))));
                        arr_61 [i_15] [i_1] [i_7] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) 429068694841010730ULL));
                        arr_62 [i_0] [i_0] [i_7] [i_1 - 1] [i_1] [i_1 - 2] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_46 [i_15 + 1] [i_15 - 3] [i_15] [i_15 - 3] [i_0])) && (((/* implicit */_Bool) var_7)))) ? (min((((/* implicit */unsigned int) arr_32 [i_15 - 1] [i_1] [i_15 - 1] [i_0] [i_1 + 2] [i_15])), (arr_46 [i_15] [i_15] [i_15 - 1] [i_15 - 1] [i_7]))) : (((arr_30 [i_1 + 1] [0U]) ? (arr_46 [i_15] [i_1] [i_1] [i_15 - 3] [i_1]) : (var_7)))));
                        arr_63 [i_1] = ((/* implicit */_Bool) (-((-(min((var_2), (arr_2 [i_1] [i_1 + 2])))))));
                    }
                }
            }
        } 
    } 
    var_29 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)131)) ? (-1702307916) : (1702307916))), (((/* implicit */int) ((short) (+(-1702307916)))))));
    var_30 = ((/* implicit */int) max((((/* implicit */long long int) var_11)), ((+(min((((/* implicit */long long int) var_12)), (var_8)))))));
}
