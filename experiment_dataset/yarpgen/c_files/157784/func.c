/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157784
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
    var_13 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (!(((arr_1 [i_0]) >= (((/* implicit */int) (_Bool)0))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_0] [17ULL] [i_0] = ((/* implicit */unsigned char) (-2147483647 - 1));
                        var_15 ^= ((/* implicit */int) var_9);
                        var_16 = ((/* implicit */_Bool) ((unsigned char) (!((_Bool)1))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_3 [i_0] [i_1])))) < (((/* implicit */int) arr_3 [i_2] [i_3])))))));
                    }
                } 
            } 
        } 
        arr_9 [(unsigned short)0] &= ((/* implicit */int) arr_5 [18U] [i_0] [18U]);
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) var_7);
    }
}
