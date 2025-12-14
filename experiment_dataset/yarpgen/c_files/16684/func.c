/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16684
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
    var_10 = ((((unsigned int) ((15642684977203840680ULL) + (2804059096505710948ULL)))) & (var_0));
    var_11 = ((/* implicit */short) 338975975U);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_8 [i_0] &= ((/* implicit */unsigned int) (+(2804059096505710948ULL)));
                arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 751049538U)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15052))) + (15642684977203840680ULL)))));
                arr_10 [i_0] &= ((/* implicit */unsigned int) ((4095ULL) / (15360730285650306444ULL)));
            }
        } 
    } 
}
