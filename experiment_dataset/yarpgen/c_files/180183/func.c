/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180183
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
    var_12 = ((/* implicit */unsigned int) var_8);
    var_13 = ((/* implicit */_Bool) min((var_13), (max((var_1), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (min((((/* implicit */unsigned long long int) var_0)), (18060403616176296644ULL)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (2280246453U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned int) min((var_9), (1073741823)))))))));
        var_15 = var_4;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (~(3056704632U))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (max((arr_0 [i_0 - 1] [i_0 - 2]), (((/* implicit */unsigned int) -1))))));
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_10))));
}
