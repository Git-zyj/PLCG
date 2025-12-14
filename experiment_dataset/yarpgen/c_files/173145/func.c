/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173145
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [(short)7] [i_1]))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */int) (short)-1)), (arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_5)))) ? (((unsigned long long int) arr_2 [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) arr_12 [i_4])))))));
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                                arr_14 [i_1] [i_1] = (-(((unsigned int) arr_13 [(short)8] [(short)8] [i_1] [i_2] [5] [i_4] [i_4])));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 2; i_5 < 12; i_5 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 525164604U)) != (arr_19 [i_5 + 1] [i_1] [i_5 + 1]))) ? (((/* implicit */int) arr_1 [i_0])) : (min((((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [(unsigned short)2] [i_1] [(unsigned short)2])), (arr_13 [i_0] [i_0] [i_0] [(unsigned short)12] [(short)0] [(unsigned short)6] [2LL])))), (((int) arr_2 [(unsigned char)0]))))));
                        var_17 = ((/* implicit */signed char) arr_19 [(unsigned short)7] [i_1] [i_5]);
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (short)4))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 12; i_7 += 4) 
                    {
                        arr_25 [i_1] = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) min(((unsigned short)36515), (((/* implicit */unsigned short) var_3))))))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)131);
                        arr_27 [i_0] [i_0] [i_5 + 1] [i_5 - 1] [(unsigned char)4] = ((/* implicit */unsigned short) ((_Bool) ((short) ((((/* implicit */int) (unsigned short)36515)) | (((/* implicit */int) (unsigned short)29020))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(var_2))))));
                            arr_30 [(unsigned short)4] [i_0] [i_1] [4] [i_5] [i_7] [i_8] = ((/* implicit */_Bool) ((arr_28 [i_8] [i_1] [i_8] [i_7 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_13))))))))));
                            arr_31 [i_8] [i_7 - 1] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) 15941293170737253257ULL);
                        }
                    }
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_20 = var_3;
                        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (159))) - (25)))))) <= (((unsigned int) arr_6 [i_5 - 1] [i_5 - 1] [i_0] [i_0]))));
                        var_22 = (short)14796;
                    }
                    for (unsigned char i_10 = 4; i_10 < 12; i_10 += 1) 
                    {
                        arr_38 [i_10] [(signed char)7] = ((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5 - 1]))));
                        arr_39 [8ULL] [i_1] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [(unsigned char)7] [i_1]))))) ? (min((((/* implicit */unsigned int) var_11)), (3769802691U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [(short)8] [i_5 - 1] [i_10] [i_10] [i_10 - 3] [i_1])))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned int) arr_23 [i_0] [i_0])), (((unsigned int) 3769802691U)))));
                        arr_43 [i_0] [(unsigned short)6] [9U] [i_5 - 1] [i_11 + 1] &= ((/* implicit */_Bool) min((arr_28 [i_0] [i_0] [(signed char)10] [i_11]), (((/* implicit */unsigned int) ((((_Bool) 525164601U)) || (((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_33 [i_11 + 4]))))))))));
                        arr_44 [i_0] [i_1] [i_5] [i_11 + 4] &= ((/* implicit */unsigned char) arr_21 [i_0] [1ULL] [1ULL]);
                    }
                    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-27203))) / (525164605U))), (((/* implicit */unsigned int) (unsigned char)224))));
                            arr_50 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((arr_21 [i_1] [(signed char)12] [i_1]) - (1512477947)))))) ? ((~(arr_0 [i_0]))) : (min((arr_33 [i_0]), (((/* implicit */int) arr_41 [i_0] [i_1] [i_0] [i_0] [i_13]))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                        {
                            var_25 = ((short) ((unsigned char) 3769802694U));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((67108863LL), (((/* implicit */long long int) ((max((var_2), (((/* implicit */int) (short)4)))) != (((/* implicit */int) (unsigned short)61345))))))))));
                            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_51 [i_12 + 4] [i_0] [(unsigned short)0] [i_0] [i_0])))));
                        }
                        for (signed char i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                        {
                            arr_56 [(unsigned char)4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_36 [i_5 - 2] [i_5 - 2] [i_12 + 1] [i_12 + 1])), (((unsigned int) arr_23 [i_15] [i_1]))))), (((((/* implicit */_Bool) (short)20547)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)32))))) : (((long long int) (unsigned short)61345))))));
                            var_28 = ((max((((((/* implicit */int) (unsigned short)61345)) / (((/* implicit */int) var_4)))), ((-(((/* implicit */int) arr_35 [i_15] [i_1] [i_15] [i_1] [i_1])))))) / (((((/* implicit */_Bool) min((var_5), (arr_55 [i_0] [i_15] [(short)9])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_34 [i_0] [i_1] [i_5 - 2] [(signed char)11] [i_15] [i_5])), (var_6)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_52 [i_0] [i_1] [i_5] [i_12] [i_15] [i_12])) : (((/* implicit */int) var_9)))))));
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_32 [i_0] [i_0] [i_0];
                        }
                        arr_58 [i_5 + 1] = ((/* implicit */unsigned long long int) arr_32 [i_5 + 1] [i_5 - 1] [(unsigned short)2]);
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)23418)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
                    }
                }
                var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (signed char)-50))))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min((((/* implicit */unsigned int) min((((int) (unsigned char)5)), (((/* implicit */int) ((unsigned char) (signed char)-50)))))), (3769802684U))))));
}
