/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13127
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_10))))) ? (min((0U), (((/* implicit */unsigned int) (unsigned char)36)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (var_0)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0 - 4] = ((/* implicit */unsigned int) (unsigned char)7);
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) var_9))))), (arr_0 [i_0])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) * (arr_5 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)194)) ? (arr_4 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(min((((((/* implicit */int) var_10)) * (((/* implicit */int) var_10)))), (((/* implicit */int) var_3)))))))));
                var_15 = ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_16 = var_7;
}
