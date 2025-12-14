/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164624
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((arr_4 [i_1 + 2] [i_2 - 1] [i_2 + 1]) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (var_4)))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_3)))))));
                    var_19 = ((/* implicit */short) (~(((arr_5 [i_0] [(unsigned char)16] [i_2]) ? (min((((/* implicit */unsigned long long int) var_14)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)42979)) != (1)))))))));
                }
            } 
        } 
    } 
    var_20 = var_14;
}
