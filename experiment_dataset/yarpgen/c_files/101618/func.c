/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101618
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
    var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_7)) ? (33538048LL) : (33538047LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)23)) - (1714902295)))), (((((/* implicit */_Bool) min(((short)(-32767 - 1)), (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40595)) & (((/* implicit */int) arr_5 [i_0] [i_1]))))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_5)))))));
                arr_7 [i_0] [i_1] [i_1 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 2]))));
            }
        } 
    } 
}
