/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176421
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                arr_6 [i_1] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (1680365636169724814ULL)))))));
                arr_7 [12ULL] [9] [i_0 + 1] = ((/* implicit */unsigned int) (unsigned short)65527);
                arr_8 [i_0] = ((/* implicit */unsigned long long int) max(((+(438809541U))), (((/* implicit */unsigned int) -1230264256))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) (unsigned char)63)))))) || ((_Bool)1)));
}
