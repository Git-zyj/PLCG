/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130637
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_11 -= ((_Bool) ((short) (unsigned char)102));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)80)), (arr_4 [i_0 + 1])))) ? (max((((/* implicit */unsigned int) arr_1 [i_0 + 2])), (2057005244U))) : (min((2057005238U), (((/* implicit */unsigned int) arr_2 [i_0 + 3] [i_1] [i_0]))))));
            }
        } 
    } 
}
