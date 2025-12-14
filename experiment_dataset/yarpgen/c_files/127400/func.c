/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127400
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
    var_17 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) arr_2 [8ULL]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_19 *= ((/* implicit */long long int) (!((_Bool)1)));
                    var_20 = ((/* implicit */long long int) ((unsigned short) -2259873873019837226LL));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */long long int) var_10))));
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((signed char) -1)), (((/* implicit */signed char) (_Bool)0)))))));
}
