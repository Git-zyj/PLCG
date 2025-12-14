/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149524
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [17LL]))) > (((arr_1 [22U] [i_0]) & (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */int) (unsigned char)197);
    }
    /* LoopSeq 1 */
    for (short i_1 = 4; i_1 < 15; i_1 += 1) 
    {
        var_18 = ((min((arr_4 [i_1 - 4]), (((/* implicit */unsigned int) min(((short)8177), (((/* implicit */short) (signed char)44))))))) >= (((/* implicit */unsigned int) ((arr_0 [i_1 + 1]) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 2]))))));
        var_19 = ((/* implicit */signed char) 262136);
        var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) 13945190071293336867ULL))));
    }
    var_21 *= ((/* implicit */_Bool) var_3);
}
