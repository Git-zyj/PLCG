/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172313
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [10U] [i_0] = ((/* implicit */_Bool) (-(((long long int) ((unsigned char) arr_2 [i_1] [i_1])))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((4095LL), (((/* implicit */long long int) (signed char)99))));
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) min((((/* implicit */signed char) var_9)), ((signed char)79))))))) != (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_3 [i_0])))))));
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((402207601U) % (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_2))));
    var_14 = (~(((/* implicit */int) var_9)));
}
