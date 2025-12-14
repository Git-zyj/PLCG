/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170751
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
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (signed char)-110))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_2 [i_0] [20LL]))))) ? (((/* implicit */int) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) : (((/* implicit */int) arr_3 [i_0] [17ULL])));
        arr_5 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0] [(signed char)2])))) && (((/* implicit */_Bool) 12560010559005901499ULL))));
        arr_6 [(short)16] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(-9223372036854775807LL))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    var_13 = arr_11 [i_1];
                    arr_16 [i_2] = ((/* implicit */unsigned short) (-(max((((var_9) ? (2147483647) : (((/* implicit */int) arr_10 [i_1] [(unsigned short)14])))), (((/* implicit */int) max((arr_10 [i_2 + 1] [i_2 + 1]), (var_11))))))));
                }
            } 
        } 
        var_14 += (+(((/* implicit */int) var_4)));
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)71)) ? (((((/* implicit */int) var_5)) >> (((9223372036854775807LL) - (9223372036854775802LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1])) * (1969027849)))))))));
        arr_17 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1])))))));
    }
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)-11609)), (-9223372036854775807LL)));
}
