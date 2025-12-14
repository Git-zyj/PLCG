/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129692
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_1 + 1] [i_1 + 1])) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) var_11)))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)129)) != (((/* implicit */int) (unsigned char)127))))) : (((/* implicit */int) arr_4 [i_0] [i_0])))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_1))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((var_2) ? (((((/* implicit */int) (short)896)) + (((/* implicit */int) var_3)))) : (((((((/* implicit */int) var_3)) << (((var_10) - (3599555109251474956LL))))) >> (((max((var_5), (((/* implicit */long long int) var_14)))) - (7948073930585302317LL)))))));
    var_18 = ((/* implicit */long long int) (unsigned char)127);
}
