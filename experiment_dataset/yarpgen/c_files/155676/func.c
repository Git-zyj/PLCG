/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155676
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), ((signed char)-51)))) ? (((unsigned int) (unsigned short)12864)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10))))))), (((((/* implicit */_Bool) var_3)) ? (max((var_3), (((/* implicit */long long int) (short)24736)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
        var_11 = ((/* implicit */short) min((arr_1 [i_0 - 2] [i_0 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0])))))));
    }
    var_12 = ((/* implicit */unsigned short) (short)-24739);
}
