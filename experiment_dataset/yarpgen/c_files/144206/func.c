/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144206
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
    var_12 ^= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) (-(((unsigned int) arr_2 [i_0] [i_0]))));
        var_13 = arr_0 [i_0] [i_0];
    }
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_1 - 1] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 - 1])))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_1 - 1] [i_1 - 1]))))));
        arr_8 [i_1] [(signed char)3] = ((/* implicit */short) max((333957615U), (1071644672U)));
        arr_9 [i_1] |= ((/* implicit */short) var_1);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_13 [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (7U)));
        var_14 = ((/* implicit */short) var_0);
    }
    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_15 &= ((/* implicit */unsigned short) var_4);
        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((4294967289U), (((/* implicit */unsigned int) arr_15 [i_3] [i_3])))), (((/* implicit */unsigned int) arr_14 [i_3]))))) ? (min((((/* implicit */int) var_0)), (((((/* implicit */int) var_10)) - (0))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)116)) : (433904087)))));
    }
}
