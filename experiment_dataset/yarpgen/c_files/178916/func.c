/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178916
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
    var_16 = ((/* implicit */signed char) 13485172422133255032ULL);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_1] [(short)2] = (~((-(arr_2 [i_1 - 1] [i_1 + 1]))));
                    var_17 ^= ((/* implicit */_Bool) var_7);
                }
            } 
        } 
    } 
}
