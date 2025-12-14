/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114589
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
    var_15 = ((/* implicit */short) var_2);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) ((_Bool) var_12)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_18 = ((((/* implicit */int) (!(((/* implicit */_Bool) -1))))) & (((var_13) ? (var_6) : (((/* implicit */int) arr_2 [i_0 + 1])))));
                    arr_10 [i_0 - 1] [0LL] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
                    var_19 = ((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])) : (((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_2 [i_0])))));
                }
                var_20 = max((((((/* implicit */_Bool) max((((/* implicit */short) var_4)), (arr_2 [i_0])))) ? (((/* implicit */int) arr_1 [i_1])) : ((+(((/* implicit */int) var_2)))))), ((-((+(((/* implicit */int) (short)25066)))))));
            }
        } 
    } 
}
