/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173780
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 = (((!(((/* implicit */_Bool) arr_0 [i_0 - 2])))) ? (7592290573974890233LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
                var_20 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1])))), ((+(((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 2] [i_0 - 2]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_18);
}
