/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147114
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [2LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)32767))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-13810)))))));
                    var_11 -= ((/* implicit */signed char) (-(((/* implicit */int) ((min((var_1), (((/* implicit */unsigned int) var_2)))) != (((/* implicit */unsigned int) ((int) var_1))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_1);
}
