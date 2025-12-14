/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128000
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_12 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
                    var_13 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_8 [i_2] [(signed char)14] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                    var_14 ^= ((/* implicit */int) ((unsigned long long int) min((arr_1 [i_0]), (((/* implicit */int) arr_7 [i_0] [12] [i_0] [i_0])))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
    }
    var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) var_9))));
}
