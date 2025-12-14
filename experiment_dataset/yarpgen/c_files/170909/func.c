/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170909
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
    var_10 = ((/* implicit */signed char) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) var_1))))));
    var_11 |= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            var_12 = ((/* implicit */long long int) arr_1 [6ULL]);
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18446744073709551609ULL)));
        }
        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))));
    }
}
