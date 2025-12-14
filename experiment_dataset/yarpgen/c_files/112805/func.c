/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112805
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
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)29745))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)35770)) | (((/* implicit */int) (unsigned short)29737)))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)3] [(unsigned short)7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [(_Bool)1])))))))));
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)33112))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) | (((arr_0 [i_0] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
        }
    }
    var_21 |= ((/* implicit */int) var_17);
    var_22 = var_5;
}
