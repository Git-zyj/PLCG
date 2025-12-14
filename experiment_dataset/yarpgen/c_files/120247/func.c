/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120247
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
    var_16 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_0))));
                    arr_6 [i_0 + 3] [i_1] = ((/* implicit */short) var_14);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((var_18), (var_3)));
                                arr_11 [i_0 - 3] [4U] [i_0 - 3] [i_0 - 3] [i_4] |= ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned char) var_1);
    var_20 = var_5;
}
