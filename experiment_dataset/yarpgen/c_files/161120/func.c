/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161120
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
    var_14 = ((/* implicit */int) ((short) (-(var_5))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_1] [i_0]);
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-13731)))))));
                arr_7 [i_0] [(unsigned char)19] [i_0] = ((/* implicit */int) (unsigned short)40606);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_7);
}
