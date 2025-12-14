/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105209
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((12624139674072365952ULL) ^ (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */long long int) var_1))))))) : (((/* implicit */unsigned long long int) ((((((var_16) + (9223372036854775807LL))) >> (((var_14) - (790070217335628860LL))))) ^ (((/* implicit */long long int) max((25165824), (((/* implicit */int) var_4))))))))));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)32749)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) | (var_7)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)18604)), (var_6)))) : (var_17)))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) var_6))) ^ (((unsigned int) var_8)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */int) (signed char)110))))), (((var_4) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) 1697552478))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (short)9102))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [5ULL])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21417))))))) : (((/* implicit */unsigned long long int) arr_0 [5] [i_0]))));
        var_22 = ((/* implicit */signed char) (unsigned short)0);
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((arr_4 [i_1]), (1802633961U)))))) || (((/* implicit */_Bool) (-(min((arr_5 [i_1]), (((/* implicit */long long int) (signed char)96)))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_9 [i_1] [(_Bool)0] [i_3]) - (((/* implicit */unsigned int) arr_7 [i_1] [i_3]))))) - (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)8)))))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_7 [i_1] [i_3])), (var_7)))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)15))))))) : (((/* implicit */long long int) (+((+(arr_7 [i_2] [i_3]))))))));
                    arr_12 [i_1] [0U] [i_2] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1764847198) | (-1940906942)))) && (((/* implicit */_Bool) ((var_12) % (((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_1 + 1])))))));
                    var_25 = ((/* implicit */_Bool) arr_4 [i_3]);
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                    {
                        arr_17 [i_1] [6] [i_2] [i_3] [13LL] = ((/* implicit */signed char) (-(min((max((((/* implicit */long long int) (signed char)-10)), (var_2))), (((/* implicit */long long int) var_13))))));
                        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)68)) ? (arr_11 [i_2] [i_3] [(short)9]) : (min((arr_10 [i_1] [i_1] [8]), (max((var_16), (((/* implicit */long long int) arr_6 [11]))))))));
                        var_27 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_8 [i_4]), ((short)21425)))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-33))) : (arr_9 [i_1] [i_1] [i_4])))))), (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */long long int) 0)) : (var_2)))));
                    }
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 4; i_6 < 11; i_6 += 3) 
                        {
                            var_28 ^= ((/* implicit */int) (((+(arr_19 [i_1] [i_2] [i_5] [i_6]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_1 + 1] [i_2] [i_5] [i_6 - 2]) >= (((/* implicit */unsigned long long int) var_3))))))));
                            arr_22 [i_1] [i_1] [i_3] [i_3] [3] [5] = ((/* implicit */long long int) (_Bool)1);
                        }
                        var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17682))) - (arr_13 [i_1] [6LL] [6LL])));
                        var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_19 [i_1 + 2] [i_2] [i_3] [i_5]) <= (((/* implicit */unsigned long long int) arr_7 [i_1 + 2] [i_3])))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                    {
                        arr_26 [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) arr_19 [i_1 + 3] [i_1] [i_1 + 2] [i_1 + 1]))));
                        var_31 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_15 [(_Bool)1] [i_2] [i_3]) < (((/* implicit */long long int) var_7)))))));
                        var_32 = ((/* implicit */unsigned short) (+(arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1])));
                    }
                }
            } 
        } 
        arr_27 [i_1] &= ((arr_15 [6U] [i_1] [i_1]) << (((max((var_2), (((/* implicit */long long int) arr_13 [i_1] [12ULL] [i_1 + 2])))) - (684487535952129094LL))));
    }
}
