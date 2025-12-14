/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154033
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
    var_13 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */long long int) var_12);
    var_15 -= ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) var_6);
                                var_17 = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_6))));
                }
            } 
        } 
    } 
}
