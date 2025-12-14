/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169329
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */int) (unsigned char)35)) << (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_9)) ? (3645257588U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_3)), (var_0)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_12))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1] [i_0 + 2]), (((/* implicit */int) var_0))))) ? (((unsigned long long int) arr_2 [i_1 + 4] [i_0 + 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) var_11))))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_4))) * (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 2]))))));
            }
        } 
    } 
    var_17 = ((unsigned int) max((((((/* implicit */_Bool) var_2)) ? (var_7) : (var_7))), (((/* implicit */int) ((var_7) != (((/* implicit */int) var_4)))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) max((753000764U), (((/* implicit */unsigned int) 1070791244)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_10)))))))));
    var_19 = var_4;
}
