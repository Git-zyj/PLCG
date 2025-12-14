/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135605
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */_Bool) arr_0 [i_1]);
                var_19 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        for (int i_6 = 3; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_16);
                                var_21 = ((/* implicit */unsigned char) arr_8 [15] [i_2]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2]))));
                }
            } 
        } 
    } 
}
