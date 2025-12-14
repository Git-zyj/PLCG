/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119977
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
    var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) <= (-6660354841854541729LL)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((min((0), (667745202))) == (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))));
        var_19 &= ((/* implicit */int) ((long long int) arr_1 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_20 -= ((/* implicit */long long int) ((unsigned char) arr_2 [i_1]));
        arr_4 [i_1] = ((/* implicit */int) ((unsigned short) arr_3 [i_1]));
        var_21 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
        var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1]))));
    }
}
