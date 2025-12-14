/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177710
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
    var_19 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((long long int) 1743364650U)) : (((((/* implicit */_Bool) 992945056)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29669))) : (var_4))))), (((/* implicit */long long int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 2])))))));
        arr_2 [(short)17] [(short)17] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_21 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 4294967281U)) : (-7696007180739701345LL))) < (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) var_9)))))));
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32512)) <= (19))))));
    var_23 = ((/* implicit */int) var_10);
}
