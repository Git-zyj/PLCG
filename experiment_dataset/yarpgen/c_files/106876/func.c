/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106876
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_2 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_1 [i_2 - 1]))))));
                    arr_9 [i_0] [(short)9] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
            } 
        } 
    }
    var_15 ^= ((/* implicit */_Bool) (signed char)-32);
}
