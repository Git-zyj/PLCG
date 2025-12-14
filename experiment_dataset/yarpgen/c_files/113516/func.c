/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113516
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
    var_18 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) -99059999)), (17410197434184231161ULL)))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = var_5;
                    arr_8 [(unsigned short)6] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (3421517669734109597ULL)));
                    var_19 += ((/* implicit */unsigned long long int) 4);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_12);
}
