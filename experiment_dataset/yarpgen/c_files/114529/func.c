/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114529
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (~((~(var_1)))))))))));
    var_14 = (~(var_0));
    var_15 ^= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) var_12);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((0U) == (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
