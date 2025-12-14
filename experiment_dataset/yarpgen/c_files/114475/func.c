/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114475
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (short)6050))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) ((long long int) (-(arr_5 [i_0] [i_1]))));
                    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)6621))));
                    var_23 = ((/* implicit */unsigned long long int) var_18);
                    var_24 = ((/* implicit */signed char) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (var_16)));
}
