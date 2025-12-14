/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124561
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) (_Bool)1);
                        arr_9 [(signed char)2] [i_2 - 1] [i_1] [(unsigned short)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_2 - 1]))));
                        var_19 -= ((/* implicit */unsigned short) (((((~(arr_5 [i_0] [i_1 - 1] [i_0] [i_3]))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3])) ? (arr_5 [i_0] [i_2] [i_1 + 3] [i_0]) : (arr_5 [i_0] [(unsigned short)3] [i_2] [(short)9]))) - (4742907990880807098LL)))));
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_2 - 1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)4092)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)115)))))))) * ((((!(((/* implicit */_Bool) arr_1 [i_1] [i_0])))) ? (min((arr_0 [13U]), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_2] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0] [i_3] [i_0] [i_3]))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_15 [0LL] [0LL] [(short)7] [(short)7] = ((/* implicit */long long int) (-(11132878806376111027ULL)));
                        var_20 = ((/* implicit */long long int) arr_4 [i_1] [(signed char)7] [i_1 - 2] [i_2 - 1]);
                    }
                    var_21 ^= ((/* implicit */signed char) arr_7 [i_0] [(_Bool)1] [i_2] [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_20 [i_5] [i_1 + 1] [(unsigned short)8] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5] [i_0])))))), (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) (+(arr_4 [i_2 - 1] [i_0] [i_1 + 3] [i_1 + 3]))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_0] [i_0] [(unsigned short)1] [i_6]))) >= (((/* implicit */long long int) (-(((/* implicit */int) (signed char)71))))))) ? ((~(((long long int) arr_0 [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_0] [i_0] [i_0]))))))));
                            arr_21 [i_5] [9LL] [i_2] [12ULL] [i_6] [9LL] [i_0] = ((/* implicit */long long int) (signed char)-22);
                        }
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                            var_24 = ((/* implicit */long long int) ((arr_13 [i_0] [6LL] [6LL]) ? ((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_7] [(short)0] [i_1] [i_0])), (arr_6 [i_0])))))) : (((/* implicit */int) arr_14 [i_0] [(short)14] [i_2] [i_0]))));
                            arr_25 [11ULL] = ((/* implicit */unsigned int) min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7] [i_5] [i_2] [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned short)0] [i_5] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_2 - 1] [8LL] [i_0]))))) && (((/* implicit */_Bool) ((signed char) var_13))))))));
                        }
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_18 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_2 - 1] [i_1 - 1] [i_0] [i_2 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1 - 2] [i_1 - 2] [i_1 + 3] [i_2 - 1] [i_2 - 1]))) : (((((arr_20 [i_0] [i_1] [i_1] [i_5] [i_8]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5] [i_2 - 1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned int) ((unsigned short) arr_28 [i_8] [i_1] [i_2] [i_5] [i_8] [i_5] [i_2]))), (min((arr_28 [i_0] [i_0] [(unsigned short)14] [i_2] [(unsigned short)14] [i_5] [i_8]), (((/* implicit */unsigned int) var_10))))))));
                            var_25 = ((/* implicit */unsigned long long int) arr_12 [i_0] [(unsigned char)3] [i_5] [i_8]);
                            var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_2] [i_0] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_27 [i_0] [i_1] [6LL] [i_5] [i_8] [(unsigned char)7])))))))), (arr_12 [i_2 - 1] [i_2 - 1] [i_1 - 2] [(short)4])));
                        }
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (signed char)92)) ? (arr_20 [(unsigned short)9] [i_1] [i_2] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                            var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((short) arr_26 [i_0] [i_1] [i_2] [i_5] [i_9]))), (min((arr_17 [i_1] [i_1 + 2] [(signed char)6] [i_2 - 1] [i_1] [i_2]), (arr_19 [i_1 - 2] [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5] [i_5])))));
                        }
                        var_28 = ((/* implicit */_Bool) min((max((((unsigned long long int) (_Bool)1)), (arr_0 [i_2]))), (max((((/* implicit */unsigned long long int) arr_18 [i_2 - 1])), (var_11)))));
                        arr_33 [i_0] [i_1 + 1] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32512)) : (((/* implicit */int) arr_3 [i_5] [i_1] [(_Bool)1])))))))) >> (((min((((/* implicit */long long int) ((arr_2 [i_0]) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) var_5))))), ((((_Bool)1) ? (arr_18 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_1] [(_Bool)1] [i_5] [i_2]))))))) - (29LL)))));
                    }
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((((/* implicit */int) ((short) arr_36 [i_10] [i_2] [i_2] [i_1] [i_0]))) * ((+(((/* implicit */int) arr_11 [i_10] [i_10] [i_2 - 1] [i_1] [i_0] [i_0])))))) ^ (((/* implicit */int) ((unsigned short) (unsigned short)46369))))))));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            arr_40 [i_0] [i_1] [i_1] [i_0] [(_Bool)0] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_11])) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_2 - 1]))))) ? (min((arr_20 [i_0] [i_0] [i_0] [i_10] [i_11]), (((/* implicit */long long int) var_15)))) : (((((/* implicit */_Bool) arr_28 [i_11] [i_10] [i_10] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((arr_23 [i_1] [i_1] [i_1] [i_10] [i_10] [i_10]), (((/* implicit */long long int) (unsigned short)65507))))))));
                            arr_41 [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] [(unsigned short)9] [(unsigned short)9] |= ((/* implicit */unsigned char) (+(min((3210843607520035543LL), (((/* implicit */long long int) ((arr_28 [i_0] [i_0] [1LL] [i_0] [i_0] [i_0] [(unsigned short)4]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8932))))))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) var_15);
                        arr_44 [i_12] [i_2] [i_1 - 1] [i_0] [i_0] = ((/* implicit */short) ((long long int) (_Bool)1));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_48 [i_0] [i_0] [8LL] [i_13] [13U] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)0)) - (((/* implicit */int) ((arr_5 [i_0] [(signed char)2] [(signed char)2] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))))));
                        var_31 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_17 [(signed char)1] [i_1] [i_1] [i_13] [i_1] [i_1])))))) - ((((_Bool)1) ? (arr_39 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)54009))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (_Bool)1)))))) : (arr_45 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]))))));
                    }
                    var_32 = ((/* implicit */short) arr_14 [i_2] [i_0] [i_0] [i_0]);
                }
                for (unsigned short i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned short) (signed char)77);
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_0] [(unsigned short)11] [i_1 + 2] [i_1 + 2])) ? (arr_50 [i_1] [i_1] [i_1 + 2] [i_1]) : (arr_50 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])))) ? (((/* implicit */int) ((signed char) arr_23 [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 1] [i_0] [i_0]))) : (((/* implicit */int) ((_Bool) arr_43 [(short)10] [i_1 + 3] [i_1 + 3])))));
                    }
                    for (long long int i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        var_35 &= ((/* implicit */_Bool) ((((min((2572134460U), (((/* implicit */unsigned int) arr_49 [i_1] [(_Bool)1] [(short)1])))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51702))))) ? ((~(((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_1)) - (23746))))))) : ((-(((/* implicit */int) ((signed char) arr_54 [i_0] [i_1] [(signed char)5] [i_14])))))));
                        var_36 ^= ((/* implicit */long long int) var_8);
                        var_37 |= ((/* implicit */_Bool) min(((-(((/* implicit */int) max(((unsigned short)56036), ((unsigned short)45070)))))), (((/* implicit */int) ((_Bool) (unsigned short)29081)))));
                        var_38 = (((!(((/* implicit */_Bool) min((var_17), (var_14)))))) ? (((((/* implicit */_Bool) (-(arr_47 [i_0] [i_1 + 3] [i_14] [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (arr_18 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_17 [i_0] [(_Bool)1] [i_14] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_55 [i_16]))))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_0] [i_0] [i_17])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_52 [i_17] [2ULL] [2ULL] [i_1 + 1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) arr_12 [i_17] [i_0] [(_Bool)1] [i_0])) ? (arr_18 [i_14]) : (arr_47 [i_0] [i_0] [i_14] [(unsigned short)4])))))));
                        var_40 |= ((/* implicit */unsigned long long int) (!(((arr_42 [i_14] [i_14] [i_1 + 1] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_1 - 2])))))));
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) arr_57 [i_0] [i_1] [i_14] [i_17] [i_1]))));
                        arr_61 [i_0] [(signed char)3] [8U] [i_0] = ((/* implicit */unsigned int) var_16);
                    }
                    var_42 &= ((/* implicit */unsigned short) -877796868300331478LL);
                }
                var_43 *= ((/* implicit */signed char) min((var_6), (((/* implicit */unsigned short) ((unsigned char) (unsigned short)2515)))));
                var_44 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_57 [i_0] [i_1] [(unsigned short)0] [(short)0] [i_0]))))))) / (((((/* implicit */_Bool) (~(536870656U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_1] [i_0]))) : (3440720859377752384ULL)))));
            }
        } 
    } 
    var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_14)), (min((var_11), (((/* implicit */unsigned long long int) var_17)))))))));
    var_46 = ((/* implicit */unsigned int) var_8);
}
