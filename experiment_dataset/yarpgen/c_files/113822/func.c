/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113822
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
    var_15 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_12)))), ((-(((int) (_Bool)0))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_2 [i_0])))))));
        var_16 = ((((/* implicit */_Bool) (+(((((/* implicit */int) var_11)) * (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) / (517978892))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [6] [i_1] = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) > (min((((/* implicit */unsigned int) (_Bool)1)), (3532569039U))))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_5 [i_1] [i_1]))));
    }
}
