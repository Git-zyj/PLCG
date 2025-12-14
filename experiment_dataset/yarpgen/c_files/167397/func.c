/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167397
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16390469359960585281ULL)) ? (332427445) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_8))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 -= ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0])));
        arr_3 [i_0] [1ULL] = ((((/* implicit */_Bool) 16390469359960585281ULL)) ? (-1809255353) : (((/* implicit */int) (unsigned char)177)));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16390469359960585281ULL)) ? (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) == (2056274713748966334ULL)))))));
                    var_14 = var_5;
                    arr_8 [i_2] [2LL] [2LL] = ((/* implicit */unsigned long long int) ((((long long int) var_2)) >> (((arr_7 [i_1 + 1] [i_2 - 1]) - (1081699275)))));
                    arr_9 [i_0] [i_2] [i_1] [(short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (var_2)));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((arr_10 [(signed char)5]) / (((/* implicit */long long int) ((/* implicit */int) var_9))))) << ((((((+(-186558481))) + (186558507))) - (23)))));
            arr_13 [i_3] = ((/* implicit */short) var_8);
            arr_14 [i_0] [i_3] = ((/* implicit */unsigned char) var_7);
            var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -186558469))))) : (((/* implicit */int) arr_2 [i_0]))));
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            arr_18 [i_0] = ((/* implicit */int) var_8);
            var_17 = ((/* implicit */unsigned char) ((signed char) ((2056274713748966360ULL) ^ (16390469359960585288ULL))));
        }
        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            var_18 *= ((/* implicit */unsigned long long int) ((short) 2056274713748966315ULL));
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                arr_27 [i_0] [i_0] [i_5] [i_6] = ((unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_5] [i_0])) >> (((arr_1 [5ULL]) + (5927009341836481511LL)))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [7] [7] [i_6] [i_6] [i_6] [0])) ? (((/* implicit */int) var_4)) : (arr_32 [i_0] [3] [i_0] [i_7] [7ULL] [i_0] [7ULL]))))));
                            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_25 [(short)11] [(short)11] [(short)11])))));
                            var_21 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)2]))) : (18446744073709551615ULL))) << (((arr_19 [i_5 - 1] [i_5 - 1] [i_6]) - (785398558759831896LL))));
                            var_22 = ((/* implicit */int) (!(((((/* implicit */long long int) arr_31 [i_8] [i_7] [i_7] [i_6] [i_0] [i_0])) != (arr_19 [i_0] [i_5] [i_7])))));
                        }
                    } 
                } 
            }
            for (unsigned char i_9 = 2; i_9 < 12; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_10 = 3; i_10 < 9; i_10 += 2) 
                {
                    var_23 = ((/* implicit */signed char) (~(((((/* implicit */int) var_4)) & (((/* implicit */int) var_10))))));
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                    var_25 = ((/* implicit */int) var_1);
                    var_26 = (-(((((((/* implicit */int) arr_15 [(unsigned char)2])) + (2147483647))) >> (((arr_34 [i_0] [i_0] [i_5] [i_9] [i_0] [i_5] [i_9]) - (681405123))))));
                }
                arr_39 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (2056274713748966334ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19497)))))) ? (2056274713748966334ULL) : (2056274713748966341ULL)));
                /* LoopSeq 3 */
                for (int i_11 = 2; i_11 < 12; i_11 += 2) 
                {
                    arr_42 [3LL] [3LL] [3LL] [(signed char)11] [(unsigned char)1] [i_9] = ((/* implicit */int) ((((((arr_12 [i_5 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9]))))) + (9223372036854775807LL))) << ((((-(((/* implicit */int) arr_15 [i_9 + 1])))) - (93)))));
                    var_27 = ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_41 [i_11] [i_5 + 2] [i_9 + 1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551596ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                }
                for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    var_28 |= ((((((/* implicit */_Bool) arr_30 [(unsigned char)11] [i_5] [i_9] [(unsigned char)11])) ? (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_12] [i_5 + 2] [(signed char)2])) : (((/* implicit */int) var_7)))) - ((+(-1809255346))));
                    var_29 *= ((/* implicit */signed char) ((16390469359960585297ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))));
                    arr_46 [i_0] [i_5 - 1] [i_5 - 1] [i_0] [i_5 - 1] [i_0] |= ((/* implicit */long long int) arr_15 [i_5 - 1]);
                }
                for (int i_13 = 2; i_13 < 12; i_13 += 1) 
                {
                    var_30 = ((/* implicit */signed char) arr_40 [i_13] [i_13] [i_9] [i_9] [i_9] [i_13 - 2]);
                    arr_50 [i_0] [i_0] [i_0] [i_9] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0]))))) ? (((long long int) arr_45 [3] [3] [5LL] [i_13] [i_13] [i_5])) : (arr_12 [i_13 + 1])));
                    var_31 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (arr_19 [i_0] [i_5] [i_13]))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 16390469359960585274ULL))));
                }
                arr_51 [i_0] [4LL] [i_9] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0]);
                var_33 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_11 [i_0] [(unsigned char)1])) >> (((((/* implicit */int) var_1)) - (88))))));
            }
            /* LoopNest 2 */
            for (short i_14 = 2; i_14 < 9; i_14 += 2) 
            {
                for (signed char i_15 = 4; i_15 < 11; i_15 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14195830)) ? (16390469359960585275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68)))));
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [6] [i_0] [6] [6] [i_14 + 1] [i_0] [i_16])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_17 [i_5] [4LL] [i_15 + 1]))));
                            arr_64 [i_16] [(signed char)8] [(short)5] [(signed char)8] [(signed char)8] [(signed char)8] [7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_58 [i_0] [i_0] [i_5 - 1] [i_14 + 4] [i_16] [i_0])) || (((/* implicit */_Bool) arr_58 [i_5] [1ULL] [i_5 + 2] [i_14 + 2] [i_14] [(signed char)10]))));
                            var_36 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_5] [i_0] [i_15]))) / (arr_10 [i_0])))) ? (((/* implicit */int) arr_58 [8LL] [i_5] [i_5 - 1] [i_14 + 2] [i_14 + 4] [i_15 - 1])) : (((/* implicit */int) var_8)));
                        }
                    }
                } 
            } 
        }
        for (signed char i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            arr_68 [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
            arr_69 [5LL] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0])) || (((/* implicit */_Bool) arr_29 [11] [i_0] [11] [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_0] [(unsigned char)10] [1] [(unsigned char)10] [(unsigned char)1])))))));
        }
    }
}
