/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164192
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
    var_10 = (short)13018;
    var_11 = var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_12 = var_1;
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)13018)) % (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [(short)16] [(short)16])))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1 - 1] [i_0 - 1] [i_0 + 1])) * (((/* implicit */int) var_7))));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 2]))));
    }
}
