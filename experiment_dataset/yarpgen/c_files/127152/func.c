/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127152
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
    var_12 = ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31365)) && (((/* implicit */_Bool) (short)22834))))) + (((/* implicit */int) var_11)))), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((short) (unsigned short)64728));
                var_13 *= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_10))))) <= (((((/* implicit */_Bool) (unsigned short)801)) ? (((/* implicit */int) (unsigned short)809)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))), ((~(((/* implicit */int) (unsigned short)40699))))));
            }
        } 
    } 
}
