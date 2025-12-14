/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14330
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
    var_16 = ((/* implicit */unsigned short) (short)30908);
    var_17 = ((/* implicit */_Bool) min(((unsigned short)2), ((unsigned short)64044)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] [(unsigned char)11] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19271))) == (0U)))));
                arr_7 [i_0] [i_1] = (short)-30909;
                arr_8 [i_1] [3] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)119)) >> (((((/* implicit */int) (unsigned short)59480)) - (59449)))))))) || (((/* implicit */_Bool) (-(min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)6056)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (3441542370U)))) + (((/* implicit */int) (!(var_6))))))));
}
