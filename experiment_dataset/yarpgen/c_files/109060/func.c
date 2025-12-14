/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109060
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) min((var_12), (arr_3 [i_1])))) < (((/* implicit */int) arr_3 [i_0])))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (arr_1 [i_0] [i_1])))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))));
                var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_0 [i_0] [i_0])))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_11))))))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5))))))) : ((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_7))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_1)) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    var_18 = ((/* implicit */_Bool) var_10);
}
