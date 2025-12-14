/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101640
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
    var_14 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min(((short)-26267), (((/* implicit */short) (signed char)14))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_2)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))));
    var_16 &= (+(((/* implicit */int) (signed char)-14)));
    var_17 = ((/* implicit */int) (-((+(((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_11)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) arr_0 [i_0]);
                var_19 = ((/* implicit */long long int) ((unsigned long long int) max((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_0] [i_1 + 1]))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */int) (_Bool)1)) < (424347502)))));
                var_21 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
}
