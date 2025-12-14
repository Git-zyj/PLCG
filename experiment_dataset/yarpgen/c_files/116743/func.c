/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116743
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
    var_10 = 0U;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), ((unsigned char)66)));
        arr_3 [i_0] = min((((unsigned int) arr_2 [i_0] [i_0])), (((arr_2 [i_0] [i_0]) * (3006545101U))));
    }
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((min((4194240U), (1288422201U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)250), ((unsigned char)181))))) != (var_5)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) (unsigned char)74)), (min((var_4), (((/* implicit */unsigned int) (unsigned char)181)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_12 += 4236908932U;
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_13 *= ((/* implicit */unsigned char) ((arr_11 [i_2] [i_3]) / (arr_11 [i_2] [i_3])));
            arr_14 [i_2] = ((((/* implicit */_Bool) 511)) ? (2717279635U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))));
        }
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)7)) << (((arr_12 [i_2] [i_2] [i_2]) - (3172040683U)))));
        var_15 += ((/* implicit */unsigned int) arr_9 [i_2]);
    }
    var_16 = max((max((0U), (2698918948U))), (var_6));
    var_17 |= ((/* implicit */unsigned char) var_4);
}
