/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110442
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) var_16);
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [(unsigned char)22] [i_0 + 4])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_19))))) ? (arr_4 [i_0] [(signed char)13] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)15184))))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */long long int) var_8);
        arr_9 [i_2] [(short)3] = ((/* implicit */long long int) arr_7 [i_2]);
        arr_10 [i_2] = ((/* implicit */short) var_7);
    }
    var_21 = ((/* implicit */unsigned int) var_7);
}
