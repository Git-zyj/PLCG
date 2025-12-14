/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140997
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
    var_20 = ((signed char) var_12);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (178704669594163095LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_22 &= ((/* implicit */signed char) 3483546177440017827ULL);
        var_23 = ((/* implicit */signed char) (-(((var_0) >> (((((((/* implicit */_Bool) var_19)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_16)))) - (12649164506881984677ULL)))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((unsigned char) arr_2 [i_1])))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) || (((/* implicit */_Bool) arr_2 [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) (~((((~(var_19))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (0) : (-1838742246))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) (-((+(((((/* implicit */int) (signed char)23)) + (((/* implicit */int) arr_8 [i_2]))))))));
    }
}
