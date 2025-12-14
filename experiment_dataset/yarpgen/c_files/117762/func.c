/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117762
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
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) var_7);
                    arr_7 [i_1] [9LL] = ((/* implicit */int) 11556451218374726793ULL);
                    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0]))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_2]))) : (((var_2) - (arr_0 [i_0] [i_0 + 1])))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((arr_5 [i_0] [i_0 - 4] [i_0 + 2] [(short)9]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-28330))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0])) - (((/* implicit */int) arr_5 [(short)9] [i_1] [i_2] [i_2]))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [(unsigned short)4])) ? (((/* implicit */int) var_12)) : (-1704990386))), (((/* implicit */int) var_3)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (short)-28327)))) >= (((/* implicit */int) (short)-2)))))) ^ (min((min((((/* implicit */unsigned int) (short)28330)), (arr_2 [i_1 - 1] [i_1]))), (((/* implicit */unsigned int) arr_8 [i_1] [i_1 - 1]))))));
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL))), (((unsigned long long int) (short)-28351)))), ((+(arr_0 [i_2 - 2] [i_1 + 1])))));
                        var_17 -= ((/* implicit */unsigned short) ((arr_9 [i_3] [i_3] [i_3] [10]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_15 [i_2] [i_2] [i_1] [i_0 - 3] [5ULL] = ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1] [(_Bool)0])) : (var_0));
                        arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (~(arr_4 [i_1])));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_0] [i_0 + 1])) ? (arr_12 [i_0] [i_1 - 1] [i_2] [i_4]) : (((/* implicit */int) arr_8 [i_4] [i_1 + 1])))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (-2108754663)))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 978656005)) ? (((/* implicit */long long int) 2108754663)) : (var_6)))))))))));
}
