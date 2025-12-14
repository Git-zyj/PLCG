/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171152
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
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) var_14);
                var_17 = ((/* implicit */unsigned int) -3333155283688094657LL);
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned char) -4806100408606067034LL);
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned char) arr_1 [i_2 - 1] [i_2]);
        var_20 -= ((/* implicit */unsigned char) var_9);
        var_21 = ((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]);
        var_22 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_2] [i_2]))));
        arr_8 [i_2 - 1] = ((/* implicit */short) (+(arr_6 [i_2 + 2] [(signed char)7])));
    }
}
