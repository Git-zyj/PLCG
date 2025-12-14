/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162592
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
    var_11 = ((/* implicit */unsigned long long int) (short)32291);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [5ULL] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_3 - 1]))));
                        arr_9 [4LL] [0ULL] = ((/* implicit */long long int) arr_0 [i_3]);
                        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0 - 1]))));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) 4080050024U)) ? (8656797645676867073ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32288)))));
                            arr_12 [i_3] [i_3] [i_2] [i_4] [i_2] [i_0 - 1] = ((/* implicit */unsigned char) var_9);
                            var_14 = ((/* implicit */short) arr_11 [i_1] [i_1] [6ULL] [i_4]);
                        }
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((arr_2 [i_0 - 1] [i_0] [i_0 - 1]) << (((3140599558U) - (3140599540U))))))));
    }
    var_16 = ((/* implicit */int) var_0);
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_8))));
}
