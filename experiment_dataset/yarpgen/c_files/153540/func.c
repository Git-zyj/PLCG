/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153540
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] |= ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (((/* implicit */long long int) arr_2 [9ULL] [i_1] [9ULL])) : (arr_3 [5LL] [5LL])))))), (max((((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(signed char)6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) : (arr_3 [i_1] [i_1]))))))));
                    arr_7 [(signed char)20] [i_2] [(signed char)20] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)2] [7ULL])), (((unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (12839197959524927588ULL) : (((/* implicit */unsigned long long int) arr_0 [i_2]))))) ? (arr_2 [i_2 + 1] [i_2 - 1] [i_2 + 1]) : (arr_5 [i_2] [i_2 + 2] [i_2 + 2]))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)29888)) ? (((/* implicit */int) (unsigned char)12)) : (1420781721)));
                        arr_10 [i_2] = ((/* implicit */unsigned long long int) (((+(((long long int) 0ULL)))) > (((arr_4 [i_2 + 1] [i_2 + 1] [i_3 - 2]) ^ (min((arr_0 [i_0]), (((/* implicit */long long int) (unsigned short)18441))))))));
                        arr_11 [i_2] [i_1] [17LL] [6LL] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3 + 2] [i_3 + 1]))) != (min((min((((/* implicit */long long int) arr_8 [3LL] [i_2] [i_1] [i_0])), (arr_3 [i_0] [i_2]))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) arr_2 [(unsigned char)18] [(unsigned char)18] [i_3 - 1])) : (arr_3 [i_0] [i_3])))))));
                        arr_12 [i_0] [i_2] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) 2412164491U);
                    }
                    for (short i_4 = 2; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0] [i_1] [i_4 - 1] [(signed char)14]), (arr_8 [i_2] [i_0] [i_4 - 2] [i_2]))))) > (((((/* implicit */_Bool) -7539448773464693003LL)) ? (-7401280618481034637LL) : (7529556193654495819LL)))));
                        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) -7529556193654495811LL)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)40))));
                    }
                    for (short i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_15 [i_2 + 2] [i_5] [i_5 - 2] [(short)16] [(signed char)18])), (arr_14 [i_5 + 2]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_2]))))) ? (max((((/* implicit */int) (short)4565)), (arr_9 [i_0] [i_0] [10U]))) : (((((/* implicit */int) var_3)) | (((/* implicit */int) arr_17 [i_5] [i_2] [(unsigned char)6] [i_0])))))))));
                        var_22 = (-(((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_1] [i_1] [(_Bool)1] [1LL] [i_2] [i_1]), (arr_16 [(unsigned short)9] [i_0] [i_1] [(short)3] [i_2] [i_5]))))))));
                        arr_18 [6ULL] [6ULL] [i_2 + 2] [6ULL] [6ULL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_1 [i_2 - 1] [i_5]), (arr_1 [i_2 + 3] [7ULL])))) < (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [5ULL] [i_1] [i_1]))) | (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_8 [i_1] [i_0] [3ULL] [i_1])), ((short)0))))) : (min((7529556193654495819LL), (((/* implicit */long long int) arr_5 [i_2] [10] [i_2]))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2]))) < (4611685880988434432LL)))) : (((/* implicit */int) (signed char)108))));
                    }
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */unsigned long long int) ((max((var_17), (((/* implicit */unsigned long long int) min(((signed char)4), (((/* implicit */signed char) var_1))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) var_15)) ? (var_10) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))))))));
}
