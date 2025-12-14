/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169521
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
    var_12 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = 0;
                arr_5 [i_1] [i_1] = max((((((/* implicit */_Bool) (unsigned short)43031)) ? (((((/* implicit */_Bool) -941006837)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)10)))) : (((/* implicit */int) var_0)))), (((/* implicit */int) max((((/* implicit */unsigned short) max(((unsigned char)17), (((/* implicit */unsigned char) (_Bool)1))))), ((unsigned short)43038)))));
                arr_6 [i_1] [i_1] [(unsigned short)9] = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
            }
        } 
    } 
}
