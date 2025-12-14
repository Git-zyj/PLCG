/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100664
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
    var_15 |= ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */signed char) min((var_14), (((/* implicit */int) ((unsigned char) (~(var_3)))))));
                    var_16 = ((/* implicit */int) var_0);
                }
            } 
        } 
    } 
}
