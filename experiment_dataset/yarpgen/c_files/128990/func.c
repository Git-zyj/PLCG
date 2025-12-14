/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128990
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) arr_6 [i_2] [(signed char)2] [(signed char)16]))));
                        arr_9 [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((arr_6 [i_0] [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) arr_6 [i_3] [i_3 + 1] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_3 - 1] [i_3 - 1]))));
                    }
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_12 [i_0] = ((/* implicit */signed char) var_7);
                        arr_13 [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [(short)9])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                        arr_14 [i_0] [16U] [16U] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_5)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) arr_2 [i_2] [(signed char)10])) : (((/* implicit */int) var_0)))))));
                        arr_15 [(signed char)10] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                            var_12 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            var_13 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)73))) | (arr_7 [i_6] [i_4] [i_1]));
                            arr_23 [i_0] [16] [(signed char)7] [16] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) 17533576954788883803ULL))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (20) : (((/* implicit */int) arr_0 [i_0]))));
                            var_16 &= ((/* implicit */int) var_2);
                            var_17 = ((/* implicit */unsigned char) var_1);
                            arr_26 [(signed char)11] [(short)0] [(short)0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                        }
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        arr_31 [i_0] [(unsigned short)12] [(unsigned short)12] [1ULL] = ((/* implicit */unsigned short) arr_18 [i_8] [15LL] [0LL] [i_1] [i_0] [i_0]);
                        var_18 -= ((/* implicit */unsigned char) ((arr_27 [i_0] [i_0] [i_0] [i_0]) != (arr_27 [i_8] [(signed char)6] [i_1] [i_0])));
                    }
                    for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [(unsigned char)7] [i_0] [i_0] [i_0]))))) : ((~(1180495295U)))));
                        arr_35 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) var_1));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) ? (arr_27 [i_0] [(signed char)13] [(signed char)13] [(signed char)13]) : (((/* implicit */unsigned long long int) 8875911500652088440LL))))));
                            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8875911500652088440LL))));
                            arr_40 [i_0] [i_10] [(unsigned short)10] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (unsigned char)22)) : (1)))));
                            arr_41 [i_0] [9LL] [i_10] [i_9] [(short)16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1] [(_Bool)1]))))));
                        }
                    }
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-8192))));
                }
                arr_42 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_25 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [(signed char)9] [i_1] [i_1] [i_0] [i_0])))))) ? (((/* implicit */int) ((((arr_24 [i_1] [i_1] [(short)13] [i_1] [i_1] [(unsigned short)16]) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [16LL] [i_1] [16LL] [(unsigned short)10] [i_1])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_46 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_8 [i_11] [i_11] [i_11] [i_11] [i_11])))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)21))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_0] [i_0] [(short)5] [i_0] [i_0]))))) : (((arr_25 [i_0] [i_1] [(short)11] [(short)11] [i_1] [i_11]) ? (arr_5 [(short)4] [i_1] [(short)4] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_24 -= ((/* implicit */unsigned char) arr_4 [(unsigned char)0] [i_0] [i_0]);
                    /* LoopSeq 4 */
                    for (signed char i_13 = 1; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 19; i_14 += 2) 
                        {
                            arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_13] [i_13])) ? ((+(((/* implicit */int) arr_52 [i_0] [i_1] [i_12] [i_13] [i_13 - 1])))) : (min((((((/* implicit */_Bool) arr_30 [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_28 [i_13 + 1] [(signed char)14] [i_13] [(unsigned short)7] [i_13 - 1]))))));
                            arr_55 [i_13] [i_13] [i_13] [i_12] = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) arr_34 [i_14] [i_1] [i_12] [i_1] [i_1] [i_12])), (2003835600U))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))))) ^ (var_7)));
                        }
                        arr_56 [i_0] [i_12] [i_12] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_1)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_12] [i_12] [i_0] [i_0]))))) : (((/* implicit */int) arr_37 [i_13 + 1] [i_13] [i_13 + 1] [14U] [i_13] [i_13]))))));
                    }
                    for (signed char i_15 = 1; i_15 < 18; i_15 += 2) /* same iter space */
                    {
                        arr_60 [i_15] [i_12] [i_12] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)64976))));
                        var_25 = ((/* implicit */signed char) ((long long int) arr_39 [i_0] [i_0] [i_12] [i_12] [i_0] [i_12] [(_Bool)1]));
                        arr_61 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-6)))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) arr_57 [i_15 - 1] [i_15 + 1] [i_15 - 1] [2LL] [2LL] [i_15 - 1]))))), (max((((/* implicit */unsigned int) arr_20 [i_0] [i_1] [5] [i_12] [i_0])), (var_7)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) arr_11 [i_15 - 1] [i_15 + 1] [i_15] [i_15 - 1] [i_15 + 1]);
                            var_27 = ((/* implicit */long long int) (!(arr_24 [i_15] [i_15] [i_15] [i_15 - 1] [i_15] [i_15 - 1])));
                        }
                        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
                        {
                            arr_66 [i_1] [(signed char)10] [i_12] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((max(((signed char)114), ((signed char)4))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_32 [i_1] [i_15] [i_1] [i_0])))))))) : ((+(((/* implicit */int) ((_Bool) arr_39 [(signed char)8] [i_1] [i_12] [i_12] [i_1] [i_12] [10LL])))))));
                            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                            var_29 = max((((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-26898))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_11 [i_15 + 1] [i_1] [i_15 + 1] [i_15 + 1] [i_18])) ? (arr_11 [i_15 + 1] [i_15 + 1] [i_12] [i_15] [i_18]) : (arr_11 [i_15 - 1] [(short)2] [i_15 - 1] [(short)2] [i_1])))));
                            var_31 -= ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_34 [7U] [(unsigned short)18] [4U] [(unsigned short)18] [i_18] [i_15])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) / (((/* implicit */int) arr_16 [i_15] [(unsigned char)0] [i_15 + 1] [i_15])))), (((/* implicit */int) ((unsigned char) arr_49 [i_15 - 1] [(short)4] [i_15] [i_15])))));
                        }
                    }
                    for (signed char i_19 = 1; i_19 < 18; i_19 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_71 [i_12] = ((/* implicit */_Bool) arr_5 [i_0] [13U] [i_0] [i_0]);
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_74 [i_0] [i_12] = ((/* implicit */signed char) arr_68 [i_0] [i_1] [i_0] [i_0] [i_0]);
                        arr_75 [(unsigned char)7] [i_1] [i_12] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [13LL] [i_0])) : (((/* implicit */int) arr_37 [15LL] [i_12] [i_1] [i_1] [i_1] [i_0]))))), (((((/* implicit */_Bool) var_0)) ? (arr_73 [i_20] [i_12] [i_1]) : (((/* implicit */long long int) var_10))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_21 = 0; i_21 < 19; i_21 += 1) 
                        {
                            var_33 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)12))));
                            arr_79 [i_0] [i_0] [i_0] [9LL] [i_0] [i_0] [i_12] = (~(arr_45 [i_0] [i_1]));
                            var_34 = (~(6491346506543084118LL));
                            var_35 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_21] [i_20] [i_1] [i_1]))));
                        }
                        for (unsigned short i_22 = 0; i_22 < 19; i_22 += 3) 
                        {
                            var_36 -= ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_9)))))), ((~(((/* implicit */int) var_6))))));
                            var_37 = ((/* implicit */short) (-(6491346506543084111LL)));
                            arr_82 [(unsigned char)5] [i_1] [(signed char)18] [i_1] [i_12] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) min((min(((signed char)39), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */long long int) var_10)) != (arr_30 [i_22] [(unsigned short)7] [i_1] [i_0]))))))), ((-(((/* implicit */int) var_2))))));
                            arr_83 [i_0] [i_12] [i_12] [i_0] [i_0] [i_12] = ((/* implicit */signed char) ((long long int) ((arr_4 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_12] [i_20] [i_12])) : (((/* implicit */int) arr_4 [i_12] [i_12] [i_12])))));
                        }
                        /* vectorizable */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned char) ((arr_25 [i_20] [i_1] [i_12] [i_12] [i_23] [i_12]) ? (((/* implicit */int) arr_16 [(short)15] [(_Bool)1] [i_1] [i_0])) : (((/* implicit */int) arr_16 [i_12] [i_12] [i_0] [i_0]))));
                            arr_86 [(signed char)4] [i_20] [i_12] [i_12] [i_12] [i_1] [17U] = ((/* implicit */unsigned char) ((arr_45 [i_12] [i_12]) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        }
                        /* vectorizable */
                        for (signed char i_24 = 0; i_24 < 19; i_24 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) var_6)))));
                            var_40 = ((/* implicit */signed char) arr_51 [i_12]);
                        }
                    }
                }
                var_41 = ((/* implicit */short) arr_70 [5U] [(short)15] [i_1] [(signed char)6]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_25 = 4; i_25 < 20; i_25 += 3) 
    {
        arr_94 [i_25] [(unsigned char)2] = (_Bool)1;
        arr_95 [i_25] = ((/* implicit */_Bool) (+(max((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) arr_93 [i_25])) % (arr_91 [i_25] [i_25]))))))));
    }
}
