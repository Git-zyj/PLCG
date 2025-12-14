/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142882
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) var_9);
                    var_16 = ((/* implicit */unsigned short) (+(((long long int) var_3))));
                    var_17 |= ((/* implicit */int) max(((unsigned short)12404), ((unsigned short)12423)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_5);
}
