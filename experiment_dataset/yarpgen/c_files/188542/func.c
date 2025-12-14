/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188542
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_10))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_1 [i_0])))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_4 [i_0] [i_1] [(_Bool)1])))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) ((max((arr_4 [(_Bool)1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_11)))) > (((/* implicit */unsigned long long int) var_10)))))));
                var_18 = ((/* implicit */unsigned int) min((max((arr_2 [i_0]), (arr_3 [(short)18] [i_1] [i_1]))), (((/* implicit */unsigned char) max(((_Bool)0), ((_Bool)1))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) var_11)), (((var_9) ? (var_10) : (((/* implicit */unsigned int) var_3))))))));
}
