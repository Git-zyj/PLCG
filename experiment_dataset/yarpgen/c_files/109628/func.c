/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109628
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
    var_19 = var_5;
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24576)) == (((/* implicit */int) var_4))))), (var_7))))));
    var_21 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (+(max((2147483635), (max((((/* implicit */int) var_13)), (arr_1 [i_1] [i_1])))))));
                    var_23 = ((/* implicit */unsigned long long int) var_16);
                    var_24 = ((/* implicit */long long int) (_Bool)0);
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */long long int) max((min((((/* implicit */int) var_8)), (16777215))), (((/* implicit */int) var_18))));
}
