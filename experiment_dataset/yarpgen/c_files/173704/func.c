/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173704
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((255U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191))))) - (min(((-(var_1))), (((/* implicit */unsigned int) var_13))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned short)0))))));
                    var_16 = (((-(((/* implicit */int) var_2)))) % (((/* implicit */int) ((arr_8 [i_0] [i_1 + 2] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
    }
    var_17 = (~(var_7));
}
