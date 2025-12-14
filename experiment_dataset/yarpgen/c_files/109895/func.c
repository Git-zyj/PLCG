/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109895
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)127)) / (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) (~(((unsigned long long int) ((((/* implicit */long long int) var_9)) > (5852469071143026750LL))))));
                arr_8 [i_0] [(signed char)6] [i_0] = ((/* implicit */unsigned long long int) (short)-112);
            }
        } 
    } 
}
