/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141872
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
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_11 = ((long long int) (unsigned short)6);
        arr_3 [i_0 + 3] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) ? (2775429137439580076ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0])))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] = ((int) ((((((/* implicit */_Bool) arr_5 [i_0] [(signed char)5])) ? (-1562178864) : (((/* implicit */int) var_6)))) >= (((((/* implicit */_Bool) 6701583602597897756LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)43))))));
                        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_3 - 1])) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-12622)) ? (1562178863) : ((-2147483647 - 1)))), (((1739126586) | (arr_9 [18])))))))))));
                    }
                } 
            } 
        } 
    }
    var_13 *= ((max((min((((/* implicit */unsigned long long int) (short)-12605)), (var_5))), (((/* implicit */unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((1562178853) / (((/* implicit */int) var_4))))), ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) var_2))))))));
}
