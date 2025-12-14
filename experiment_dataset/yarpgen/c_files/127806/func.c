/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127806
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
    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(2992986981U)))) ? (7U) : (0U))) / (((/* implicit */unsigned int) (-2147483647 - 1)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)5404)) : (((/* implicit */int) var_2))))), (min((((/* implicit */long long int) arr_1 [i_0])), (9223372036854775807LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_15), (var_18)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0]))))) : (((/* implicit */int) arr_0 [(_Bool)1] [6ULL])))))));
        var_22 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [8U]);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) * (((long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = arr_5 [i_1];
        arr_6 [(signed char)7] [i_1] = ((/* implicit */unsigned short) ((((((_Bool) arr_4 [(unsigned char)3])) && ((!(((/* implicit */_Bool) arr_5 [(unsigned char)1])))))) ? (((/* implicit */int) arr_5 [3U])) : (((/* implicit */int) min((((/* implicit */unsigned short) min((arr_1 [(_Bool)1]), (arr_1 [(signed char)4])))), (min((((/* implicit */unsigned short) arr_4 [i_1])), (var_2))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((unsigned int) (short)-13250)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_2] [4ULL] [4ULL] &= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1))))));
                        arr_16 [i_2] = ((/* implicit */unsigned int) arr_9 [i_4] [(_Bool)0]);
                        var_25 = ((/* implicit */unsigned long long int) arr_10 [4] [i_2]);
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) arr_10 [i_1] [(short)11]);
        }
        /* vectorizable */
        for (unsigned char i_5 = 3; i_5 < 11; i_5 += 4) 
        {
            var_27 *= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [(unsigned short)10] [2] [6LL] [i_5 - 3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_17 [(_Bool)1] [10U] [i_5]))))) : (arr_14 [i_5] [(_Bool)1] [10U] [11LL])));
            arr_19 [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (short)-11633))) ? (((((/* implicit */_Bool) var_18)) ? (67043328) : (((/* implicit */int) arr_12 [i_1] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_6 = 3; i_6 < 11; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                arr_24 [(signed char)0] = ((/* implicit */unsigned int) arr_22 [i_1] [(unsigned short)3]);
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    arr_29 [i_8] [i_8] [4U] [8LL] [i_6 + 1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7]))) & (var_8))) : (((/* implicit */unsigned int) (-(67043328))))))), (((unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (unsigned char)29)))))));
                    arr_30 [4] [(unsigned char)11] [i_7] [i_6] [8U] = ((/* implicit */short) arr_23 [11LL] [i_6] [i_7] [i_8]);
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) arr_13 [i_1] [(short)10] [(unsigned short)6] [(unsigned char)8] [(_Bool)1] [i_9]);
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) arr_32 [i_9] [(signed char)8] [i_10]);
                        arr_35 [i_1] [11ULL] [i_9] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) * (((/* implicit */int) arr_26 [9LL] [i_6 - 1] [i_9] [i_10])))) - ((~(((/* implicit */int) (unsigned char)120))))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (short)16383))));
                    }
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_17 [i_7] [(unsigned short)2] [i_7])) - (38258)))))) : (var_1))))));
                }
            }
            var_32 *= arr_9 [(short)6] [(unsigned short)3];
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_31 [i_1] [8ULL] [i_6] [0U] [i_11]))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            arr_43 [i_13] [i_11] [i_13] = ((/* implicit */int) (~((~(((((/* implicit */_Bool) (short)27497)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)))))));
                            arr_44 [i_13] [7ULL] [i_11] [(unsigned short)4] [i_12] [3] [i_13] = ((/* implicit */unsigned short) min(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_13] [0] [i_13])) : (((/* implicit */int) var_14)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            var_34 -= ((/* implicit */signed char) var_6);
                            arr_49 [4LL] [11ULL] [(unsigned short)0] [5] [i_15] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min(((unsigned short)30162), (var_0))), (((/* implicit */unsigned short) ((unsigned char) var_11)))))) ? (((/* implicit */unsigned long long int) 0U)) : (min((((((/* implicit */_Bool) var_15)) ? (arr_33 [(_Bool)1] [i_6] [i_11] [i_14] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_14]))))), (((/* implicit */unsigned long long int) ((arr_1 [i_14]) ? (((/* implicit */int) arr_5 [8U])) : (((/* implicit */int) arr_27 [i_1] [i_6 - 1] [0U] [0] [4ULL])))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_16 = 1; i_16 < 10; i_16 += 4) 
            {
                arr_52 [i_16 + 1] [i_6] &= ((/* implicit */unsigned short) arr_31 [(unsigned short)2] [i_1] [i_6] [10U] [(short)0]);
                arr_53 [i_1] [i_6] [i_6 + 1] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49938))) == (4294967295U)));
                arr_54 [(unsigned char)3] [i_1] [i_6] [8ULL] = (~((~(arr_11 [(_Bool)1] [8] [i_16] [i_16 - 1]))));
            }
        }
        for (int i_17 = 4; i_17 < 11; i_17 += 4) 
        {
            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_40 [(unsigned short)3] [i_17])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_56 [0]))))))) ? (((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55587))) : (3229049803U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_39 [0U] [i_17]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) ((arr_23 [(_Bool)1] [(signed char)3] [(unsigned short)9] [i_17]) > (((/* implicit */unsigned long long int) arr_31 [2ULL] [i_17] [i_1] [i_17] [8ULL]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 5ULL))))))))));
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            arr_66 [i_20] [11] [1U] [i_19] [8ULL] [i_20] = ((/* implicit */unsigned int) var_11);
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) min((arr_4 [i_1]), (min((arr_4 [i_1]), (arr_4 [i_17 - 4]))))))));
                        }
                        arr_67 [i_1] [i_17 + 1] [1] [i_19] [i_19] |= ((/* implicit */short) ((((((/* implicit */_Bool) 0)) ? (((unsigned long long int) 12380591666616748302ULL)) : (((/* implicit */unsigned long long int) -495526416)))) != (arr_11 [(_Bool)1] [i_19] [(short)2] [6LL])));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (0U)))))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((((-27) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_22 [i_1] [i_17])))))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) 
        {
            arr_71 [(short)8] [11LL] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_60 [i_1] [9ULL] [(unsigned short)3] [10])));
            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_21])) ? (var_9) : (var_9)));
        }
    }
}
