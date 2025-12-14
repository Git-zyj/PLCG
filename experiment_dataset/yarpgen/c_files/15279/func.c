/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15279
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_1] [i_2 - 1]) : (((/* implicit */unsigned long long int) var_11))))) || (((/* implicit */_Bool) arr_6 [i_2 - 3] [i_1] [i_0 - 2] [i_0 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (arr_5 [i_0 - 1] [i_1] [i_1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)159))))) != (max((arr_6 [i_2] [(unsigned short)3] [i_0] [i_0]), (arr_6 [i_0] [i_0 - 1] [(unsigned char)4] [i_2]))))))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (((~(var_13))) & (((/* implicit */long long int) min((var_10), (((/* implicit */int) var_4)))))))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned int) var_11)) <= (2978424349U)))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_1 [7U] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_1] [i_0 + 1])))));
                }
                for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
                {
                    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0] [i_0 - 2])) ? (arr_6 [i_0] [i_0] [i_0] [i_0 + 1]) : (arr_6 [8LL] [i_0] [(short)20] [i_0 + 2]))) : (((arr_6 [i_0] [i_0] [i_0] [i_0 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned int) 47659350)) * (1041308587U))))));
                        var_17 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 2] [i_3 + 3] [i_3]))) * (max((arr_8 [i_3 - 3] [i_3] [i_3] [i_0]), (((/* implicit */long long int) arr_13 [i_3 + 2] [i_1] [i_1] [i_1]))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((var_5) >> (((var_11) + (549598673))))) : (((/* implicit */int) arr_3 [2] [i_3] [i_3]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((47659358) > (((/* implicit */int) (unsigned char)157)))))) / (((((/* implicit */unsigned long long int) var_11)) & (arr_5 [i_0] [i_1] [(short)8] [9U])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_18 [4] [4] [4] = ((/* implicit */signed char) arr_10 [i_5] [(_Bool)1] [(_Bool)1]);
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_17 [i_0 + 2]))));
                        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 1] [i_0 + 1] [i_3 - 2])) && (((/* implicit */_Bool) arr_16 [i_0] [i_0 + 2] [i_0 + 1] [i_3 - 2]))));
                        var_21 |= ((/* implicit */short) var_13);
                    }
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((long long int) ((((/* implicit */int) arr_2 [i_0] [21ULL] [i_0])) >= (((/* implicit */int) arr_3 [i_3] [(_Bool)0] [(_Bool)0]))))) != (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 + 1]))))))));
                }
                var_23 = ((/* implicit */unsigned short) (((~(63))) > (-62)));
            }
        } 
    } 
    var_24 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
}
