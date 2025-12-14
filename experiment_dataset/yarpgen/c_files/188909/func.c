/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188909
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
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
                        {
                            var_14 -= ((((/* implicit */_Bool) arr_12 [0ULL] [i_0 - 1] [i_0] [i_0 - 2] [i_2] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */int) (short)2255)) : (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])));
                            arr_14 [i_0] [i_1] [6ULL] [6ULL] [12ULL] [(_Bool)1] [(unsigned char)19] = ((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (short)-2255))));
                        }
                        for (short i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            arr_18 [(_Bool)1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)2255)) ? (arr_17 [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_1])))));
                            arr_19 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_17 [i_0]))));
                        }
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_15 = ((((/* implicit */unsigned long long int) var_10)) * (arr_12 [i_0] [(short)3] [i_0] [8ULL] [i_0 - 3] [7ULL] [18LL]));
                            arr_23 [i_0] [i_0] [i_6] [i_3] [i_6] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 199452903)) / (11754751865375235703ULL)))) ? ((+(var_11))) : (0ULL)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_16 &= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_7)))) - (((/* implicit */int) arr_13 [i_1] [i_3] [i_1] [i_1] [i_1]))));
                            var_17 = ((/* implicit */long long int) ((arr_25 [i_0 - 3] [i_1] [i_2]) ? (((/* implicit */int) arr_25 [(short)11] [i_1] [i_1])) : (((/* implicit */int) arr_25 [i_0 + 1] [i_1] [i_7]))));
                        }
                        for (int i_8 = 4; i_8 < 18; i_8 += 2) 
                        {
                            var_18 &= ((/* implicit */long long int) (+(arr_10 [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 1])));
                            arr_30 [i_0] [i_1] = ((/* implicit */long long int) ((short) arr_13 [i_0] [i_1] [i_0 - 2] [i_8 - 2] [i_8]));
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((15056880541706754544ULL) == (((((/* implicit */_Bool) arr_16 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2243))) : (0ULL)))))) ^ (199452879)));
                            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) 6666179341006318505ULL)) ? ((-(((var_6) - (var_8))))) : (max((((/* implicit */unsigned long long int) ((long long int) 1059515593179926846ULL))), (max((var_1), (var_4)))))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_15 [0LL] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 + 1])))) + (((unsigned long long int) arr_15 [i_0] [i_0 - 3] [i_0] [i_0] [i_0 + 1]))))));
                        }
                        arr_35 [i_9] [i_2] [i_1] [i_1] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_1] [i_0 - 3] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_6 [i_0] [i_0] [i_0 - 3] [i_2])));
                        arr_36 [i_1] = (((!(((/* implicit */_Bool) arr_10 [(short)1] [(short)15] [(short)15] [i_0 + 1])))) ? (max((18283127470294479902ULL), (((/* implicit */unsigned long long int) arr_25 [i_0 - 1] [(short)8] [i_0 - 1])))) : (((arr_7 [9ULL] [i_1] [i_1] [i_9]) ? (max((var_6), (((/* implicit */unsigned long long int) var_13)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4955))) : (var_2))))));
                        arr_37 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) var_7);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_22 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))));
                        arr_40 [i_0] [(short)18] [i_1] [i_11] = ((((/* implicit */_Bool) var_8)) ? (arr_32 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        arr_43 [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_7)))));
                        arr_44 [(short)4] [(short)4] [(unsigned char)4] [12ULL] &= ((/* implicit */unsigned long long int) ((long long int) 14668511386364691852ULL));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        arr_49 [i_1] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1803))) != (((18446744073709551606ULL) % (8174346530797076549ULL)))));
                        arr_50 [i_0 - 3] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) 16594732104844203565ULL)) ? (var_6) : (arr_46 [i_0 - 2] [i_0 - 2]));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        var_23 ^= ((/* implicit */long long int) (((-(arr_33 [i_1] [i_1] [i_1] [i_0 - 1] [i_1]))) == ((~(arr_33 [i_0 - 3] [i_0 - 3] [i_1] [i_0 - 3] [i_14])))));
                        arr_55 [2ULL] [i_1] [i_2] [i_2] [i_14] = ((unsigned char) ((((/* implicit */_Bool) arr_53 [i_0 - 3] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) arr_41 [3LL] [4ULL] [i_1] [i_2] [i_14]))))) : (1012933680079087848ULL)));
                        var_24 = ((/* implicit */int) max((arr_28 [i_14] [15ULL]), (arr_24 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [13ULL] [(short)4])));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) min((max((var_5), (var_11))), (var_1)));
}
