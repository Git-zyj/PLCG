/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118410
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
    var_17 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-31410)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31410))) : (var_0))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & ((-(((/* implicit */int) (short)31409)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [(short)0] = ((/* implicit */unsigned long long int) -280288944);
        arr_3 [i_0] [i_0] = ((/* implicit */int) (((+(max((((/* implicit */unsigned long long int) -280288944)), (var_14))))) < (((/* implicit */unsigned long long int) -100852968))));
        arr_4 [(signed char)16] |= ((/* implicit */long long int) var_6);
    }
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)21578))))) <= (0U))))));
}
