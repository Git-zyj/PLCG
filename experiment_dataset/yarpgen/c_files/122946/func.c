/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122946
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) var_15);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            arr_5 [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (arr_1 [9U])));
                        arr_12 [i_0] [i_0] [i_3] [i_2] [i_3] = ((/* implicit */short) (-(arr_8 [i_3] [i_1 - 2] [i_1 + 2])));
                    }
                } 
            } 
        }
    }
    var_21 *= ((/* implicit */unsigned long long int) var_16);
}
