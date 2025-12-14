/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136619
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
    var_20 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_22 = ((/* implicit */int) var_5);
            arr_4 [i_0] [(signed char)2] [i_0] = ((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) (short)7680)) : (((arr_2 [(signed char)10] [(short)5] [i_0]) ? (((/* implicit */int) arr_0 [(unsigned char)10])) : (((/* implicit */int) (unsigned char)178))))));
        }
        var_23 = ((/* implicit */long long int) arr_0 [i_0]);
        arr_5 [i_0] = ((((-4419653169155304895LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))) & (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [(_Bool)1])) + (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))) : (((long long int) arr_1 [i_0 + 3])))));
    }
    var_24 = ((/* implicit */_Bool) var_19);
}
