/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155851
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))), (min((((((/* implicit */_Bool) (short)-8161)) ? (((/* implicit */long long int) -1005840585)) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_0 [(_Bool)1]))))));
        arr_3 [(signed char)16] [(signed char)16] = ((/* implicit */unsigned short) max(((short)-29728), ((short)32751)));
        var_11 += ((((/* implicit */int) max(((short)32758), (arr_0 [i_0])))) <= (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-32741)))));
    }
    var_12 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_4))))));
}
