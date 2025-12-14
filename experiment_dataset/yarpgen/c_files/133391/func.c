/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133391
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
    var_13 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_7 [i_0] [16] = ((/* implicit */int) ((((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0])))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [1LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (5690763429393381909ULL))) : (((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)76)) ? (arr_5 [i_1] [i_2 + 1] [i_2]) : (((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_2 + 1])))) - ((+(arr_5 [i_2] [i_2 + 1] [16])))));
                    arr_11 [(unsigned short)7] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_8 [i_0] [i_2 - 2]) + (var_5))))));
                }
                arr_12 [i_0] = ((/* implicit */short) arr_9 [i_1] [i_0] [i_0]);
            }
        } 
    } 
}
