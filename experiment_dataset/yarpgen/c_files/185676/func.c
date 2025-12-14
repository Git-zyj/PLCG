/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185676
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
    var_13 = var_12;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0 - 2]) + (((/* implicit */unsigned long long int) 2399265039U))))) || (((/* implicit */_Bool) 10219061604170552873ULL))));
        var_15 |= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */signed char) 10219061604170552859ULL);
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) var_3));
        var_17 = ((/* implicit */signed char) 3224538356U);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (arr_5 [i_1 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)0))))))))));
        var_19 -= (!(((/* implicit */_Bool) arr_4 [4])));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [6ULL]))));
        var_21 = ((/* implicit */unsigned int) (short)11163);
    }
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_3 + 3] [i_3])) & (((/* implicit */int) arr_10 [i_3 - 1]))));
        var_23 = ((/* implicit */int) max((var_23), ((+(((/* implicit */int) var_7))))));
    }
    var_24 = ((/* implicit */signed char) (+(max((((/* implicit */int) var_2)), (var_1)))));
}
