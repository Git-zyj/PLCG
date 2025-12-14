/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129448
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
    var_15 -= ((/* implicit */unsigned short) min((max((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (signed char)12))))), ((+(((/* implicit */int) var_11)))))), (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [(signed char)15] = ((/* implicit */long long int) arr_0 [i_0 - 1]);
        var_16 *= ((/* implicit */short) arr_0 [i_0 - 1]);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0)))))));
    }
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        var_17 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [(signed char)18] [i_1 + 2])) ? (((/* implicit */int) arr_4 [4ULL] [i_1 + 2])) : (((/* implicit */int) arr_4 [12LL] [i_1 - 1])))), ((-(((/* implicit */int) arr_5 [i_1 - 2] [i_1]))))));
        var_18 += ((/* implicit */signed char) var_2);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [(signed char)14] [i_1])) ? (max((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) (short)14446)), (var_12))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)14459)))))));
    }
}
