/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161971
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) max((arr_12 [(unsigned short)2]), (((/* implicit */unsigned short) ((short) var_4))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                arr_16 [i_0] [i_0] = ((/* implicit */short) arr_11 [i_1 + 1] [(unsigned short)15] [i_4]);
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((int) var_7)))));
                                var_12 *= min((((/* implicit */unsigned char) ((max((var_5), (((/* implicit */int) arr_11 [i_0 + 3] [i_0 + 3] [9LL])))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8)))))))), (var_6));
                                var_13 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 1] [i_2 - 1])))));
                                var_14 = ((((int) arr_14 [i_0 + 2])) + (((/* implicit */int) var_7)));
                            }
                        }
                    } 
                } 
                arr_17 [i_0 + 3] [14] [i_0] |= ((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [(unsigned char)14] [i_0 - 1])))))));
                /* LoopSeq 4 */
                for (int i_5 = 3; i_5 < 19; i_5 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (signed char)77)));
                    arr_21 [i_0] [i_0] = ((/* implicit */long long int) var_5);
                    /* LoopSeq 4 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(min((((((/* implicit */unsigned long long int) var_5)) * (var_3))), (((/* implicit */unsigned long long int) var_0)))))))));
                        var_16 = ((/* implicit */signed char) min((arr_6 [i_5] [i_1]), (((/* implicit */unsigned int) (signed char)78))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [1LL]);
                        var_18 = ((var_0) - (((/* implicit */int) (signed char)-70)));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0 + 1] [i_7] [i_0 + 2])))))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        arr_32 [i_0 + 1] [i_1] [i_0] [i_8] = ((/* implicit */long long int) arr_2 [i_1]);
                        var_20 = ((/* implicit */unsigned short) max((max((((/* implicit */int) ((unsigned char) var_4))), (arr_28 [i_8] [i_8 - 3] [i_5 - 1] [i_5 - 2] [i_1] [i_0]))), ((+(min((((/* implicit */int) arr_14 [i_5])), (var_0)))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((var_3), (var_3))))));
                        var_22 = ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5 - 3])) ? (var_3) : ((+(max((var_3), (((/* implicit */unsigned long long int) arr_10 [i_0 + 2] [i_0] [i_0] [i_0 + 1])))))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 18; i_9 += 3) 
                    {
                        arr_36 [i_0] [i_1] [i_5] [i_9 + 1] [i_1] = ((/* implicit */int) min(((signed char)79), ((signed char)-70)));
                        var_23 = ((/* implicit */long long int) max((((/* implicit */int) arr_5 [i_0])), ((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))));
                    }
                }
                for (signed char i_10 = 3; i_10 < 18; i_10 += 2) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_0] [i_0] [i_10] [i_0] [i_10])) > (((/* implicit */int) arr_11 [i_0] [i_1] [i_10 - 3]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        arr_43 [i_0] [i_1] [i_0] [i_11] = ((unsigned short) arr_15 [i_0] [i_0 - 1] [i_0 + 3] [i_0] [i_0] [i_0]);
                        var_25 = ((/* implicit */short) arr_6 [i_0] [i_1]);
                    }
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        var_26 -= ((/* implicit */unsigned long long int) ((var_1) <= (min(((~(((/* implicit */int) var_8)))), ((~(((/* implicit */int) var_6))))))));
                        arr_46 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */long long int) 1073741824)) : (-7894200512717912458LL))), (((/* implicit */long long int) arr_4 [i_0]))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        var_27 *= ((/* implicit */signed char) ((int) min((arr_42 [i_13] [i_1 + 1]), (arr_42 [i_13] [i_13]))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((((arr_41 [i_0] [i_0 + 2] [i_10 - 1] [i_10] [i_13]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1] [i_1] [i_1 + 1] [i_13]))))), (((/* implicit */unsigned long long int) var_7)))))));
                        arr_51 [i_0] [i_13] [i_13] &= ((/* implicit */unsigned short) var_3);
                        arr_52 [i_0] = ((/* implicit */signed char) var_8);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_55 [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_53 [i_0 + 2] [i_1 + 1] [i_1 + 1]))))), (var_3)));
                        var_29 = min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (max((max((((/* implicit */int) var_8)), (var_1))), ((+(((/* implicit */int) var_6)))))));
                    }
                }
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    arr_58 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_6);
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_5)), (arr_23 [i_0] [i_0 - 1] [i_0] [i_1] [i_15])))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_2) : (var_1))), (((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_1 + 1]))))) : (min((arr_54 [i_0] [i_1 - 1] [i_15] [i_15] [i_0]), (min((((/* implicit */unsigned long long int) var_6)), (var_4)))))));
                    /* LoopNest 2 */
                    for (long long int i_16 = 2; i_16 < 18; i_16 += 4) 
                    {
                        for (short i_17 = 1; i_17 < 18; i_17 += 2) 
                        {
                            {
                                arr_63 [i_0] [i_17] [i_0] [i_17] [i_17] [i_17] [i_0] = ((/* implicit */unsigned short) var_0);
                                var_31 = ((/* implicit */signed char) ((unsigned short) var_5));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_18 = 1; i_18 < 19; i_18 += 3) 
                {
                    arr_66 [i_0 + 1] [i_1] [i_0] = ((/* implicit */signed char) ((arr_28 [i_0] [i_1] [(unsigned short)6] [i_0 + 2] [i_1] [i_0]) + (var_5)));
                    var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                    arr_67 [i_0] [i_0] [i_18 - 1] [i_0] = ((/* implicit */unsigned char) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0 + 2]);
                    arr_68 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_27 [15] [15] [i_1 - 1] [i_0] [15] [15]);
                    arr_69 [i_0] [i_1] [(unsigned short)2] [i_18 - 1] |= ((/* implicit */short) var_3);
                }
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) var_4);
}
