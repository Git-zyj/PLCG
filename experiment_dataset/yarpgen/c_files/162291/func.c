/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162291
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_10 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1])))));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        var_12 = ((/* implicit */unsigned long long int) (signed char)-98);
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_13 = ((/* implicit */long long int) min((((615519110) << (((615519110) - (615519110))))), (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (!(((/* implicit */_Bool) -750843191))))))))));
        arr_5 [(short)9] = ((/* implicit */short) arr_3 [i_1]);
        arr_6 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((0LL) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))))));
    }
    var_14 += ((/* implicit */long long int) min((((/* implicit */unsigned short) (short)32501)), ((unsigned short)44514)));
}
