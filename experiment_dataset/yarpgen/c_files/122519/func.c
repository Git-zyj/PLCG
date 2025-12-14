/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122519
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
    var_14 = ((/* implicit */unsigned int) 576425567931334656LL);
    var_15 |= ((/* implicit */unsigned int) var_6);
    var_16 = (-(var_2));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))));
                var_17 = min((max((min((arr_3 [i_0] [(signed char)9] [i_1]), (((/* implicit */unsigned int) (short)30720)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-28))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) (signed char)-28)))) >= (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
}
