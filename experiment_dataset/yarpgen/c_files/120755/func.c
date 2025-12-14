/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120755
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_0);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_10 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [10] [i_1])) | (((/* implicit */int) (unsigned short)17972))));
            arr_7 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
            var_11 = (!((_Bool)1));
            var_12 -= (~(((/* implicit */int) (unsigned short)255)));
        }
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))));
        arr_9 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))))) - ((+(2104820246))))), (((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))))));
    }
    var_13 = ((/* implicit */int) (_Bool)1);
}
