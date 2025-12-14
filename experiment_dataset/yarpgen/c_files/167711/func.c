/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167711
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */short) arr_0 [i_0]);
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_0])) + (((/* implicit */int) arr_3 [(signed char)16])))), ((+(((/* implicit */int) arr_4 [i_0] [(unsigned short)0] [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((unsigned int) (-(((var_4) - (((/* implicit */int) var_8)))))));
}
