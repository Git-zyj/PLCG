/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148136
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
    var_20 = ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) max(((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [10ULL] [i_2]))) : (var_2))))), (((unsigned long long int) arr_3 [7U] [i_0]))));
                    var_22 = ((/* implicit */signed char) (~(var_4)));
                    var_23 = ((/* implicit */unsigned int) ((0U) > (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49460)) * (((/* implicit */int) (unsigned short)16075)))))));
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */signed char) (unsigned short)16061);
    var_25 -= ((/* implicit */unsigned long long int) var_16);
}
