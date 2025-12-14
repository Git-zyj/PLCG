/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109510
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
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(_Bool)1] [i_0 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 6553843206362607748LL)))) : (1625280093U)))) ? (((/* implicit */int) ((unsigned char) (+((-9223372036854775807LL - 1LL)))))) : (((arr_1 [i_0 + 3]) ? (((/* implicit */int) arr_0 [5LL] [5LL])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_0 [i_0 + 3] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)1])) : (((/* implicit */int) (unsigned char)6)))), (((/* implicit */int) min(((unsigned char)3), (((/* implicit */unsigned char) arr_1 [i_0])))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 4])) : (((/* implicit */int) arr_0 [(signed char)9] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (-693786523)))) : (var_17)))));
    }
    var_21 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) < (var_8)));
}
