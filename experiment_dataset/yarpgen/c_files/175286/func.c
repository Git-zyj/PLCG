/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175286
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) (short)27714)))));
                    var_10 = ((/* implicit */short) (signed char)19);
                    var_11 = ((/* implicit */short) ((int) min((arr_2 [i_0 - 1]), (((/* implicit */unsigned short) (signed char)-19)))));
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) max(((unsigned short)957), (arr_5 [i_0] [i_0 - 1]))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) (short)-11738)));
}
