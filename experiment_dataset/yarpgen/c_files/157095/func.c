/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157095
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
    var_15 = ((/* implicit */short) ((((min((var_2), (((/* implicit */int) var_8)))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))))) ? (var_2) : (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) arr_3 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((unsigned int) 393216))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)59960)), ((-9223372036854775807LL - 1LL))))) : (min((3567678097258885639ULL), (((/* implicit */unsigned long long int) (unsigned short)59960)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
        arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_11 [i_1] = ((/* implicit */signed char) ((min((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1]))) * (((/* implicit */int) ((_Bool) arr_9 [i_1] [i_1])))));
        arr_12 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((short) arr_8 [i_1] [i_1])));
        arr_13 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59960)) ? (((/* implicit */int) (unsigned short)59958)) : (((((/* implicit */int) (unsigned short)59960)) & (1903353390)))));
    }
}
