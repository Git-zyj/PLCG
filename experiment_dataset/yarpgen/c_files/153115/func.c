/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153115
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
    var_16 = ((/* implicit */_Bool) (-(281474976710655ULL)));
    var_17 |= ((/* implicit */unsigned char) ((unsigned long long int) (~(var_14))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (short)24823));
        arr_4 [i_0] = ((/* implicit */int) ((signed char) min((((/* implicit */long long int) var_12)), (-4458176219407540809LL))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (short)-24844);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) var_13);
        arr_9 [i_1] = ((/* implicit */signed char) min((min((((/* implicit */long long int) var_0)), (var_1))), (((/* implicit */long long int) ((short) var_1)))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((signed char) var_5);
        arr_15 [i_2] [i_2] = ((/* implicit */_Bool) (short)24802);
        arr_16 [i_2] [i_2] = ((/* implicit */signed char) (+((+(((/* implicit */int) (short)-24847))))));
        arr_17 [i_2] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) (short)8184)))));
    }
    var_18 = ((/* implicit */unsigned int) max((max((2295966600731564415ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) var_0)), ((short)24876)))))))));
}
