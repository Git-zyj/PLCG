/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1393
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
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_2)), (var_15)));
    var_21 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((var_8) <= (((/* implicit */long long int) (~(((/* implicit */int) (short)-18891)))))))) / ((~(((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_1 - 1]))))));
                var_23 += ((/* implicit */unsigned long long int) max(((~(max((6U), (arr_1 [i_0]))))), (((/* implicit */unsigned int) var_4))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) (unsigned short)65505);
}
