/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100376
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
    var_20 = var_4;
    var_21 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))) + (((/* implicit */int) ((short) ((short) var_8))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((var_9) % (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) var_13);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (~(var_4)));
}
