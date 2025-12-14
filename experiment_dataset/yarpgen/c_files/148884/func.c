/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148884
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
    var_15 = ((/* implicit */unsigned short) (!((_Bool)1)));
    var_16 -= ((/* implicit */unsigned short) min((0U), (((/* implicit */unsigned int) (_Bool)1))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((min((arr_2 [i_0] [i_1]), (17179869183LL))) / (((/* implicit */long long int) ((106568496U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-16585)))))))) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))));
                    arr_9 [i_2] [i_0] [i_2 - 1] = (+(var_10));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(max((9007199252643840LL), (((/* implicit */long long int) 4294967291U)))))))));
}
