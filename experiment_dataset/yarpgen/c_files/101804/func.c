/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101804
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
    var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (var_10) : (var_9)))));
    var_15 += ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = (short)12826;
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            arr_5 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1 + 1]);
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_13 [i_1 + 1] [i_2] = ((/* implicit */unsigned char) (-2147483647 - 1));
                        var_16 -= var_13;
                        var_17 += ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                    }
                } 
            } 
        }
    }
    var_18 = var_12;
}
