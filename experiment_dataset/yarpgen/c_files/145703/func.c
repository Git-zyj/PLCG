/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145703
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [(unsigned char)12] [i_2] = ((/* implicit */short) arr_1 [i_2]);
                    arr_9 [i_0 + 1] [i_2 - 1] [i_0 + 1] [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6007938113786504014ULL)) ? (1368690027) : (-1522968807)))) ? (((((/* implicit */_Bool) arr_4 [(short)3] [(short)3] [i_2 - 4])) ? (arr_0 [(short)3] [(unsigned char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_11 [i_3] [i_3]));
        var_19 = ((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3]);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_14))) ? (arr_1 [(signed char)11]) : (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [(short)10] [(short)11]))) : (var_13)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [2ULL])) ? (var_17) : (((/* implicit */unsigned long long int) var_11))))) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) var_7)))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_3] [i_3]))) ? (arr_5 [i_3]) : (((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_10 [1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [(unsigned char)8] [i_3])))))))));
    }
}
