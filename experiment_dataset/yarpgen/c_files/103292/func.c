/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103292
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0] [5U]))))) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (((unsigned long long int) var_5))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_0))));
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                arr_9 [i_0] [(short)1] [(short)1] [(unsigned char)13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((585387965U) << (((((/* implicit */int) (unsigned short)65472)) - (65466)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_8 [18U] [i_0] [i_0 - 2] [i_0])) ? (var_3) : (((/* implicit */int) (unsigned char)12)))), (((/* implicit */int) var_2))))) : (6506948762184380153ULL)));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((~(arr_7 [i_0] [i_0] [i_2 - 1] [i_2 + 2]))) / (min((((/* implicit */unsigned long long int) var_11)), (arr_7 [i_0] [i_1] [i_2 - 1] [i_1]))))))));
            }
            arr_10 [(signed char)6] = ((/* implicit */unsigned long long int) var_1);
            arr_11 [12U] = ((/* implicit */unsigned short) (~(min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
        }
        for (short i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
        {
            arr_15 [i_0] [i_0] [2ULL] = ((/* implicit */signed char) 6506948762184380153ULL);
            arr_16 [i_0] [i_0] [(signed char)21] = ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0 - 2] [i_0 - 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 1] [1U])) <= (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 1])) ? (arr_7 [i_0 - 1] [i_0] [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
        }
    }
    var_16 += ((/* implicit */_Bool) var_1);
}
