/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117152
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_8))));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) 10545505564100171654ULL)) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)85))))))) : (12320871832483319572ULL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) 4611686018427387902ULL);
                arr_5 [i_0 - 1] [i_1 - 1] [i_0 - 1] = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((arr_3 [i_0 - 1] [i_1 - 4]) ? (arr_2 [i_0 - 1]) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11)))))));
            }
        } 
    } 
}
