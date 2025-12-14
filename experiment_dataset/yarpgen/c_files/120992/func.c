/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120992
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
    var_19 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))));
        arr_3 [i_0] |= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((-2251799813685248LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 1716072336U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)23213)) || (((/* implicit */_Bool) 7749023862012230589ULL)))))))) - (4294967243U)))));
    }
}
