/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140032
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [6ULL] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_14 = (+((~(arr_1 [i_0 - 1]))));
                                arr_14 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [(signed char)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4 - 1] [i_4] [i_1] [i_4] [i_1])) ? (arr_12 [i_4] [(_Bool)1] [i_4 - 1] [5] [1] [i_3] [1]) : (arr_12 [i_4 - 1] [10ULL] [i_4 + 1] [i_3] [i_3 - 2] [i_3] [(short)10]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [3] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_1])) ? (arr_6 [i_2 - 3] [i_2 - 1] [i_4 - 1]) : (((/* implicit */unsigned int) (~(arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [5LL] [i_4 - 1])))))))));
                                arr_15 [i_0] [i_1] [6U] [i_3 - 1] [i_4 - 1] [(unsigned short)8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_0 + 1] [i_0])) ? (((/* implicit */int) min((arr_11 [i_0] [i_0]), (((/* implicit */short) (signed char)15))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) < (arr_4 [i_2]))))))) ? ((+(((/* implicit */int) (unsigned short)37900)))) : ((+(arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0])))));
                                var_15 = (~((~(((arr_13 [i_2] [i_2] [0U] [i_2] [i_2]) + ((-2147483647 - 1)))))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_0] [i_3 + 4] [i_4 + 1])) ? (var_0) : (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2] [i_3] [i_4]))))), (min((((/* implicit */long long int) arr_3 [i_3])), (arr_12 [i_0 + 1] [(short)6] [i_0 + 1] [8] [i_0 + 1] [i_0] [i_0 - 1]))))), (arr_12 [i_4] [i_3 - 1] [i_3] [i_1] [i_2] [i_1] [i_0 + 1]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((((/* implicit */int) arr_7 [5LL] [i_1] [i_2 - 2])), (((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_5 [i_0] [6]) : (((/* implicit */int) arr_3 [i_0])))) & (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned short)27651)) : (((/* implicit */int) (unsigned short)37895)))))))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) : (var_2)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_19 = ((((/* implicit */_Bool) (~(357677238)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)37920)) / (((/* implicit */int) arr_16 [i_5 - 1]))))) : (((((/* implicit */_Bool) arr_21 [(short)23])) ? (arr_18 [i_5 - 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [16] [i_5]))))));
            arr_22 [i_5] [i_6] = ((/* implicit */short) (~(arr_17 [i_5 + 1])));
            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6] [i_5])))))));
        }
        arr_23 [15U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_18 [i_5 + 1] [i_5 + 1])) >= ((+(arr_21 [i_5])))));
    }
    for (short i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_7 + 1] [i_7 + 1] [i_7 + 2])) ? (((/* implicit */unsigned int) ((int) arr_18 [i_7] [i_7]))) : (((((unsigned int) arr_19 [i_7 + 2] [i_7] [i_7 + 2])) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27597)))))));
        var_22 -= arr_25 [(unsigned char)6] [i_7 + 1];
    }
    var_23 ^= ((/* implicit */int) (+(var_1)));
}
