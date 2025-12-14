/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18944
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
    var_16 = ((/* implicit */signed char) ((var_12) - (var_3)));
    var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1230424631)), (var_3)))), ((-(var_6)))))) ? (max((((/* implicit */long long int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (4813114432122758261LL))) : (((((/* implicit */_Bool) (~(-7651571234254681437LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_3))) : (var_14)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((arr_5 [i_1] [i_0]) & (arr_5 [i_1] [13LL]))) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))));
                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(var_1)))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (-7930805749994869303LL)))) ? ((((_Bool)0) ? (arr_3 [21LL]) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2])))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((((var_10) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
}
