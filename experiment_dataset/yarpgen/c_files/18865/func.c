/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18865
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
    var_15 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    var_16 &= var_1;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (-(0U))))));
        arr_2 [i_0] = arr_0 [2LL];
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_6))));
                    arr_9 [(signed char)3] = ((/* implicit */short) max((((((/* implicit */_Bool) min((arr_4 [i_2]), (((/* implicit */int) arr_5 [(short)16] [i_1 + 1] [2LL]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((signed char) min((-7424113097891301500LL), (-473900332532199081LL)))))));
                    var_19 = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                }
            } 
        } 
        arr_10 [i_0] [i_0] = (unsigned short)36227;
    }
    var_20 -= ((/* implicit */short) var_10);
}
