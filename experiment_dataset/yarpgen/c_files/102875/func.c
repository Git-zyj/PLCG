/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102875
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = max((min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0] [18])))), (((/* implicit */long long int) var_9)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((long long int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_6 [20] [i_1] [i_1] [(signed char)6])) : (((/* implicit */int) var_4)))))));
                    arr_8 [i_0] [i_1] [i_2 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_7 [i_2] [(unsigned char)21] [i_2 - 3])) : (arr_0 [i_0]))))));
                }
            } 
        } 
    }
    var_16 ^= ((/* implicit */short) var_1);
}
