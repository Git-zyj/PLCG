/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1339
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
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (signed char)3)), (min((4022447614U), (((/* implicit */unsigned int) (signed char)-6))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) (short)17114);
                var_12 |= ((/* implicit */int) (short)17115);
                arr_7 [i_0] |= ((/* implicit */unsigned char) (short)11428);
            }
        } 
    } 
}
