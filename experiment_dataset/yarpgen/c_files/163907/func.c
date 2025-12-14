/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163907
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
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_1 [i_3 - 1]))));
                                var_21 = ((/* implicit */short) min((((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1] [i_0])), (((((/* implicit */int) ((unsigned short) var_6))) + ((-(((/* implicit */int) arr_7 [15] [i_1] [i_4 - 2] [i_4 - 1] [(unsigned short)15] [i_4 - 1]))))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */unsigned long long int) -218691608)), (((((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_0]))) : (arr_6 [i_0] [i_1] [i_2] [i_4 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11691))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 4; i_6 < 20; i_6 += 4) 
                        {
                            arr_18 [(short)10] [i_0] [i_1] [i_2] [i_5] [i_2] [i_6 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_6] [i_6])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2]))));
                            var_23 = ((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 8646911284551352320ULL)) ? (((/* implicit */int) (short)-18)) : (((/* implicit */int) (unsigned char)3)))))));
                        }
                        arr_19 [(signed char)18] [(signed char)18] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_2] [i_5])) ? (arr_16 [i_0] [i_0 + 1] [i_2] [i_1]) : (arr_16 [i_0] [i_0 + 1] [i_0] [i_5])));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (unsigned short)25972))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */short) arr_8 [i_1] [i_1]);
                        var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) < (((7LL) + (((/* implicit */long long int) var_4))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((unsigned long long int) arr_16 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 1]))));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (var_2)));
                            var_29 = ((/* implicit */signed char) ((long long int) arr_27 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 2] [i_8] [6U] [i_7]));
                        }
                    }
                    /* LoopSeq 4 */
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((int) (+((~(var_1)))))))));
                            arr_34 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = ((unsigned long long int) min((9799832789158199290ULL), (((/* implicit */unsigned long long int) arr_32 [i_0 + 1] [i_0] [i_1] [i_0] [i_0 + 1]))));
                        }
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)252)))))));
                        var_32 = ((/* implicit */unsigned char) min(((unsigned short)20234), (((/* implicit */unsigned short) (short)-1))));
                        arr_35 [i_0] [i_0] [i_1] [i_9] [i_9] = ((((/* implicit */_Bool) ((int) arr_2 [i_9]))) ? (((((/* implicit */_Bool) arr_2 [i_9])) ? (13075137229611529145ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))));
                    }
                    for (short i_11 = 3; i_11 < 18; i_11 += 2) 
                    {
                        var_33 = var_3;
                        var_34 = ((/* implicit */short) var_12);
                        var_35 = ((/* implicit */unsigned long long int) arr_15 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1] [i_1] [i_2] [i_11]);
                        var_36 = ((/* implicit */short) arr_13 [i_0 - 1] [i_0 - 2] [i_0] [i_0] [i_0 - 1]);
                    }
                    for (short i_12 = 2; i_12 < 17; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 3; i_13 < 18; i_13 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) max((((/* implicit */int) ((short) arr_32 [i_1] [i_0 + 1] [i_0] [i_12] [i_13 + 3]))), ((+(2147482624))))))));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_25 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_0] [i_1] [i_0 + 1] [i_0 - 1] [i_0]))) : (arr_9 [i_2] [i_1] [i_13 - 3]))))) ? (min((min((0LL), (arr_12 [i_1] [i_12 + 4]))), (((/* implicit */long long int) ((arr_29 [i_0] [i_1] [i_12]) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_12 + 3])))));
                            var_39 = ((/* implicit */int) max((var_39), (((int) var_2))));
                        }
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            arr_48 [i_0] [i_1] [i_2] [i_12] [i_1] = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_14] [i_2] [i_12] [i_2]);
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_42 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0] [i_1] [i_0])) ? (arr_32 [i_12 + 4] [i_12 + 2] [i_1] [i_12 + 4] [i_12 + 3]) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_17) : (((/* implicit */int) (short)-6197)))))) : ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (var_7)))))));
                            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) min((arr_1 [i_0 + 2]), (min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2]))))))));
                            var_42 = ((/* implicit */unsigned long long int) min((var_42), ((+(13620969679866645449ULL)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 1) 
                        {
                            var_43 = (~(13330123894498157881ULL));
                            var_44 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_12)))));
                            var_45 = ((/* implicit */unsigned long long int) ((18446744073709551615ULL) <= (18446744073709551615ULL)));
                            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) arr_14 [i_0] [i_12 + 4] [i_0] [i_0]))));
                        }
                        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) arr_43 [i_0 - 1] [i_0] [i_0 + 2] [i_2] [i_12 + 1]))));
                        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) arr_17 [i_0 - 1] [i_0] [i_1] [i_1] [i_12 + 1]))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        arr_56 [i_16] [i_1] [i_0] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_40 [i_1] [i_0 - 2] [i_1] [i_2] [i_16] [i_16]))))));
                        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)45301)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 33521664))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_17 = 2; i_17 < 19; i_17 += 3) 
                        {
                            var_50 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (arr_6 [i_17 + 1] [i_17 + 1] [i_2] [i_1])));
                            var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_2] [i_16] [i_17 + 1] [i_17 - 2]))));
                            var_52 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_0 - 2] [i_17 - 2] [i_17 + 2]))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
    {
        for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 3) 
        {
            {
                var_53 = ((short) (unsigned short)59209);
                var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) arr_36 [i_19 + 3] [i_19 - 1] [i_19] [i_19 + 3] [i_19 - 1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (short)96)) < (((/* implicit */int) (short)29573)))))))) : (((((/* implicit */_Bool) arr_42 [i_18] [i_18] [i_19] [i_18] [i_19] [i_18] [i_18])) ? (arr_44 [i_18] [3ULL] [i_19 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
            }
        } 
    } 
}
