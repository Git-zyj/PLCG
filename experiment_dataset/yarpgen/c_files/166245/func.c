/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166245
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
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_13))) || (((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_9))))))))));
    var_19 |= var_1;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) 18446744073709551610ULL);
        arr_4 [i_0] = var_1;
        var_21 = arr_0 [i_0] [i_0];
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) var_6);
        arr_8 [i_1] = ((max((((/* implicit */unsigned long long int) (signed char)-102)), (arr_5 [i_1]))) | (max((((/* implicit */unsigned long long int) var_16)), (((arr_5 [i_1]) >> (((((/* implicit */int) var_13)) - (56))))))));
    }
}
