/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114122
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
    var_14 |= ((/* implicit */unsigned long long int) var_1);
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6))))))), (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) min((15248847075067710040ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        arr_3 [(unsigned char)6] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) ((unsigned char) (unsigned short)0)))));
        arr_4 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1])) << (((((/* implicit */int) arr_1 [i_0])) - (46105))))))))), ((unsigned char)185)));
    }
    var_16 = ((/* implicit */unsigned long long int) var_6);
}
