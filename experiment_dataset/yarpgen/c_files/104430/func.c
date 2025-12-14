/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104430
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) 0U);
                arr_5 [(unsigned short)4] [(unsigned short)4] [i_0] = ((/* implicit */unsigned int) min((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((long long int) (~(481052832)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (short)-1);
    var_16 = (short)-14060;
}
