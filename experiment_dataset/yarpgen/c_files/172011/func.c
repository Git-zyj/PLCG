/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172011
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [8ULL] = ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1] [i_1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 4; i_4 < 9; i_4 += 4) 
                        {
                            arr_13 [i_4] [i_4 - 3] [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_3] [i_4 + 2] [i_4 - 2] [(unsigned short)9]));
                            arr_14 [i_2] [(_Bool)1] [i_2] [(unsigned short)7] [7U] [2LL] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_4 + 2] [i_3] [i_4] [(_Bool)1] [i_2]);
                            arr_15 [i_0] [i_0] [i_0] [5ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4 - 4] [i_4 - 2] [i_4 - 1] [i_4] [i_4 + 2])) ? (((/* implicit */int) arr_11 [i_4] [i_4 + 2] [i_4] [i_4 - 4] [i_4 - 3] [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 3] [i_4 - 4] [i_4] [i_4 - 2]))));
                            var_18 = ((arr_1 [i_4 - 2]) << (((arr_1 [i_4 + 2]) - (11436842041130640986ULL))));
                            arr_16 [i_1] [0LL] [(unsigned short)6] = ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2] [7LL] [i_4] [i_4 - 3])) ? (((((/* implicit */_Bool) 11)) ? (var_3) : (43))) : (var_15));
                        }
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(arr_0 [i_0]))))));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((min((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [(signed char)2] [i_0] [i_0]))) >> (((((var_2) ? (arr_7 [5] [i_0] [i_0] [i_0] [(unsigned short)9]) : (arr_7 [(_Bool)1] [i_0] [i_0] [i_0] [i_0]))) - (1253852118))))))));
        arr_17 [10ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])) : (arr_10 [i_0] [i_0] [(short)4] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_21 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] [i_0] [i_0]);
        var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [(unsigned short)0] [7LL] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (short)-19659)))))));
    }
    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_15)))))) / (var_14));
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_10))));
}
