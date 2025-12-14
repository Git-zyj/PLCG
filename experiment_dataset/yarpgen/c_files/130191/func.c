/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130191
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_10 ^= ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (var_2)));
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_4))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_3);
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-32762))));
    var_14 = ((/* implicit */unsigned long long int) var_5);
}
