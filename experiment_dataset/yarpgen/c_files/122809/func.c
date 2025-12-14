/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122809
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_12 *= ((((/* implicit */_Bool) ((max((arr_1 [7ULL] [i_0]), (4916522163963585050ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10))))))) ? (10249931089618571519ULL) : (((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ^ (var_10))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))));
            var_14 = ((/* implicit */signed char) max((var_14), ((signed char)97)));
            /* LoopSeq 2 */
            for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_6))));
                var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) (signed char)-14)))));
            }
            for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 18; i_4 += 2) 
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4 + 1] [i_1 + 1])) ? (arr_1 [i_4 + 1] [i_1 + 2]) : (arr_1 [i_4 - 2] [i_1 + 3])));
                    arr_12 [i_0] [i_1] [i_1] [(signed char)9] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_1] [i_1 + 4]))));
                }
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 4] [7ULL])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (arr_0 [i_0])));
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)3)) * (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [(signed char)15] [i_0]))));
                arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 3] [i_1] [i_1] [i_1]))) * (((arr_0 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                arr_15 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25386)) && (((/* implicit */_Bool) var_0))));
            }
            var_19 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [(unsigned short)3] [(unsigned short)3] [i_0]))));
        }
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)87)) | (((/* implicit */int) (signed char)-65))))) : ((~(var_2)))));
    }
    var_21 = ((var_10) | ((~(var_2))));
}
