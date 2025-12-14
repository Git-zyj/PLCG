/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118293
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
    var_12 = ((/* implicit */_Bool) var_6);
    var_13 = ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned long long int) 4121712376U))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [(short)12] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                    var_14 = ((/* implicit */short) ((2177684157U) >> (((-1960190789) + (1960190794)))));
                    var_15 = arr_6 [(unsigned short)12] [i_1];
                }
            } 
        } 
    } 
}
