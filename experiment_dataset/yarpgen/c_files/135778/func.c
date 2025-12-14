/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135778
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)195)) || (((/* implicit */_Bool) (unsigned char)78))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)209))));
                        arr_11 [i_0] = ((/* implicit */int) ((unsigned int) arr_5 [i_0 + 2] [i_0 + 1] [i_1 - 1]));
                    }
                } 
            } 
        } 
        var_14 *= ((/* implicit */unsigned char) var_7);
    }
}
