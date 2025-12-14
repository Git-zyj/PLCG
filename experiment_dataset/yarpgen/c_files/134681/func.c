/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134681
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
    var_20 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2]);
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (signed char)107);
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (short)-1);
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (_Bool)1))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_6);
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (min((((/* implicit */unsigned long long int) min((4294967292U), (((/* implicit */unsigned int) (signed char)107))))), (var_8)))));
}
