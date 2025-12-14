/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151254
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
    var_17 = ((/* implicit */long long int) var_12);
    var_18 ^= ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) arr_4 [i_0]);
                    arr_10 [i_1] [i_1] [i_1] [21ULL] = ((/* implicit */short) arr_5 [(signed char)14] [i_1 - 1] [i_2 + 1]);
                }
            } 
        } 
    }
    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) arr_4 [i_3]);
                    var_21 ^= ((/* implicit */unsigned char) arr_6 [i_3] [(unsigned char)15] [i_4] [(signed char)10]);
                    arr_21 [i_5] [(unsigned short)11] [i_3 + 3] = ((/* implicit */unsigned short) arr_7 [i_4] [i_5]);
                    arr_22 [i_3] [i_3] [i_3 + 1] = ((/* implicit */signed char) arr_13 [i_3 + 1] [i_5]);
                }
            } 
        } 
        arr_23 [i_3] [i_3] = ((/* implicit */signed char) arr_5 [i_3] [(unsigned short)2] [(unsigned short)2]);
    }
    var_22 = ((/* implicit */unsigned char) var_2);
}
