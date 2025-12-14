/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156683
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_11 += (-(((/* implicit */int) (_Bool)1)));
                    arr_7 [i_0] [i_0] [i_0] = (~(((/* implicit */int) var_7)));
                    var_12 = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_8);
}
