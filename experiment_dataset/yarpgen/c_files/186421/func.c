/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186421
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
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-125)) && (((/* implicit */_Bool) (short)(-32767 - 1))))) || (((/* implicit */_Bool) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [(signed char)4] |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) arr_1 [i_0] [10]))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2122227262804942720LL)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((short) arr_2 [i_0] [i_0]));
    }
}
