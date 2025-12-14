/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141308
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (var_2))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0]))))))) ? (max((((arr_3 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (+(var_4)))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-4397)) : (((/* implicit */int) var_10))))))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((arr_0 [4U]) | (((0ULL) << (((((/* implicit */int) arr_4 [i_0])) - (30260))))))))));
            }
        } 
    } 
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 262016U)) ? (1073737728U) : (4294967295U)));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((15584693302193423044ULL) << (0U))))))));
}
