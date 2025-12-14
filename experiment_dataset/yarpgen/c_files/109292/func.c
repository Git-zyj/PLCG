/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109292
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
    var_16 = ((/* implicit */_Bool) (short)-1);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_11))) * (((/* implicit */int) arr_7 [i_2] [i_1 + 1] [i_0]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            arr_13 [13U] [i_1] [9U] [i_1] [1LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_4 + 1] [i_1] [i_4 - 3] [6LL] [15ULL])) ? (((/* implicit */int) arr_6 [i_4 + 2] [i_4] [i_1] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7])) : (((/* implicit */int) arr_6 [i_4 + 1] [6] [i_1] [2] [2] [i_4]))));
                            arr_14 [i_0] [i_0] [(unsigned short)12] [i_1] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_3 - 1] [i_1 - 1] [i_1] [10])) - (arr_4 [i_0] [i_0])));
                            arr_15 [i_3] [i_1] [1ULL] [i_3] [i_3] = ((/* implicit */long long int) 0U);
                        }
                        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [4ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */int) arr_6 [5LL] [5LL] [i_1] [i_3] [(short)1] [(short)14]))))) ? (arr_11 [(signed char)2] [13LL] [i_3]) : (((/* implicit */long long int) min((-1782511975), (((/* implicit */int) (short)22)))))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_2 [(signed char)9] [i_1] [i_0]))))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_1] [i_1] [i_1])) + (67108863)))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [6] [i_5] [i_1] [i_5])))));
                        }
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((-67108864) < (((/* implicit */int) (!(((/* implicit */_Bool) 3844137901647937884LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)2))) : ((+(((3435406753671675864LL) + (((/* implicit */long long int) ((/* implicit */int) var_1))))))))))));
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -2078752854)) / (arr_11 [i_0] [i_0] [i_0])));
        arr_21 [(unsigned short)3] [i_0] = ((/* implicit */unsigned long long int) (+(9223372036854775807LL)));
    }
    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            arr_27 [i_7] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (+(-67108848)))) ? (((/* implicit */int) arr_26 [i_7] [i_6] [i_6])) : (((/* implicit */int) arr_24 [i_6 + 2]))));
            var_20 ^= ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1LL)), (arr_25 [i_6] [i_6])))) && (((/* implicit */_Bool) arr_26 [i_6 - 1] [i_7] [i_7])))) || (((/* implicit */_Bool) 1782511967))));
        }
        var_21 = ((/* implicit */int) var_7);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (~(4807895355690898452LL))))));
        arr_28 [i_6] [i_6] = ((/* implicit */_Bool) var_5);
    }
    for (unsigned short i_8 = 2; i_8 < 8; i_8 += 3) 
    {
        arr_31 [(unsigned short)5] = ((/* implicit */unsigned long long int) min((((arr_5 [i_8] [(_Bool)1] [(_Bool)1] [i_8]) ? (-1712345586940410793LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)6] [10ULL] [10ULL] [(signed char)2]))))), (((/* implicit */long long int) ((arr_12 [(signed char)10] [i_8] [i_8 + 3] [i_8 + 3] [(signed char)10]) != (arr_12 [(unsigned short)4] [i_8] [i_8 + 3] [i_8] [(unsigned short)4]))))));
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62134))) : (131913922486906369LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_8] [i_8] [0] [i_8] [i_8] [i_9 + 1])))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) 1LL))));
        }
        for (short i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 3; i_11 < 10; i_11 += 1) 
            {
                for (signed char i_12 = 3; i_12 < 9; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((1564498372U) * (((/* implicit */unsigned int) -964221842)))))));
                        /* LoopSeq 1 */
                        for (int i_13 = 3; i_13 < 10; i_13 += 2) 
                        {
                            arr_45 [4] [6LL] [i_10] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(10ULL)))) ? (((((/* implicit */int) arr_6 [(unsigned short)15] [(signed char)14] [i_10] [i_12 + 2] [i_13] [6ULL])) / (((int) (short)2940)))) : (((/* implicit */int) var_3))));
                            arr_46 [i_10] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_17 [(unsigned char)15] [i_10] [(signed char)14] [i_10] [6]) ? (arr_35 [i_10]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_13] [i_10] [i_10] [i_10] [6LL]))))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((short) ((unsigned short) var_4))))));
                            var_27 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_4 [i_11 - 2] [i_13 - 2])) & (0ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_44 [i_8 + 1] [i_10] [i_11] [0LL] [i_13])))) ? (((((/* implicit */_Bool) 1564498372U)) ? (var_15) : (arr_18 [i_10] [i_13] [(signed char)8] [(signed char)8] [(short)2] [(short)2] [i_10]))) : (((/* implicit */long long int) 1572864)))))));
                            var_28 = ((/* implicit */unsigned long long int) arr_34 [i_8]);
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_26 [i_8] [8LL] [14U]))));
        }
    }
    for (int i_14 = 0; i_14 < 15; i_14 += 1) 
    {
        arr_49 [i_14] [i_14] = ((/* implicit */int) arr_48 [i_14]);
        arr_50 [(unsigned short)9] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)14387)) ? (((/* implicit */int) max((arr_47 [i_14]), (arr_47 [i_14])))) : (((((/* implicit */int) arr_47 [i_14])) - (((/* implicit */int) arr_47 [i_14]))))));
    }
}
