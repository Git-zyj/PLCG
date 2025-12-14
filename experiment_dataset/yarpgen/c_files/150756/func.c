/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150756
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
    var_17 = ((((/* implicit */int) var_5)) - (((/* implicit */int) var_13)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_2)) + (((/* implicit */int) arr_2 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 226770082805116672LL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_0)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            arr_9 [i_0] |= ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_1])) - (51283)))));
            var_19 = var_2;
        }
    }
}
