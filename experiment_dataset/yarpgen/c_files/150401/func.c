/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150401
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
    var_14 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_1] [(_Bool)1] [(_Bool)1] = ((_Bool) (signed char)36);
                var_15 -= ((/* implicit */unsigned char) (+(((/* implicit */int) max(((short)-3907), (((/* implicit */short) (unsigned char)237)))))));
            }
        } 
    } 
}
