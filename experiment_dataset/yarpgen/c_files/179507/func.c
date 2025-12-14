/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179507
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
    var_11 = ((/* implicit */int) 235300017U);
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) ((unsigned char) (_Bool)0)))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) (short)27076)) ? (var_7) : (var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (241979286)))));
        var_14 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */unsigned short) (+(-432427513)));
        arr_2 [(_Bool)1] [(short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0]))))) ? (arr_0 [i_0] [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2147483647) : (arr_0 [(_Bool)1] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1])))));
                    arr_9 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_3);
                    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 4] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0])) : ((+(((/* implicit */int) arr_7 [i_0] [3] [i_0] [i_0]))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), (var_3)));
}
