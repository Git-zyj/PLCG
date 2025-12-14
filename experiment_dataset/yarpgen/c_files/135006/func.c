/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135006
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_5 [i_0] [i_1 - 2])) & (((/* implicit */int) arr_5 [i_0] [i_1 - 2])))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 3])) ? (((/* implicit */int) arr_5 [13U] [i_1 + 3])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 3]))))));
                    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((int) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((532855532571127591ULL), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0]))))))))) : (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])) ? (-8242729248070548977LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 2] [i_1])))))));
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (signed char)1);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_8)))))));
}
