/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126521
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
    var_14 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (signed char)5);
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_16 = 865797773;
        arr_6 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (((unsigned int) 339316450)));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_1]))));
        var_17 -= ((/* implicit */_Bool) 2021996255056338888ULL);
    }
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (2021996255056338891ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9)))))))));
    var_19 = ((/* implicit */_Bool) (-(var_10)));
}
