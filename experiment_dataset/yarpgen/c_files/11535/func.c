/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11535
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
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))))), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (var_11)))) >> (((/* implicit */int) ((signed char) var_6)))))));
    var_16 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (~(((/* implicit */int) var_13))))), (var_4)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_2 [i_0]))))));
        var_18 = ((/* implicit */int) max((var_5), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_0 [15ULL] [i_0]) : (arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1063294440)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((short) (_Bool)1)), (((/* implicit */short) (signed char)-40)))))) : (3127135696U)));
        arr_4 [i_0] [i_0] = var_10;
    }
}
