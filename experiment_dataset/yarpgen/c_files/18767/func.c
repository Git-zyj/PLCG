/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18767
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
    for (int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2147483643)) || (((/* implicit */_Bool) 2147483643)))))));
                arr_4 [(unsigned char)12] [i_1] = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_5);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) -2147483646)), (4294967276U)))))) * (var_9)));
    var_14 = ((/* implicit */long long int) (short)13881);
}
