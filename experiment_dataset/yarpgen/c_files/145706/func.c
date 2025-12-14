/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145706
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
    var_10 = ((/* implicit */int) var_5);
    var_11 -= ((/* implicit */short) (~(((/* implicit */int) min((var_1), (var_3))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) arr_2 [(unsigned short)4] [i_1]);
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-9091)) > (((/* implicit */int) (short)-9091))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (-(var_4)));
    var_15 &= var_9;
}
