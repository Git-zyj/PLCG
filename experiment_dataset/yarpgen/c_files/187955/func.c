/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187955
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
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (var_6)));
                arr_4 [i_1] [16] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1728164393)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_4)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        for (int i_3 = 3; i_3 < 8; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) -1728164394))));
                arr_9 [i_2] = ((/* implicit */unsigned int) min((arr_2 [i_3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) 2783327046U)))))));
            }
        } 
    } 
}
