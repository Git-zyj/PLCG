/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188221
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
    var_18 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [(short)10] &= ((/* implicit */_Bool) arr_0 [i_0]);
        var_19 += ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) arr_6 [16LL] [20ULL]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_17 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) arr_5 [i_3]);
                        var_21 = ((/* implicit */_Bool) arr_5 [i_1]);
                    }
                } 
            } 
            arr_18 [i_1] [i_2] = ((/* implicit */short) arr_5 [i_1]);
            arr_19 [i_2] [i_2] = ((/* implicit */long long int) arr_9 [i_1]);
            arr_20 [i_2] = ((/* implicit */unsigned char) arr_7 [i_2]);
            arr_21 [(short)15] [i_2] = ((/* implicit */short) arr_5 [i_1]);
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            arr_25 [i_5] [i_1] [i_1] |= ((/* implicit */unsigned long long int) arr_23 [i_1] [(unsigned short)17]);
            arr_26 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_1]);
        }
    }
    var_22 = ((/* implicit */long long int) var_14);
    var_23 += ((/* implicit */unsigned long long int) var_0);
    var_24 = ((/* implicit */unsigned int) var_12);
}
