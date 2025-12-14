/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164352
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_13 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -411763158)))) ? (arr_3 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) : (arr_6 [i_0] [i_1] [i_2] [i_3]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0]))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (var_12)))));
                            arr_12 [7ULL] [i_0] [(unsigned short)11] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_2])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_0] [i_2] [i_0] [i_0])))));
                            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1]))));
                            var_17 *= ((/* implicit */short) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_3] [i_5]))));
                        }
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_13 [(short)10] [i_0] [i_1] [i_2] [i_0]))));
                        arr_15 [i_3] [i_1] [i_2] [i_1] [12LL] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_2]))));
                    }
                } 
            } 
        } 
        var_19 ^= ((/* implicit */unsigned short) var_9);
        arr_16 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << ((((((~(126976))) + (126980))) - (3)))))) : (((/* implicit */_Bool) ((((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) - (2147483647))) + (2147483647))) << ((((((~(126976))) + (126980))) - (3))))));
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_0] [(unsigned char)4] [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) var_10)) - (24710)))))) >= (((var_9) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))))));
    }
    for (short i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        arr_20 [i_6] = ((/* implicit */_Bool) arr_19 [i_6]);
        var_21 = ((/* implicit */signed char) arr_18 [i_6 + 3]);
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 18; i_9 += 3) 
                {
                    for (short i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_26 [1ULL] [i_8] [i_8]))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_12)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_9 - 2] [i_8] [i_8])) ? (arr_6 [i_9 + 1] [i_8] [i_9 - 1] [i_9 + 1]) : (arr_6 [i_9 - 1] [i_8] [i_9] [i_10]))))));
                            var_24 -= ((/* implicit */unsigned long long int) arr_19 [i_7]);
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                            {
                                var_25 = ((/* implicit */int) var_5);
                                var_26 &= ((/* implicit */unsigned int) var_5);
                            }
                            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                            {
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_11 [i_7] [i_9 + 1] [i_7])))))))))));
                                var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))) * (((arr_22 [i_7]) * (arr_22 [i_7])))));
                            }
                            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                            {
                                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4294967295U)))) ? (((/* implicit */unsigned long long int) min((arr_33 [i_7] [i_8] [i_7 + 1] [i_10 + 1]), (arr_32 [i_8] [i_9] [0U] [i_9 - 2] [i_9 + 1] [i_13])))) : ((~(4774908067994101473ULL))))))));
                                arr_40 [i_7] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12607))));
                                var_30 = ((/* implicit */int) ((unsigned short) ((int) var_8)));
                            }
                            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                            {
                                arr_43 [i_10] [i_10 - 1] [(unsigned char)2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_14] [i_10 - 1])) ? (((/* implicit */int) min((arr_31 [i_7] [(unsigned char)14] [i_9 - 1] [i_7]), (arr_10 [i_9] [12] [i_9] [i_9 - 1])))) : (max((arr_42 [i_7] [(unsigned short)18]), (((/* implicit */int) arr_31 [i_7] [(short)2] [i_9] [i_14 + 1]))))))) ? (((/* implicit */int) var_9)) : (((((((/* implicit */_Bool) arr_8 [i_7] [(_Bool)1] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))) - (((/* implicit */int) ((short) (_Bool)1)))))));
                                var_31 = ((/* implicit */unsigned char) arr_11 [i_7] [i_8] [i_7]);
                                arr_44 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_25 [i_7 - 1] [i_7] [i_7 - 1])) ? (((/* implicit */int) arr_25 [i_7 - 1] [i_7] [i_7])) : (((/* implicit */int) arr_25 [i_7 + 2] [i_7] [i_7])))));
                                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) max((((/* implicit */long long int) var_7)), (((long long int) ((((/* implicit */_Bool) arr_42 [i_8] [(signed char)4])) ? (arr_41 [(signed char)15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))))));
                            }
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned int) arr_31 [i_7] [i_7] [i_7] [i_7]);
                arr_45 [(_Bool)1] [(short)6] [i_7] = ((/* implicit */signed char) (~(-1)));
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) var_5);
                            arr_52 [i_7] [i_7] [i_8] [i_8] [i_15] [i_16] = ((/* implicit */int) ((arr_34 [i_7] [i_7 + 3] [i_8] [15] [i_7] [i_16]) ? (((((/* implicit */_Bool) arr_0 [i_7 + 1] [i_7 - 1])) ? (arr_0 [i_7 + 1] [i_7 - 1]) : (arr_0 [i_7 + 1] [i_7 - 1]))) : (((/* implicit */unsigned long long int) (+(arr_35 [i_7] [i_8] [i_8] [i_15] [i_8] [i_8] [i_8]))))));
                            arr_53 [i_8] [i_8] [i_8] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_10 [i_7 + 3] [i_7] [i_15] [i_8]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) var_9);
}
