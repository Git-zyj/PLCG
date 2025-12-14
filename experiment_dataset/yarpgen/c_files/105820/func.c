/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105820
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
    var_14 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = ((21U) / (((/* implicit */unsigned int) arr_0 [i_0])));
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_15 = ((/* implicit */int) min(((~(min((((/* implicit */unsigned int) var_7)), (21U))))), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_7))))))));
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-31206)), (arr_5 [i_1 + 2]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */int) var_9);
        var_18 *= ((/* implicit */short) arr_7 [i_2]);
        arr_9 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_8 [i_2] [i_2])))) ? (((var_12) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_0)) : (4398046511103ULL))) - (5269424658408808057ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)76))))))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_8 [i_2] [i_2]))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_8 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) -16))));
    }
    var_21 = ((/* implicit */short) var_0);
}
