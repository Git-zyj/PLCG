/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147787
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
    var_14 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_8 [17] [i_0] [i_3] [i_1] [17] [i_3] = ((/* implicit */long long int) arr_4 [i_3 - 3] [i_3] [i_2 - 2]);
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 - 2] [i_3 - 1]))));
                        arr_9 [i_0] [i_3] [5ULL] [i_2] [i_3] [5ULL] = ((/* implicit */unsigned short) ((arr_1 [i_2 + 2]) % (arr_1 [i_2 - 1])));
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3 - 1] [1] [i_1]))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) var_6)))) / (((/* implicit */int) var_0))));
        var_17 = ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) - (38145))));
    }
}
