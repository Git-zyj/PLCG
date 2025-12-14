/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18031
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((signed char) ((_Bool) max((var_17), (((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)8294))) >> (((min((((/* implicit */int) (unsigned short)34477)), (-3112856))) + (3112866)))));
                var_19 = ((/* implicit */_Bool) var_5);
                var_20 = ((((/* implicit */int) arr_0 [i_0])) >= (min((((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) arr_3 [i_1] [i_1])))), (((/* implicit */int) arr_3 [i_1] [i_0])))));
            }
        } 
    } 
}
