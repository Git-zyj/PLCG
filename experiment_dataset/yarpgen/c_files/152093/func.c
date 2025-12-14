/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152093
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */unsigned int) var_8);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0]);
                var_21 = ((/* implicit */unsigned char) var_14);
                var_22 -= ((/* implicit */short) (+(((((/* implicit */int) arr_3 [i_1] [i_1])) / (((/* implicit */int) arr_3 [i_1] [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)109)), (3645456292U)));
    var_24 = ((/* implicit */_Bool) (unsigned char)148);
}
