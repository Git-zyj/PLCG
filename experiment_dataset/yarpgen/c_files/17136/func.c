/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17136
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned int) var_5);
                    var_13 = ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_14 = var_5;
                                arr_14 [i_0] [i_1 + 2] [i_3] = var_1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_12);
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_7))));
    var_17 = var_5;
}
