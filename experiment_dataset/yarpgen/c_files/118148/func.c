/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118148
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (!((!(((/* implicit */_Bool) ((long long int) var_0))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((unsigned long long int) 308110678);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))) ? (arr_3 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) -308110669))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)0)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) var_9))))))) : ((-(arr_3 [i_0 + 1])))));
        var_14 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_7)) - (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
    }
}
