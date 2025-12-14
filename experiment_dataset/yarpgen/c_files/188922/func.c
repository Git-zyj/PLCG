/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188922
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
    var_12 = (unsigned short)4330;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((unsigned short) ((((/* implicit */int) (unsigned short)3076)) / (((/* implicit */int) arr_2 [i_1]))));
                arr_5 [i_1] [(unsigned short)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61205)) & (((/* implicit */int) (unsigned short)59029))));
            }
        } 
    } 
}
