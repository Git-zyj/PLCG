/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14334
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
    var_13 = ((/* implicit */unsigned short) 4433441282531583845ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)50571)) == (((/* implicit */int) ((unsigned short) (unsigned char)139)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (short)15843));
                arr_6 [(signed char)8] [i_0] = ((signed char) (short)24146);
            }
        } 
    } 
}
