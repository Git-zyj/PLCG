/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179010
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
    var_11 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) var_1);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) var_9);
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_2))));
                                arr_11 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (-(min(((+(var_3))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
