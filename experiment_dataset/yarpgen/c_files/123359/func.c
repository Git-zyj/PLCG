/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123359
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
    var_18 |= ((max((((/* implicit */long long int) ((int) var_7))), (var_3))) & (((/* implicit */long long int) ((/* implicit */int) (((~(var_2))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_19 *= ((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)));
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))) | (arr_0 [i_0 + 2])));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) & (arr_0 [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (770589054U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) ((signed char) var_6)))), (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1])) ? (max((arr_5 [i_1 - 1]), (((/* implicit */unsigned int) (unsigned short)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_17) != (((/* implicit */unsigned int) arr_3 [i_1 - 1]))))))))));
        var_23 = ((/* implicit */int) ((unsigned char) var_2));
    }
}
