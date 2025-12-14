/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171022
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned char) var_2)), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))))) ? ((+(((((/* implicit */int) arr_0 [3LL] [3LL])) << (((((/* implicit */int) (unsigned char)255)) - (237))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(short)15]))) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)7] [(short)7]))) : (arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)226)), (arr_1 [i_0])))) ? (min((((/* implicit */long long int) (unsigned char)226)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_4 [(short)14] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-30682))));
    }
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) 1931974054U))));
    /* LoopNest 2 */
    for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        for (int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    arr_15 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 25)) ^ (4294965248U)));
                    arr_16 [i_2] [i_2 + 2] [i_2] [i_3 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2047U)) ? (arr_11 [i_3 - 1] [i_2] [i_2] [i_1 + 1]) : (arr_11 [i_1 - 1] [i_2] [i_3 - 1] [i_2 + 2])));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2 + 2] [i_2]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12508))) / (arr_13 [i_1])))));
                    var_13 = ((/* implicit */unsigned int) (+(arr_11 [i_1 - 2] [i_2] [i_1 - 2] [i_2])));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) var_8);
                        arr_23 [i_1] [i_2 + 1] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((short) 9223372036854775807LL));
                    }
                }
                for (short i_6 = 1; i_6 < 20; i_6 += 3) 
                {
                    var_15 *= ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_24 [17LL] [17LL] [3LL] [(unsigned short)6])), (var_0)));
                    var_16 = ((/* implicit */long long int) (unsigned char)2);
                }
                arr_26 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [12ULL] [i_2] [i_1 - 2] [(unsigned short)15])) ? (((((var_3) & (((/* implicit */unsigned long long int) -761105165)))) & (((/* implicit */unsigned long long int) arr_6 [i_2 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (unsigned char)98)))))));
            }
        } 
    } 
}
