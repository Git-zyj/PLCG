/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177560
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
    var_11 = max((((((((/* implicit */int) ((signed char) var_1))) + (2147483647))) >> (((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) var_3)))) - (3193438861U))))), (((/* implicit */int) var_10)));
    var_12 = ((/* implicit */unsigned short) ((max((((int) var_5)), (((/* implicit */int) var_7)))) | ((~((~(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (arr_1 [i_0 - 1]))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-16549)) ? (10618878622419280644ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [12U]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((1588313179) << (((((((/* implicit */int) var_4)) + (98))) - (25))))))))) : (((arr_2 [i_0 - 1]) ? (max((arr_1 [i_0 - 1]), (((/* implicit */int) (unsigned char)204)))) : (1588313159)))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((long long int) arr_2 [i_0 - 1])) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) >> (((arr_1 [i_0 - 1]) - (278300925))))))));
        var_16 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [7]))) ? ((~(((/* implicit */int) (unsigned short)16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2147483636)))))))) > (var_0)));
    }
}
