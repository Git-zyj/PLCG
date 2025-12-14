/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169707
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
    var_14 = ((/* implicit */unsigned char) var_5);
    var_15 = ((/* implicit */unsigned short) max(((unsigned char)43), ((unsigned char)77)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) var_12);
                    var_17 = var_8;
                    var_18 -= ((/* implicit */short) (((+(((int) var_4)))) > (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13))))) : (var_2)))));
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((((short) arr_5 [i_2] [i_1] [i_0])), (((/* implicit */short) arr_5 [i_0] [i_1] [i_1]))));
                    var_19 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
