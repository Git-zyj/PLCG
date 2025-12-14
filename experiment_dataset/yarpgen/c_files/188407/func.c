/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188407
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
    var_20 = max(((+((+(var_3))))), ((~((-(var_13))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)56008)), ((~((~(1006158717)))))));
                    arr_7 [i_0 + 3] [i_2] [(unsigned short)2] = ((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_0 + 3] [i_0 + 3] [(unsigned short)11]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (~((~(var_14)))));
}
