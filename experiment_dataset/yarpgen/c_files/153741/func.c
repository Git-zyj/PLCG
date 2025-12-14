/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153741
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
    var_11 = var_10;
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(arr_4 [i_0 - 1])))), (((((/* implicit */_Bool) var_2)) ? (var_2) : (max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_2]))))))));
                    var_12 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2] [19U]);
                }
            } 
        } 
    } 
}
