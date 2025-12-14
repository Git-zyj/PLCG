/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140035
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
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) (((_Bool)1) ? (-466130778) : (((/* implicit */int) (short)8565))));
                            var_20 = ((unsigned char) (_Bool)1);
                        }
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_16 [i_0 + 2] [i_0] [i_0 - 3] [i_0] [i_3]))));
                            var_22 = (((_Bool)0) ? (((/* implicit */unsigned int) 0)) : (3752814848U));
                            var_23 = ((/* implicit */_Bool) (+(2147483647)));
                            var_24 = ((/* implicit */unsigned long long int) ((long long int) ((signed char) 17739257933441412823ULL)));
                            var_25 = ((/* implicit */long long int) ((unsigned char) var_17));
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                        {
                            var_26 += ((/* implicit */int) ((3474446968344221609ULL) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (17228868682779875150ULL)))));
                            var_27 = ((/* implicit */short) var_6);
                        }
                        var_28 = ((/* implicit */unsigned long long int) arr_10 [(unsigned char)6] [i_3]);
                        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_1] [i_1] [i_0]))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (3474446968344221609ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [1ULL] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) : (((unsigned int) arr_1 [i_0]))));
                        var_31 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3]))));
                    }
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) var_8);
                            var_33 -= ((/* implicit */long long int) var_14);
                        }
                        /* vectorizable */
                        for (long long int i_9 = 3; i_9 < 22; i_9 += 1) 
                        {
                            var_34 = ((/* implicit */short) ((int) arr_11 [i_0] [i_0 + 1]));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (-6504803928179792872LL)));
                        }
                        for (unsigned short i_10 = 2; i_10 < 20; i_10 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned int) min((((unsigned char) (unsigned char)236)), (((/* implicit */unsigned char) ((_Bool) var_9)))));
                            var_37 ^= ((/* implicit */unsigned short) arr_4 [i_0 + 1]);
                            var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((3474446968344221609ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1980908750U)) ? (2147483647) : ((-2147483647 - 1))))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */int) var_9);
                            var_40 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                            var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3474446968344221609ULL))));
                            var_42 = ((/* implicit */unsigned char) min(((-(1217875390929676465ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-10)) / (((/* implicit */int) (unsigned char)224)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                        {
                            var_43 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_12] [i_12] [i_2] [i_7] [i_1])) <= (((/* implicit */int) var_18))))) | (((/* implicit */int) arr_19 [i_0 + 1] [i_1]))));
                            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_1 [i_0 - 1]))));
                        }
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) arr_37 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 2])), (644039610)))) + (arr_21 [i_7] [i_0] [i_0] [19LL])));
                            var_46 = ((/* implicit */signed char) arr_27 [i_13] [(unsigned char)14] [i_7] [i_2] [14] [i_1] [3]);
                            var_47 = ((/* implicit */unsigned char) arr_3 [14ULL]);
                        }
                        var_48 = ((/* implicit */_Bool) (((-(var_4))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (arr_8 [i_0] [i_1] [i_2] [13LL]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned char) 14972297105365330006ULL);
                        var_50 = ((/* implicit */long long int) 644039610);
                        var_51 = ((/* implicit */int) (_Bool)1);
                        var_52 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_11)), (var_12))))) + (35465847065542656ULL))), (((/* implicit */unsigned long long int) ((long long int) ((signed char) arr_32 [i_0] [i_1] [i_1] [i_1] [i_0] [i_14]))))));
                    }
                    var_53 = ((/* implicit */signed char) (+(0LL)));
                }
            } 
        } 
    } 
    var_54 *= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (signed char i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 4) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
                        {
                            {
                                var_55 = ((((/* implicit */_Bool) var_16)) ? (-975498718) : (((/* implicit */int) arr_53 [i_15] [i_16] [i_17] [i_18] [i_16])));
                                var_56 = ((/* implicit */long long int) ((((_Bool) (-(-1LL)))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 850589681U)), (arr_30 [i_16] [i_16])))), ((-(var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            }
                        } 
                    } 
                    var_57 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_15 [i_17] [i_16] [i_16] [2ULL] [i_17])))) + (((/* implicit */int) ((((/* implicit */int) ((short) (short)-3089))) < (((/* implicit */int) ((_Bool) (_Bool)0))))))));
                }
            } 
        } 
    } 
    var_58 = ((/* implicit */long long int) max((var_58), (((/* implicit */long long int) var_11))));
    /* LoopNest 2 */
    for (signed char i_20 = 0; i_20 < 23; i_20 += 1) 
    {
        for (short i_21 = 0; i_21 < 23; i_21 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    for (unsigned char i_23 = 0; i_23 < 23; i_23 += 4) 
                    {
                        {
                            var_59 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_20] [i_21] [i_21] [(signed char)8] [i_23]))));
                            var_60 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (_Bool)0))))))) >= (((long long int) ((unsigned long long int) var_14)))));
                        }
                    } 
                } 
                var_61 = ((/* implicit */unsigned long long int) arr_40 [i_21]);
            }
        } 
    } 
}
