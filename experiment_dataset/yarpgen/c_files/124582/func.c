/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124582
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
    var_12 |= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-46)), (656022054U))))));
    var_13 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((2563343808U) + (3638945241U)))) ? ((-(3638945269U))) : (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))), (((/* implicit */unsigned int) var_8))));
                arr_4 [i_1] [i_1] = ((/* implicit */short) (signed char)-50);
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned char) ((var_7) ? (((165339268) / ((~(((/* implicit */int) (signed char)50)))))) : (((/* implicit */int) var_0))));
}
