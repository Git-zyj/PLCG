/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147465
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) max((var_5), (((/* implicit */short) var_9)))))))) >> (((((/* implicit */int) var_5)) - (262))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_3] [i_1 + 1] [i_1] &= ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_2]))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_11 += ((/* implicit */unsigned long long int) var_1);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0] = ((/* implicit */unsigned long long int) ((long long int) ((short) arr_6 [i_1] [i_1] [i_1])));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 1])) % (((/* implicit */int) var_4))));
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)0))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_12 &= ((/* implicit */signed char) ((_Bool) ((unsigned long long int) arr_10 [i_5])));
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */int) arr_19 [i_5] [i_1] [i_5] [i_5] [i_5]);
                            var_13 = ((/* implicit */short) var_4);
                            arr_21 [i_1] [i_0] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_2] [6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)45165))))) ? (((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_0]))) : (((/* implicit */int) arr_6 [8] [i_1] [12LL]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) : (0LL)));
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((signed char) var_5)))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) arr_8 [i_0] [i_0]);
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_7] [i_0] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_9] [i_8] [i_0] [(unsigned short)1]))) : (arr_18 [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (int i_10 = 1; i_10 < 12; i_10 += 1) 
                        {
                            var_17 = ((/* implicit */int) arr_14 [i_0] [i_9] [i_8] [i_7] [i_10] [i_0] [i_10 + 1]);
                            arr_35 [i_0] [i_7] [i_0] [i_0] [i_9] [i_10] = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) + (var_8))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (var_8)))) ? (var_2) : (((/* implicit */long long int) arr_23 [i_0] [i_7] [i_8] [i_9] [i_9])))))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 4; i_12 < 10; i_12 += 4) /* same iter space */
                        {
                            arr_40 [i_0] [i_7] [i_0] [i_7] [i_12] = ((/* implicit */int) var_6);
                            var_19 += ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_37 [(unsigned char)9] [i_7] [i_7])) ? (var_8) : (((/* implicit */unsigned long long int) var_2)))));
                            var_20 = ((/* implicit */signed char) var_5);
                            var_21 ^= ((/* implicit */long long int) ((arr_19 [i_0] [i_7] [i_8] [i_11] [i_8]) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        }
                        for (unsigned short i_13 = 4; i_13 < 10; i_13 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((arr_33 [i_13 - 2] [i_13 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_36 [i_0] [i_7] [i_0] [i_13]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))))));
                            arr_45 [i_0] [i_11] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)57431)) ? (((/* implicit */int) (unsigned short)56663)) : (((/* implicit */int) (signed char)48)))) >> (((((/* implicit */int) var_4)) - (152)))));
                        }
                        var_23 ^= ((/* implicit */_Bool) arr_37 [i_0] [i_7] [i_8]);
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            arr_48 [i_11] [(signed char)2] [2] [i_11] [i_14] [i_14] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (1923861313)));
                            arr_49 [i_0] [i_0] [i_8] [i_11] [i_11] [i_0] = ((/* implicit */unsigned short) arr_47 [i_14] [i_0] [i_11] [i_8] [i_7] [i_0] [i_0]);
                        }
                        for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            arr_52 [i_0] = ((/* implicit */signed char) var_4);
                            var_24 += ((/* implicit */short) ((unsigned char) arr_43 [i_15] [i_11] [i_8] [i_8] [i_7] [i_0]));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            arr_55 [i_0] [i_0] [i_0] [(signed char)11] [(short)5] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) & (((/* implicit */int) var_4))))));
                            var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65521))));
                        }
                        for (short i_17 = 0; i_17 < 13; i_17 += 4) 
                        {
                            arr_59 [i_0] [i_7] = ((/* implicit */unsigned short) ((arr_7 [i_17] [i_17] [i_17] [i_17]) ^ (arr_7 [i_0] [i_8] [i_8] [i_17])));
                            var_26 ^= ((/* implicit */unsigned short) ((unsigned long long int) var_2));
                            var_27 &= ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */int) (signed char)-51)) + (2147483647))) >> (((10524931080687772279ULL) - (10524931080687772277ULL))))));
                            var_28 = ((/* implicit */long long int) ((arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_29 = ((/* implicit */unsigned long long int) ((arr_1 [10ULL]) || (arr_1 [i_0])));
                        }
                    }
                    for (short i_18 = 1; i_18 < 11; i_18 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_7] [i_18 + 2] [i_18])) ? (arr_30 [i_0] [i_8] [i_18] [i_18 + 1] [i_18]) : (arr_30 [i_18] [i_18] [i_18] [i_18 + 1] [i_18]))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_18 + 1] [i_18 + 1] [i_18 + 2] [i_18 + 2])) || (((/* implicit */_Bool) arr_44 [i_18 + 1] [i_18 + 1] [i_18 + 2] [i_18 + 2]))));
                        /* LoopSeq 3 */
                        for (long long int i_19 = 4; i_19 < 12; i_19 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */signed char) ((short) arr_41 [i_0] [i_7] [i_8] [i_19]));
                            var_33 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(1LL)))) >= (arr_54 [1ULL] [1ULL] [i_8] [1ULL] [i_19])));
                            arr_66 [i_0] [i_18] [i_18] [i_0] [i_7] [i_0] = ((/* implicit */_Bool) arr_29 [i_19] [i_18] [i_7] [(signed char)12]);
                        }
                        for (long long int i_20 = 4; i_20 < 12; i_20 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned short) ((arr_46 [i_0] [i_18 - 1] [i_0] [i_18] [i_20 - 3]) ^ (arr_46 [i_0] [i_18 + 2] [i_0] [i_18] [i_20 - 3])));
                            var_35 ^= ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) - (((arr_64 [i_0] [i_0] [i_8] [i_18] [i_20 - 1]) - (((/* implicit */long long int) arr_43 [8LL] [i_20] [i_0] [i_8] [i_7] [i_0])))));
                            var_36 = ((/* implicit */int) ((signed char) var_2));
                        }
                        for (long long int i_21 = 4; i_21 < 12; i_21 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned short) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7])))));
                            var_38 += var_1;
                            var_39 = ((/* implicit */signed char) var_0);
                            arr_72 [i_0] = ((/* implicit */long long int) var_6);
                        }
                    }
                    for (unsigned short i_22 = 0; i_22 < 13; i_22 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) | (((((/* implicit */int) (signed char)31)) * (((/* implicit */int) arr_3 [i_8]))))));
                        arr_76 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_69 [i_0] [i_0] [i_7] [i_7] [i_7] [i_8] [i_22])))) ^ (arr_47 [i_7] [i_0] [i_7] [i_7] [i_7] [i_7] [i_7])));
                    }
                    arr_77 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */short) ((arr_28 [i_0] [i_0]) >> (((var_8) - (13840027787003986343ULL)))));
                }
            } 
        } 
    }
}
