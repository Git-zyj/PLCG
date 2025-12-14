/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108568
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
    var_12 = ((/* implicit */short) var_9);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (max((var_4), (((/* implicit */long long int) var_8))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) var_4)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) var_10);
                        arr_12 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) 17378927128882999652ULL);
                    }
                } 
            } 
            arr_13 [i_0] [i_1] [(short)8] = ((/* implicit */signed char) ((_Bool) arr_2 [i_0 - 2]));
        }
        arr_14 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) 5904068566247014310LL)), (18446744073709551615ULL)));
        arr_15 [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
}
