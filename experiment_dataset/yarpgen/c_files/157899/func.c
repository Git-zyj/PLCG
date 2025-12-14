/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157899
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_10 ^= ((/* implicit */unsigned short) var_2);
                    arr_11 [(short)15] [(short)15] [(unsigned short)8] [i_2] = ((/* implicit */unsigned char) arr_3 [i_0]);
                }
            } 
        } 
        arr_12 [2] [i_0] = ((unsigned int) (-(((((/* implicit */int) (signed char)53)) / (((/* implicit */int) (signed char)28))))));
    }
    var_11 = ((/* implicit */short) var_4);
}
