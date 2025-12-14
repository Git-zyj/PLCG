/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180133
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
    var_15 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned char)0] = ((/* implicit */unsigned char) (_Bool)1);
                    var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */int) (_Bool)1)) != (max((arr_0 [i_2]), (((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) (unsigned char)16))))))))));
                }
            } 
        } 
    } 
}
