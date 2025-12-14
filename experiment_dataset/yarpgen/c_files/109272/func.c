/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109272
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned int) arr_3 [15ULL])) & (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                var_15 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((var_13) < (((/* implicit */unsigned long long int) arr_2 [i_0 - 1]))))) >> (((max((var_5), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])))) - (12902435903113580437ULL)))));
            }
        } 
    } 
    var_16 = var_1;
    var_17 ^= ((/* implicit */long long int) var_1);
    var_18 += (-((+(-3961883290660005902LL))));
}
