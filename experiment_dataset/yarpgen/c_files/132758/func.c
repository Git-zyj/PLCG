/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132758
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
    var_11 &= ((/* implicit */unsigned long long int) var_3);
    var_12 = ((/* implicit */signed char) min((var_3), (var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_7 [i_1] [i_1] [3U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [(short)5] [i_0 - 1] [i_0 - 1]))));
                    arr_8 [i_0] [9LL] [9LL] = ((/* implicit */signed char) (~(2147483647)));
                }
                arr_9 [i_0 + 3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-28876)) ? (((/* implicit */unsigned int) min((-2147483618), (((((/* implicit */int) var_0)) - (2147483628)))))) : (var_1)));
            }
        } 
    } 
}
