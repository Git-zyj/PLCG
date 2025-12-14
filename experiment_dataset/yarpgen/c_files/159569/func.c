/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159569
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
    var_11 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)56)) : (-2147483628))) * (((/* implicit */int) var_2))));
    var_12 |= ((/* implicit */int) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */unsigned int) var_10)), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) var_7);
                var_13 = ((/* implicit */unsigned short) (-((~(min((var_3), (var_3)))))));
            }
        } 
    } 
}
