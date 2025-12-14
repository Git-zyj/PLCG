/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186567
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_10 += ((/* implicit */unsigned long long int) 1610612736);
                        var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_0 + 2] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_5 [(signed char)15] [i_1] [(short)9] [i_3])) : (arr_1 [i_3])))));
                        var_12 = ((/* implicit */unsigned int) arr_10 [i_3] [i_3] [i_2 + 1] [i_1 + 1] [i_0] [i_0 + 1]);
                    }
                } 
            } 
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20943)) ? ((+(-1610612737))) : (((/* implicit */int) var_1))));
        }
        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 + 3] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (var_4)))), (max((arr_1 [i_0 + 3]), (arr_1 [i_0 + 1])))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4] [(_Bool)1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1610612737)) ? (((/* implicit */int) arr_6 [i_0] [(unsigned char)13] [6ULL])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0 - 1]))))) : (arr_2 [i_0])));
            arr_13 [i_0] = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) min((-1610612737), (arr_5 [i_0] [i_0] [i_0] [i_4])))), (min((arr_2 [2ULL]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0])))))));
        }
        var_16 &= ((/* implicit */int) min((min(((~(var_9))), (((/* implicit */unsigned long long int) (signed char)20)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-20944)))), (arr_5 [i_0] [(_Bool)1] [4ULL] [4ULL]))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            for (unsigned char i_6 = 4; i_6 < 15; i_6 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 3; i_7 < 15; i_7 += 2) 
                    {
                        arr_22 [i_0] [(signed char)15] [i_0] = ((/* implicit */signed char) (unsigned char)125);
                        var_17 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_7 + 2] [i_0 - 1] [i_7] [i_6 - 2])) ? (((/* implicit */int) var_2)) : (arr_5 [i_7 - 3] [i_0 - 1] [i_0 - 1] [i_6 - 1])))));
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3030244392U)) ? (((/* implicit */int) var_6)) : (arr_5 [i_7 - 1] [i_7 - 1] [i_7 + 2] [(signed char)15])))) ? (((((/* implicit */_Bool) arr_5 [i_7 + 2] [i_7 - 2] [i_7 - 1] [i_7 - 1])) ? (arr_5 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2]) : (arr_5 [i_7 + 2] [i_7 - 2] [i_7 + 2] [i_7]))) : (((((/* implicit */_Bool) arr_5 [i_7 + 2] [i_7 - 3] [i_7 - 1] [(signed char)8])) ? (((/* implicit */int) (unsigned short)20645)) : (arr_5 [i_7 - 2] [i_7 + 2] [i_7 + 1] [4LL])))));
                        arr_23 [i_0] = ((/* implicit */unsigned short) (-(min((-7576312166902351479LL), (((/* implicit */long long int) arr_18 [i_0] [i_6] [i_7 + 1]))))));
                    }
                    for (short i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [14LL] [i_5] [i_5] [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))))) : (arr_0 [i_0 + 2])))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(signed char)15] [3LL]))) : (var_4)))) ? (min((7576312166902351479LL), (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1))))))) ? (min((arr_1 [i_0 + 3]), (arr_1 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(2600417671401908892ULL)))))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (arr_6 [i_0 - 1] [i_5] [i_5])));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 4; i_9 < 15; i_9 += 3) 
                    {
                        arr_30 [i_0] [13ULL] [(_Bool)1] [i_9] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_22 = (-(((/* implicit */int) var_6)));
                            arr_34 [i_5] [i_5] [i_6 + 2] [i_5] [1ULL] [(unsigned char)16] = ((/* implicit */long long int) (signed char)8);
                            var_23 *= ((/* implicit */unsigned long long int) ((short) arr_8 [i_6 - 4] [i_6 - 4] [i_9 - 3] [i_10 - 1] [i_10] [i_10]));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-32)) ? (((((/* implicit */_Bool) (short)20943)) ? (5428810945496081401LL) : (((/* implicit */long long int) -1610612737)))) : (var_7)));
                        }
                        arr_35 [i_0] [13LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)20943))))) ? (((/* implicit */long long int) var_4)) : (var_7)));
                    }
                    var_25 = ((/* implicit */unsigned long long int) (-(3030244387U)));
                    var_26 -= ((/* implicit */unsigned char) min((-7576312166902351510LL), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                }
            } 
        } 
        arr_36 [(unsigned char)4] [i_0] = ((/* implicit */_Bool) var_8);
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_1 [(short)4]))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 3) 
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((long long int) -7576312166902351479LL))) : (((((/* implicit */_Bool) arr_38 [i_11 + 2])) ? (((((/* implicit */_Bool) arr_38 [i_11])) ? (((/* implicit */unsigned long long int) var_4)) : (var_9))) : (((/* implicit */unsigned long long int) (-(-9223372036854775799LL)))))))))));
        var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (2600417671401908909ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5282)))))) ? ((~(arr_38 [i_11 + 3]))) : ((+(arr_38 [i_11])))));
        var_30 += ((/* implicit */short) min((((/* implicit */unsigned long long int) 1610612737)), (((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7576312166902351478LL)))))) : (2600417671401908909ULL)))));
        var_31 = ((/* implicit */long long int) var_8);
    }
    var_32 = ((/* implicit */unsigned int) var_8);
}
