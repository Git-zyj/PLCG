/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182105
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1 + 1] [12U] [12U] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) var_2)), (arr_5 [i_1 + 1] [(short)14] [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((2507080161152664178LL), (((/* implicit */long long int) (short)-32761)))))));
                    arr_7 [i_0] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_3);
                    arr_8 [6ULL] |= ((/* implicit */short) (~(arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [(short)16])));
                    arr_9 [i_1] = max((max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-32761))))), (((var_5) >> (((((/* implicit */int) var_1)) + (68))))))), (((/* implicit */unsigned int) (short)32760)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_5);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1206859371)) ? (1196503475U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))) : (0ULL)));
}
