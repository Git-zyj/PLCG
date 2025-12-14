/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17935
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
    var_14 = ((/* implicit */unsigned long long int) (((~(((var_13) >> (((var_12) - (4023995749U))))))) / (((/* implicit */long long int) ((/* implicit */int) min(((signed char)82), (((/* implicit */signed char) (_Bool)1))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)82))))), ((-(3055425477U)))))) - (min((min((var_0), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) var_4)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) 3421934568U)) : (0LL)))) ? (3110547918866915847ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) ((1620291974) > (((/* implicit */int) arr_8 [i_1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        arr_16 [i_2] [i_3] [i_3] [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) arr_6 [i_1] [i_4])))));
                        arr_17 [i_1] [i_2] [4ULL] [(short)0] [i_1] [(short)0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (-5LL) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) & ((-9223372036854775807LL - 1LL))))));
                        var_16 = (-(8598867446568240432ULL));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_31 [i_1] [i_5 - 1] [i_6] [i_7] [4LL] = ((/* implicit */unsigned short) (((~(var_5))) / (((/* implicit */int) (signed char)-81))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 873032727U)) ? (arr_26 [i_1] [i_1] [8] [i_7] [i_8] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [3LL]))))) : (arr_20 [i_5 + 1] [i_5 + 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            arr_36 [i_1] [i_10] [i_9] [i_9] [i_10] [i_10] [i_5 - 1] = ((/* implicit */unsigned short) 15219185U);
                            var_18 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_9])) ? (arr_9 [i_1] [i_1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                            var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (arr_20 [i_1] [i_5]) : (((/* implicit */long long int) var_12))));
                            var_20 ^= ((/* implicit */unsigned short) ((1427887834600785274LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)98)))));
                        }
                    } 
                } 
            }
            arr_37 [(signed char)3] [i_5 - 1] [i_5] = ((/* implicit */long long int) 934107847);
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (unsigned short)12677))));
            arr_38 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3735001031U)) ? (((((/* implicit */_Bool) var_7)) ? (8892290664109101712ULL) : (var_3))) : (arr_26 [i_1] [i_5] [i_5 + 1] [(short)7] [i_1] [i_5])));
            var_22 = ((/* implicit */unsigned int) ((long long int) var_5));
        }
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            var_23 = ((/* implicit */signed char) 8892290664109101705ULL);
            var_24 = ((/* implicit */unsigned short) (~(1753034670U)));
            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_11] [i_1] [i_11] [i_11]))));
        }
    }
    for (short i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
    {
        var_26 = max((((((/* implicit */_Bool) 8892290664109101712ULL)) ? (((/* implicit */unsigned long long int) 4248775522U)) : (3847460978329808432ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)245)) != (((/* implicit */int) ((((/* implicit */int) arr_35 [6ULL] [i_12] [i_12])) < (((/* implicit */int) var_11)))))))));
        var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_12] [8] [i_12])) >> (((((/* implicit */int) (signed char)82)) - (55)))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)32237)), (var_5)))) : (min((8892290664109101705ULL), (((/* implicit */unsigned long long int) 2541932635U))))))));
    }
    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        for (int i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((9484860709743902585ULL), (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_49 [i_13] [i_14] [i_15]))))) : (((((/* implicit */_Bool) arr_50 [i_14] [i_14] [i_14])) ? (max((((/* implicit */unsigned long long int) -1)), (var_0))) : (((/* implicit */unsigned long long int) (-(9223372036854775807LL)))))))))));
                                var_29 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)197))))) / (5507708296009048606ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 3) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_56 [i_13] [i_14] [i_14] [i_18] [i_19] [i_19])) ? (5507708296009048627ULL) : (((/* implicit */unsigned long long int) var_12)))) > (var_3))))));
                                arr_63 [i_13] [i_14] [5] [i_14] [i_19] [5] [i_18] = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_56 [i_13] [i_14] [i_14] [i_18] [i_14] [i_13]), (var_12)))) ? (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2593))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_14])) ? (arr_54 [(signed char)11] [i_18] [(signed char)11]) : (var_10)))))) ^ (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -696987642))))), (((arr_46 [i_18] [i_14]) | (var_0)))))));
                                arr_64 [i_13] [i_13] [i_15] [0] [i_19] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_13] [i_14] [i_15] [i_18 + 1] [i_18 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_49 [i_13] [i_14] [i_15]), (((/* implicit */short) var_1)))))) : (((((/* implicit */_Bool) 6276457503657115697ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13] [i_14]))) : (-9223372036854775789LL)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [4U] [i_14] [i_14] [i_18] [i_19])) ? (var_3) : (((/* implicit */unsigned long long int) 0U))))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) -1))));
                }
            } 
        } 
        arr_65 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9554453409600449911ULL)) ? (11870717349733084293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
        var_32 = ((/* implicit */unsigned long long int) (-(9223372036854775807LL)));
        /* LoopNest 3 */
        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            for (signed char i_21 = 3; i_21 < 9; i_21 += 3) 
            {
                for (signed char i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    {
                        var_33 = ((/* implicit */long long int) min((1537776613U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_13] [i_20] [i_13] [i_22])) ? (((/* implicit */int) arr_69 [i_13])) : (((/* implicit */int) var_11))))))))));
                        var_34 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_57 [i_13] [i_13] [i_21] [0ULL]))))) != (-9223372036854775789LL)))), (((((-5946462049793966152LL) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)1))))));
                        arr_74 [i_13] [8ULL] [i_21] [i_22] = arr_53 [(signed char)6] [(signed char)6] [i_13];
                        arr_75 [i_13] [i_20] [2ULL] [i_13] = max(((~(0U))), (var_9));
                    }
                } 
            } 
        } 
        arr_76 [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
    }
    var_35 = ((/* implicit */short) var_9);
}
