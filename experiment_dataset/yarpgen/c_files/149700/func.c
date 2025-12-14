/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149700
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) > (var_9))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((arr_10 [i_0] [i_3] [i_2] [i_3] [i_3] [i_3]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) > (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned short)5] [(unsigned short)5] [i_0] [i_3] [i_1] [(signed char)3]))) : (((unsigned int) min((arr_7 [i_2] [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_1] [5ULL] [i_1] [i_3])))))));
                            arr_13 [3ULL] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                            var_13 += ((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2]);
                            arr_14 [i_2] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) - (arr_0 [i_1])));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_19 [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) (~(var_3)));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -13)) ? (70716775) : (((/* implicit */int) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) 4503599627370432ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18442240474082181184ULL)) ? (15ULL) : (var_3))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        var_16 += ((/* implicit */unsigned long long int) (unsigned short)1536);
                    }
                    var_17 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_4 + 1]) | (arr_5 [i_0] [i_4] [i_4 - 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_6 = 3; i_6 < 7; i_6 += 4) 
                    {
                        arr_22 [i_1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_15 [i_1] [i_1]))))));
                        arr_23 [i_0] [i_1] [i_4 + 1] [i_6] = arr_5 [i_4 + 1] [i_6 - 2] [4];
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 2; i_7 < 7; i_7 += 3) 
                        {
                            var_18 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (18014398509481982ULL) : (18442240474082181183ULL))));
                            var_19 = ((/* implicit */unsigned int) ((unsigned short) var_2));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((unsigned short) 18442240474082181184ULL));
                            var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 8; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_33 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) + (514742307041583862ULL)));
                            arr_34 [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) 18446744073709551615ULL));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_4] [i_6] [i_9 - 1] [i_9]))))))));
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        arr_38 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-((-(arr_31 [i_4 + 1] [i_4] [i_4 + 1] [i_10] [i_10])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            var_24 = arr_9 [i_0] [i_0] [i_1] [(signed char)3] [i_10] [i_11];
                            arr_42 [i_1] [i_10] [i_4] [i_1] [i_1] = ((67645734912ULL) - (var_0));
                            arr_43 [i_0] [i_0] [i_4] [i_1] [i_11] = ((/* implicit */signed char) ((arr_1 [i_0] [5ULL]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 2147483647))) ? (((/* implicit */int) arr_3 [i_4 + 1])) : (((/* implicit */int) arr_27 [i_0] [i_4 + 1] [i_4 + 1] [i_4] [i_10] [i_11])))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            arr_47 [i_0] [i_1] [i_4] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_10])) >= (((/* implicit */int) arr_45 [i_4 - 1]))));
                            arr_48 [i_0] [i_1] [i_4] [i_10] [i_12] = (((_Bool)1) ? ((+(33554432))) : (((/* implicit */int) var_1)));
                            var_25 = ((/* implicit */int) max((var_25), ((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-19)) || (((/* implicit */_Bool) 4503599627370432ULL)))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        for (int i_14 = 0; i_14 < 10; i_14 += 4) 
                        {
                            {
                                var_26 = ((((/* implicit */_Bool) 4152261433U)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))));
                                arr_55 [i_0] [i_1] [i_1] [i_13] [i_4 + 1] [i_1] [i_13] = ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 1; i_16 < 7; i_16 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) ((0U) - (1765981526U)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_58 [2] [i_1] [i_15] [i_16])) ? (((/* implicit */int) arr_29 [i_1] [(signed char)5] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_17 [i_0])))) + (((/* implicit */int) arr_45 [i_16 + 2]))))) : (arr_18 [i_1])))));
                            arr_63 [i_0] [i_0] [i_1] [i_16] [i_0] = ((/* implicit */unsigned int) var_4);
                            var_28 = ((/* implicit */unsigned short) arr_8 [i_16 - 1] [i_16 + 1] [i_16 - 1]);
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) << (((arr_5 [i_16] [i_15] [i_0]) - (1011941696U))))))));
                        }
                        arr_64 [i_0] [i_1] [i_15] [i_1] [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_44 [i_0] [i_0] [i_1]);
                        arr_65 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned short)0);
                    }
                    var_30 = ((/* implicit */signed char) (_Bool)1);
                    arr_66 [i_15] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_7);
                    var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_58 [i_0] [i_1] [i_1] [(signed char)9]), (arr_58 [i_0] [i_1] [i_15] [i_15])))) && (((/* implicit */_Bool) var_9))));
                }
                var_32 = var_3;
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (signed char i_18 = 2; i_18 < 8; i_18 += 1) 
    {
        for (int i_19 = 4; i_19 < 8; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_21 = 0; i_21 < 10; i_21 += 1) /* same iter space */
                    {
                        arr_79 [i_18] [i_20] [i_19 - 4] [i_18] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_9 [i_18] [i_19 - 4] [i_19 + 1] [i_20] [i_20] [i_21])), (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_18 + 1] [i_18] [i_19] [i_20] [i_21] [i_21] [i_21])))));
                        arr_80 [i_21] [i_20] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (min(((+(((/* implicit */int) arr_62 [i_19])))), (((/* implicit */int) var_8))))));
                        var_34 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_21 [i_18] [i_19] [i_20] [i_21])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5036))) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_52 [i_18] [i_19] [i_20] [i_21] [i_19]) : (var_10)))))), (((arr_50 [i_19] [i_18 - 1] [i_19 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_19] [6ULL])))))));
                    }
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 10; i_22 += 1) /* same iter space */
                    {
                        var_35 -= ((/* implicit */unsigned short) (-(arr_69 [i_18] [i_18 - 2])));
                        /* LoopSeq 1 */
                        for (unsigned int i_23 = 0; i_23 < 10; i_23 += 4) 
                        {
                            arr_87 [i_18] [i_18] = ((arr_4 [i_19 + 1] [i_18 + 1]) << (((arr_54 [i_22]) - (2154808142U))));
                            arr_88 [i_18] [i_18] [i_20] [i_20] [(signed char)0] [i_22] [i_23] = arr_58 [i_18] [i_19 - 2] [i_22] [(_Bool)1];
                            var_36 = ((/* implicit */unsigned long long int) arr_10 [i_18 - 2] [i_20] [8ULL] [i_19 - 4] [i_20] [i_18 + 2]);
                        }
                        var_37 = ((signed char) var_11);
                    }
                    arr_89 [i_18] [i_19] [i_18] = ((/* implicit */int) arr_73 [i_18] [i_19]);
                }
            } 
        } 
    } 
}
