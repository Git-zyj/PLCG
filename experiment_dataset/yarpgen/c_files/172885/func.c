/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172885
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
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_0] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_0])));
            var_14 ^= ((((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))) <= (((/* implicit */int) ((signed char) (short)32767))));
        }
        var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32767))));
        arr_6 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
    }
}
