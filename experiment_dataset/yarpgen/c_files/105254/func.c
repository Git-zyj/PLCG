/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105254
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (unsigned short)29545);
                                arr_13 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (unsigned char)126)) + (((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) (unsigned char)63);
                }
            } 
        } 
    } 
    var_20 |= ((unsigned short) var_6);
}
