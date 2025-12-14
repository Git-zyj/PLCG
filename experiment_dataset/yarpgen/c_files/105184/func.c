/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105184
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
    var_11 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 ^= ((/* implicit */signed char) ((short) ((signed char) arr_0 [i_1 + 1] [i_1 + 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */_Bool) var_0);
                        var_14 = ((/* implicit */unsigned int) ((unsigned char) (+(((unsigned long long int) var_8)))));
                        arr_9 [i_0] [i_1 + 1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (~(arr_5 [i_0] [i_1 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            arr_12 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_10 [i_2] [(_Bool)1] [i_2] [i_3] [(unsigned char)8]);
                            arr_13 [4U] [5U] [i_1] [i_3] [2] = ((/* implicit */short) arr_0 [i_0] [i_1 - 1]);
                        }
                    }
                }
            } 
        } 
        var_15 -= var_7;
    }
}
