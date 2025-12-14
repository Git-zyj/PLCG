/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111226
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
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_9 [14ULL] [i_2 + 1] [4] [i_2]), (arr_9 [i_2] [i_2 - 1] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 - 1] [(_Bool)1])) > (((/* implicit */int) arr_9 [(signed char)20] [i_2 + 1] [i_1] [i_1]))))) : (((/* implicit */int) max((arr_9 [i_2 + 1] [i_2 - 1] [i_1] [i_0]), ((signed char)-34))))));
                    var_21 |= ((/* implicit */unsigned int) arr_3 [i_0] [16U]);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_10)))));
    var_23 = (signed char)102;
}
