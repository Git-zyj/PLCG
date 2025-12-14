/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115586
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_14 += ((/* implicit */unsigned int) arr_2 [0U] [i_0 + 1]);
        var_15 = ((/* implicit */unsigned short) var_11);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1]))) : (17709734379134375225ULL)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) var_5))));
        var_18 = ((/* implicit */unsigned char) arr_4 [i_1 - 1] [i_1 + 1]);
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_1))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)20529)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)110))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (arr_10 [(signed char)10] [i_3])))))))));
                var_20 ^= ((/* implicit */_Bool) arr_11 [i_2]);
            }
        } 
    } 
}
