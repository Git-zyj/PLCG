/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113201
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_11 ^= ((/* implicit */unsigned char) max((arr_1 [i_0 - 2]), (((/* implicit */unsigned int) arr_0 [i_0 - 2]))));
        var_12 = ((/* implicit */int) max((arr_1 [i_0]), (((((/* implicit */_Bool) arr_0 [i_0])) ? (max((arr_1 [i_0]), (((/* implicit */unsigned int) var_0)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)36301)));
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_1])))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) arr_0 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_15 = ((/* implicit */short) max((2305843009213693952LL), (((/* implicit */long long int) (unsigned short)36301))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_5 [(_Bool)1]))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_0);
    var_18 -= ((/* implicit */unsigned long long int) max((max((var_2), (((/* implicit */long long int) ((var_9) / (((/* implicit */int) var_7))))))), (((/* implicit */long long int) var_4))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) var_10)), (((var_0) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_0))))) : (max((((/* implicit */int) var_0)), (var_9)))))));
}
