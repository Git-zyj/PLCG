/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165139
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_9))));
                                var_17 = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */short) (~(((/* implicit */int) var_1))));
}
