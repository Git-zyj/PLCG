/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156677
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */signed char) arr_2 [i_0] [i_1 - 1] [i_0]);
                            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(2101015091)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned short) -7781184786586305384LL)))));
                    var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (int i_6 = 4; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_4 - 1] [i_6])) : (((/* implicit */int) (unsigned short)65535))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) 436714033))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        var_20 += ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)24)) : (436714033)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_7] [i_8])) : (((/* implicit */int) arr_3 [i_1]))))) : (((long long int) -894007294)));
                        arr_27 [i_1] = ((/* implicit */signed char) arr_17 [i_0] [i_1] [i_7] [i_7] [(unsigned char)16]);
                    }
                    arr_28 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))) & (787639010U)))));
                    var_21 |= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        arr_37 [i_0] [i_1] [i_1] [i_9] [i_1] [i_10] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)72)) ? (12119443118289922944ULL) : (arr_5 [i_0] [i_1] [i_9] [i_10])))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1006383793916550338ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (5167673686152227029ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_10] [i_1] [i_1] [i_0]))) : (var_2)));
                        var_23 = ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) arr_18 [i_0] [i_1 - 2] [i_9] [i_1 - 2] [i_10] [i_9])) : (((/* implicit */int) arr_18 [(signed char)12] [i_1 + 1] [(signed char)12] [9] [i_9] [i_10])));
                        arr_38 [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_18 [i_0] [i_1] [i_9] [i_9] [i_10] [i_10]));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (1006383793916550340ULL) : (((/* implicit */unsigned long long int) 3507328285U))));
                    }
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2761322933U)) ? (-886899260) : (2147483647)));
                        var_26 = var_8;
                        var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) 1293953563)), (((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3507328286U)))));
                        arr_41 [i_0] [i_1] [i_1 - 2] [2LL] [i_1 - 2] [i_0] = ((/* implicit */signed char) ((unsigned short) min((max((var_5), (((/* implicit */unsigned int) arr_35 [i_11] [i_9] [i_0] [i_0])))), (((/* implicit */unsigned int) (unsigned short)25741)))));
                        var_28 = ((/* implicit */int) arr_3 [i_0]);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned int) var_8);
                        var_30 = ((/* implicit */_Bool) (signed char)38);
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((unsigned long long int) (signed char)82)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_1]), (((/* implicit */signed char) (_Bool)0))))))))) : (((/* implicit */int) (signed char)-31))));
                        var_32 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 + 1] [i_1 - 2]))) : (min((1696907416U), (((/* implicit */unsigned int) 1357588849)))))), (((/* implicit */unsigned int) max((var_8), (((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_45 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (signed char)-123);
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            {
                                arr_52 [(signed char)3] [i_1] [i_13] [i_1] [i_1 + 1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-23)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)253)) & (((/* implicit */int) arr_34 [i_14] [i_13 + 1] [i_9] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-2101015097)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_0])), ((unsigned short)39813)))) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_13])) ? (((/* implicit */long long int) max((var_9), (((/* implicit */int) arr_13 [0U] [i_0] [i_9] [i_0] [i_0]))))) : (((var_4) - (9223372036854775807LL)))))));
                                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)39817)) ? (((int) var_1)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_13 + 1] [i_14] [i_14]))))) : ((~(5405617530362214421LL)))));
                                var_34 = ((/* implicit */unsigned long long int) arr_51 [i_0] [i_1] [i_9] [i_13] [i_9] [i_1]);
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0]))));
                }
                /* LoopNest 3 */
                for (signed char i_15 = 2; i_15 < 19; i_15 += 4) 
                {
                    for (short i_16 = 3; i_16 < 20; i_16 += 4) 
                    {
                        for (long long int i_17 = 4; i_17 < 22; i_17 += 2) 
                        {
                            {
                                var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_39 [i_0] [i_1 + 1] [i_15 + 1] [i_16 + 1] [i_17])) : (max((((((/* implicit */_Bool) var_12)) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3425))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)94)))))))));
                                var_37 = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                arr_60 [i_1] = ((/* implicit */unsigned long long int) arr_58 [i_1] [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
    {
        for (unsigned char i_19 = 0; i_19 < 13; i_19 += 3) 
        {
            {
                var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_51 [i_18] [i_18] [i_18] [i_19] [i_19] [i_19]))))), (((((/* implicit */_Bool) arr_51 [i_18] [i_19] [i_19] [i_19] [i_18] [i_18])) ? (arr_11 [i_18] [i_18] [i_18] [i_19]) : (arr_11 [i_18] [i_18] [i_19] [i_19])))));
                var_40 = ((/* implicit */_Bool) ((signed char) ((_Bool) 875077658)));
                var_41 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_18] [i_19])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2101015091)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14534723368777820910ULL))))))) / (((/* implicit */int) ((signed char) arr_42 [i_19] [i_18] [i_18] [i_18])))));
            }
        } 
    } 
}
