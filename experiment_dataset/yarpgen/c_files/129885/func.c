/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129885
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
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((max((((/* implicit */int) min(((short)0), (var_16)))), ((-(((/* implicit */int) var_7)))))), (((/* implicit */int) arr_3 [i_1 + 3] [i_1] [i_1]))));
                arr_5 [i_1] = ((/* implicit */unsigned short) arr_1 [i_0]);
                var_21 = ((/* implicit */unsigned char) (short)127);
            }
        } 
    } 
    var_22 &= var_11;
}
