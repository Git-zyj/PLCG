/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123771
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (~(var_12))))) * (((((/* implicit */int) ((_Bool) var_3))) * (((/* implicit */int) ((_Bool) var_9)))))));
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) + (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_0]))) % (4053969820U))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (240997476U)))) && (((/* implicit */_Bool) ((unsigned int) var_1))))))));
                    arr_11 [i_0 + 3] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((short) (-(((/* implicit */int) ((unsigned short) 4053969821U))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) ((unsigned short) (unsigned short)42670))) % (((/* implicit */int) ((unsigned char) (signed char)-93))))));
}
