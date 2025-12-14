/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133576
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (~(arr_0 [i_0] [i_0])));
        arr_2 [i_0] = ((arr_0 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) 831761836U);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) arr_4 [19U]);
        var_17 = ((/* implicit */long long int) 2349839907U);
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)24669);
            var_18 = ((/* implicit */unsigned int) arr_7 [i_1]);
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_19 [i_1] [i_2] [i_3] [5ULL] [(unsigned char)0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((-359088293) - (359088288)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [10LL] [i_2]))) : (((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_4] [i_5]))) : (-103284320697581996LL)))));
                            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_2] [i_4] [i_5])))) || (((/* implicit */_Bool) ((unsigned int) arr_14 [i_1] [i_1] [i_3] [(signed char)4] [i_1])))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_5))) ? (((/* implicit */int) ((917256919) == (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [(unsigned short)13]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)38329)) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_2] [i_2]))))));
        }
        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 1099881586085529403ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (572626594U)));
            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_4 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_18 [19LL] [i_1] [i_1] [19LL] [19LL] [i_6]))))));
            var_22 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_6] [i_1]))))));
        }
        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_25 [i_1] [i_7] = ((/* implicit */long long int) 9241267847269847655ULL);
            arr_26 [i_1] = ((/* implicit */long long int) 3941057541U);
            var_23 = arr_20 [i_1] [i_1];
        }
        /* LoopSeq 2 */
        for (long long int i_8 = 2; i_8 < 19; i_8 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 2; i_10 < 21; i_10 += 1) 
                {
                    var_24 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_5 [i_1]) + (((((/* implicit */int) var_7)) - (arr_7 [i_1])))))) : (((/* implicit */unsigned int) ((arr_5 [i_1]) - (((((/* implicit */int) var_7)) - (arr_7 [i_1]))))));
                    arr_35 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_12);
                    /* LoopSeq 2 */
                    for (signed char i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        arr_39 [i_1] = ((/* implicit */unsigned int) ((var_15) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8 + 1] [i_10 - 1] [i_10 + 1])))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)11))) : ((+(var_5)))));
                        var_26 = ((/* implicit */signed char) var_13);
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    for (int i_12 = 2; i_12 < 20; i_12 += 4) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) 9205476226439703962ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_4 [i_1]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48268))) : (var_15)))));
                        arr_44 [i_1] [16] [i_9] [i_10] [i_10] [i_8] = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)17268)) : (((/* implicit */int) var_3)))) + (((/* implicit */int) (short)3210))));
                    }
                }
                arr_45 [i_1] = var_15;
            }
            for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    for (int i_15 = 1; i_15 < 20; i_15 += 4) 
                    {
                        {
                            arr_53 [i_13] [i_13] [i_13] [i_1] [i_13 + 1] [11ULL] = (-(1862509231U));
                            arr_54 [i_8] [i_1] = ((_Bool) (+(var_8)));
                            var_29 = ((/* implicit */_Bool) ((unsigned short) arr_38 [i_14] [i_14] [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15 + 1] [i_15 - 1]));
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) var_1);
            }
            for (unsigned long long int i_16 = 2; i_16 < 21; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    for (unsigned int i_18 = 1; i_18 < 21; i_18 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) ((((var_8) - (((/* implicit */unsigned int) var_0)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)26129))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_1] [(signed char)8] [i_1] [i_16 + 1] [i_1] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) arr_40 [i_8 + 2] [i_16] [21ULL])) : (((((/* implicit */_Bool) arr_38 [i_18] [i_17] [i_1] [i_1] [i_16] [i_1] [i_1])) ? (arr_18 [i_16] [i_16] [i_1] [i_17] [3ULL] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_1] [i_8 + 2] [i_8 + 2] [i_17] [i_17])))))));
                            arr_64 [i_18] [14LL] [i_1] [i_1] [i_8] [14LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (1317706110U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [(_Bool)1] [(unsigned short)16] [i_1] [i_18])))));
                            arr_65 [i_1] [i_1] [i_16] [i_17] [1ULL] = ((/* implicit */_Bool) ((unsigned char) arr_18 [i_18] [i_18] [i_1] [i_18] [i_18] [18LL]));
                            var_33 = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
                arr_66 [i_1] [i_16] = ((/* implicit */_Bool) arr_52 [i_1] [11LL] [i_8 + 2] [i_16 - 2] [i_16]);
                var_34 = ((/* implicit */unsigned long long int) ((arr_4 [i_1]) + ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_16] [i_16] [i_16] [0] [i_8]))) : (var_15)))));
                arr_67 [i_16] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((+(var_11))) | (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            }
            var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) : (arr_52 [i_1] [i_1] [i_1] [i_1] [i_1]))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))) + (3657129691U)))));
            var_36 = ((((((arr_34 [i_8 + 1]) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))) * (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [(signed char)1]))))));
            /* LoopSeq 2 */
            for (long long int i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_20 = 4; i_20 < 19; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        {
                            arr_76 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_36 [i_1] [i_1] [i_1] [i_1] [i_8] [i_1]);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_20 + 2] [i_8] [i_8] [i_21])))))) | (((/* implicit */int) var_6))));
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_1] [i_1] [i_20 + 1] [i_20 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17249))) : (var_1)));
                            var_39 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-65)) ^ (((/* implicit */int) arr_28 [i_1]))));
                        }
                    } 
                } 
                arr_77 [i_1] [i_1] [i_1] [i_19] = ((/* implicit */long long int) ((9205476226439703936ULL) << (((/* implicit */int) arr_57 [i_1]))));
                arr_78 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
            }
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                arr_81 [i_1] [i_1] [i_22 - 1] [i_22] = (_Bool)1;
                /* LoopNest 2 */
                for (long long int i_23 = 0; i_23 < 22; i_23 += 4) 
                {
                    for (unsigned int i_24 = 3; i_24 < 20; i_24 += 2) 
                    {
                        {
                            arr_87 [i_1] [i_23] [i_1] [i_23] = ((/* implicit */long long int) ((unsigned short) var_14));
                            arr_88 [i_1] = var_15;
                            arr_89 [i_1] [i_8] [i_1] [i_1] [i_1] = var_7;
                            arr_90 [i_1] [i_8 - 2] [i_22 - 1] [i_24 - 2] [i_1] [i_22 - 1] [i_22] = arr_73 [8ULL] [i_1] [i_1] [i_1];
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */_Bool) ((int) var_10));
        }
        for (int i_25 = 0; i_25 < 22; i_25 += 1) 
        {
            var_41 = ((/* implicit */unsigned int) (~(1270390097653674938ULL)));
            arr_94 [i_1] [i_25] = ((/* implicit */signed char) arr_24 [i_1] [i_1] [i_1]);
            var_42 = ((/* implicit */unsigned long long int) arr_50 [i_1] [11] [i_1] [21] [i_1] [i_25]);
            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) -359088293)) ? (((long long int) 9241267847269847653ULL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    var_44 = ((/* implicit */unsigned short) (signed char)-6);
}
