/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124328
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
    var_19 &= ((/* implicit */short) 1960100305U);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min((max((17247741825132745758ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((var_13) + (2147483647))) >> (min((((/* implicit */unsigned int) var_1)), (((arr_1 [i_0]) % (arr_1 [i_0])))))));
        arr_5 [i_0] = var_6;
        arr_6 [i_0] = ((/* implicit */unsigned long long int) var_3);
    }
    var_20 ^= ((/* implicit */unsigned int) var_18);
}
