/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100308
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
    var_10 = (+(((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) 1187649650)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */short) arr_4 [i_0])), (var_9))), (arr_1 [i_0 - 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-14390)) < (((/* implicit */int) arr_1 [i_1])))))) & ((~(1719050347U))))) : (((/* implicit */unsigned int) ((min((1187649647), (2147483647))) % (((((/* implicit */_Bool) -1343557375)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (short)14368)))))))));
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) arr_1 [i_1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
