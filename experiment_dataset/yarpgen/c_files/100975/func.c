/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100975
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
    var_15 |= ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(6263614596132819707ULL)));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((3543850610U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) arr_2 [i_1]))))) : (max((((/* implicit */unsigned int) arr_4 [i_0 - 3])), (234881024U)))));
                arr_6 [i_0 - 2] [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(382454988U)))) ? (((/* implicit */unsigned int) (-(var_5)))) : (4060086272U)))) ? (((/* implicit */int) var_6)) : (var_8))))));
}
