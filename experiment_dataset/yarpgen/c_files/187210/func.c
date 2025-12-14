/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187210
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
    var_11 = ((/* implicit */long long int) (short)25443);
    var_12 = ((/* implicit */short) 9223372036854775807LL);
    var_13 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) var_10);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */long long int) var_9);
                        var_14 = 2070233347;
                        arr_11 [i_3] [i_1] = ((/* implicit */short) 65536);
                        arr_12 [i_3] [i_1] [i_2] = ((/* implicit */unsigned long long int) 2070233346);
                    }
                } 
            } 
            var_15 = ((/* implicit */int) 7108306978017053935LL);
            var_16 = ((/* implicit */long long int) 67108832);
        }
        var_17 -= ((/* implicit */unsigned long long int) var_10);
        var_18 |= var_6;
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) var_0);
        var_19 = ((/* implicit */_Bool) 10394866626573472324ULL);
    }
}
