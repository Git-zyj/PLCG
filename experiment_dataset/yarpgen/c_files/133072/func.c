/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133072
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
    var_17 = ((/* implicit */signed char) 3525045295916948418ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_6)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_19 &= ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))));
            var_21 ^= ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_0 [8ULL] [7LL]))))));
            arr_6 [1U] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) (signed char)101));
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (signed char)-101)))) : (((((/* implicit */_Bool) arr_8 [i_0] [(signed char)1] [6ULL])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_0]))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-1572655555519805139LL)));
                var_24 = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) (-9223372036854775807LL - 1LL))));
                var_25 = ((long long int) arr_12 [11ULL] [13U] [i_3] [i_3]);
            }
            var_26 = ((/* implicit */unsigned int) arr_1 [i_0]);
            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_2]))));
        }
        var_28 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_29 -= ((/* implicit */signed char) 1770321690U);
    }
}
