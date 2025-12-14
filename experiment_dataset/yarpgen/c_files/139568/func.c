/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139568
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_11 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_5)))));
            var_12 ^= ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]);
            arr_5 [i_0] = ((/* implicit */unsigned int) ((unsigned char) 2222608590U));
        }
        var_13 += var_5;
    }
    var_14 = ((/* implicit */short) var_2);
    var_15 -= ((/* implicit */short) var_5);
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_7)), ((short)3912))))) + (min((var_4), (((/* implicit */unsigned int) var_1))))))))));
}
