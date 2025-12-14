/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162699
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
    for (short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */short) var_5);
                                var_12 = ((/* implicit */short) arr_10 [i_3] [i_4 + 1]);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_0]);
            }
        } 
    } 
    var_14 = var_8;
    var_15 = ((((/* implicit */_Bool) var_10)) ? (((int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) var_1)));
}
