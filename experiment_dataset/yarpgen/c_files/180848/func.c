/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180848
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
    var_15 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((var_0) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (max((16103380249188023933ULL), (((/* implicit */unsigned long long int) 0LL)))))), (((/* implicit */unsigned long long int) 3244000583U))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [10ULL] [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_4 [(short)2] [i_0] [i_0]));
                var_16 = ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0])))))) ? (max((((arr_1 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */long long int) ((unsigned int) arr_4 [i_0] [i_1] [i_0]))));
                arr_7 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 1]))))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
