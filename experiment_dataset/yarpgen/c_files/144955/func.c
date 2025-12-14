/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144955
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) arr_1 [i_0])))));
            arr_7 [i_0] [i_0] [i_1] = ((arr_2 [i_0 + 1] [i_1]) * (136020657U));
            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
            var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
        }
        arr_8 [i_0] = ((/* implicit */short) 18446744073709551615ULL);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_16 = (~((-(((/* implicit */int) var_5)))));
        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        arr_12 [i_2] [(signed char)6] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - ((+(1363337351U)))));
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) % (((int) (unsigned char)100))));
}
