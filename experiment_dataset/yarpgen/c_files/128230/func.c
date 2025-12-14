/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128230
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned char) ((18446744073709551608ULL) % (33822867456ULL)));
                    var_14 = arr_1 [i_0];
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_10);
    var_16 = var_0;
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), (var_3))))));
}
