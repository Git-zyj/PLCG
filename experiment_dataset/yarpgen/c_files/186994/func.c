/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186994
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
    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
    var_14 &= ((/* implicit */int) (!(((/* implicit */_Bool) 380458617729949787LL))));
    var_15 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 0U))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_5);
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_13 [i_2] [i_3] = ((/* implicit */unsigned short) ((var_8) <= (((/* implicit */int) ((((/* implicit */_Bool) (~(2147483647)))) && (((/* implicit */_Bool) min(((unsigned char)1), ((unsigned char)199)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] = ((arr_4 [i_1 + 1]) ? (var_8) : (var_5));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))));
                            arr_20 [i_1] [i_2] [i_3] [i_4] [(unsigned char)8] [i_1 - 2] = ((/* implicit */unsigned long long int) var_9);
                            var_17 = ((/* implicit */long long int) var_7);
                        }
                        arr_21 [i_4] [i_3] [i_2] [i_1 - 2] = ((/* implicit */long long int) arr_4 [i_1 - 2]);
                    }
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        arr_25 [i_6] [i_6] = ((/* implicit */short) arr_6 [i_1 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */int) var_1);
                            var_19 = ((/* implicit */int) (unsigned char)3);
                            var_20 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) ? (var_9) : (arr_14 [i_6 - 1] [i_6] [i_1 + 1]))), ((~(-2147483647)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_10))));
                                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_9] [i_2] [i_2]))))), (((((/* implicit */int) (unsigned char)111)) / (((/* implicit */int) (unsigned char)127)))))))));
                                arr_34 [i_9] [i_9] [i_8] [i_3] = var_4;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned long long int) arr_0 [i_1 - 1]);
                                var_24 ^= ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) ((2147483647) < (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) var_10))));
            var_26 = (+(((/* implicit */int) (unsigned short)0)));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_1 - 2] [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_12] [i_12])));
            arr_43 [i_12] = ((/* implicit */unsigned int) ((-1190250902) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)111)))))));
            /* LoopNest 3 */
            for (unsigned char i_13 = 2; i_13 < 10; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (long long int i_15 = 1; i_15 < 12; i_15 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (arr_49 [i_13 + 4] [i_13] [i_13]))))));
                            arr_51 [i_1 + 1] [(unsigned short)9] [i_1 + 1] [i_1] [i_1 - 1] = ((/* implicit */int) arr_18 [(unsigned char)0] [(unsigned char)0] [i_13 - 2] [(unsigned char)0] [i_15]);
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    for (signed char i_16 = 0; i_16 < 17; i_16 += 1) 
    {
        arr_54 [i_16] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)205)))) ? (((/* implicit */int) arr_53 [i_16])) : (((/* implicit */int) var_6))));
        arr_55 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_16])) * (((((/* implicit */_Bool) (short)-16615)) ? (((/* implicit */long long int) arr_1 [i_16])) : (-2177111298566333147LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_16])))))))) : (((((/* implicit */int) (_Bool)1)) - (((((/* implicit */_Bool) (short)3587)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_16]))))))));
    }
    for (unsigned int i_17 = 1; i_17 < 20; i_17 += 1) 
    {
        arr_59 [11ULL] = ((/* implicit */int) var_3);
        arr_60 [i_17 - 1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2003658426726524564LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)));
        /* LoopNest 2 */
        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            for (int i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_20 = 3; i_20 < 21; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 1; i_21 < 21; i_21 += 2) 
                        {
                            {
                                arr_75 [i_17 + 2] = ((/* implicit */unsigned char) (+(max((arr_68 [i_17] [i_17 - 1]), (((/* implicit */unsigned int) var_3))))));
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) 287104476244869120ULL))))) < (((/* implicit */int) (short)29816)))))));
                                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_76 [i_17] [1U] [4U] [7ULL] = ((/* implicit */unsigned char) var_0);
                    var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_73 [19U] [19U] [i_17 + 1] [i_18])) || (((/* implicit */_Bool) -421986687))))), (var_6)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_22 = 0; i_22 < 22; i_22 += 4) 
                    {
                        arr_79 [i_17] = ((/* implicit */unsigned int) arr_64 [i_18] [i_17 - 1] [i_17]);
                        /* LoopSeq 2 */
                        for (short i_23 = 0; i_23 < 22; i_23 += 1) 
                        {
                            var_32 ^= ((/* implicit */int) arr_61 [i_19] [i_18] [i_19]);
                            arr_82 [i_23] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_65 [i_22]))));
                        }
                        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                        {
                            var_33 = ((/* implicit */int) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_86 [i_18] [i_18] [i_18] [i_17 - 1] |= ((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */int) (unsigned char)57))));
                        }
                        arr_87 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((((-1069727785) + (1069727812))) - (27)))));
                        arr_88 [i_17] [(short)18] [i_17 + 2] [i_17 - 1] [i_17] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_19]))))) ? (((/* implicit */long long int) arr_68 [i_17 - 1] [i_17])) : (2590980800953368216LL)));
                        var_34 = ((/* implicit */long long int) (short)25827);
                    }
                }
            } 
        } 
    }
}
