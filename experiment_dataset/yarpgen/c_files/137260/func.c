/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137260
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
    var_15 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)126))))), (var_4)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = arr_0 [(short)7] [(short)7];
        var_16 = arr_0 [i_0] [(unsigned short)3];
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_6 [(_Bool)1] [i_1] = ((/* implicit */long long int) (+((~(((/* implicit */int) ((unsigned short) arr_4 [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (short)14740);
    }
    var_17 = ((/* implicit */_Bool) var_14);
    var_18 = ((/* implicit */unsigned int) -7535994797643393817LL);
}
