/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109080
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
    var_10 -= var_8;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0]))))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned int) 2513790865090456900ULL)) : (((/* implicit */unsigned int) ((int) var_3)))))));
        arr_2 [8] [(unsigned char)10] = ((/* implicit */unsigned int) min((min((4611686018426339328ULL), (arr_0 [i_0]))), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (short)-28205))))));
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - (11096522521037697821ULL)))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((4000243426U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))), (294723869U))))));
        arr_6 [3] [i_1] = ((/* implicit */signed char) min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))));
    }
    var_14 = ((/* implicit */unsigned int) var_5);
}
