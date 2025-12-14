/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129721
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = var_4;
                var_17 = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) arr_6 [i_3] [i_3]);
                var_19 = ((/* implicit */long long int) var_1);
                arr_9 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (short)6595)) / (((/* implicit */int) arr_7 [i_3] [i_3] [i_2]))))) ? (((/* implicit */int) max((var_1), (((/* implicit */short) arr_2 [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_3])))))))));
            }
        } 
    } 
}
