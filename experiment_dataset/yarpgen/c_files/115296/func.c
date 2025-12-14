/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115296
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
    for (short i_0 = 3; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (short)-10524)))));
        arr_3 [i_0] = ((/* implicit */short) arr_2 [i_0] [10LL]);
    }
    for (short i_1 = 3; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_1])))) ? (((/* implicit */int) arr_2 [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (arr_2 [i_1] [i_1]))))))), (max((((/* implicit */unsigned int) arr_4 [i_1 - 1])), (((((/* implicit */_Bool) arr_4 [(short)3])) ? (arr_5 [(unsigned short)7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 3; i_3 < 18; i_3 += 2) 
            {
                for (long long int i_4 = 3; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_16 [i_5] [i_4] [i_1] [i_3] [i_1] [i_2] [7LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5 + 2] [(unsigned char)13] [i_5] [i_5] [i_1] [i_5])) ? (((/* implicit */int) arr_14 [i_5 + 2] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_5 + 2] [i_5] [(signed char)9] [i_5] [6LL]))));
                            arr_17 [i_1] [i_1] [17ULL] [17ULL] [i_1] [i_1] [(short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_3 - 1] [i_1])) ? (((/* implicit */int) arr_10 [(signed char)17] [8LL] [i_4] [5ULL])) : (((/* implicit */int) arr_4 [(short)7]))));
                            var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */unsigned long long int) arr_11 [i_1]);
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_1 - 3] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_1] [(unsigned char)7]))));
            var_16 *= ((/* implicit */unsigned char) ((arr_12 [(unsigned char)16] [i_1] [i_1 + 2] [i_1 + 3] [i_2] [i_1 - 1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(signed char)14] [i_2] [i_1] [i_2] [12ULL]))) : (var_10))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
        {
            arr_20 [i_1] [(signed char)15] = ((/* implicit */int) ((short) min((13429320201581475973ULL), (((/* implicit */unsigned long long int) (signed char)-45)))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 + 3])) ^ (((/* implicit */int) var_9))))) ^ ((+(arr_5 [i_1 - 1])))));
        }
        for (int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_18 = ((/* implicit */long long int) arr_4 [(unsigned char)17]);
            arr_23 [17ULL] [i_7] [i_1] = ((/* implicit */signed char) arr_4 [(unsigned char)16]);
            var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1]))) ^ (var_10)));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) ^ (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)41))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)27722))) ^ (1611871558U)))) : (arr_1 [i_1])));
        }
        arr_24 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (min((max((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-42))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (!(var_0)))))));
    var_22 *= ((/* implicit */unsigned char) var_4);
}
