/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118022
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
    var_19 = ((/* implicit */short) var_0);
    var_20 |= ((/* implicit */unsigned int) ((signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (2993642473987635346ULL)))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_9)));
    var_22 = ((/* implicit */unsigned short) (-((~(max((((/* implicit */unsigned long long int) var_3)), (2993642473987635352ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            {
                var_23 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1 - 3]))));
                var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) max((arr_1 [13ULL]), (var_18)))) ? (((1058910632060466305LL) - (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) ((int) arr_3 [i_1 - 2] [i_1 - 4])))))));
            }
        } 
    } 
}
